#####
# Build VC and Full for Android
#####
cd "${WORKSPACE}/Android/3D Cave Runner - Android Studio"
printf "apiSecret=bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1\n" >> app/fabric.properties

./gradlew clean :app:assembleVconlyRelease :app:crashlyticsUploadDistributionVconlyRelease --stacktrace --info --debug
./gradlew :app:assembleMainRelease :app:crashlyticsUploadDistributionMainRelease --stacktrace --info --debug

#####
# Build VC and Full for iOS Crashlytics, and .xcarchives
#####

cd "${WORKSPACE}"

rm -rf "./iOS/3D Cave Runner Xcode/Skillz.framework"
unzip -q 'Skillz.framework.zip' -d "./iOS/3D Cave Runner Xcode/Skillz.framework"

cd "iOS/3D Cave Runner Xcode"

export SDKVERSION=$(/usr/libexec/PlistBuddy -c "Print :CFBundleVersion" "./Skillz.framework/Info.plist")
export NEW_TAG=`TZ=America/New_York date '+%y-%m-%d-%H:%M'`-${BUILD_NUMBER}

export SDKVERSION=${SDKVERSION}

# Set Version numbers
/usr/libexec/PlistBuddy -c "Set :CFBundleVersion \"${SDKVERSION}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Info.plist"
/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString \"${NEW_TAG}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Info.plist"

# Build VC for Crashlytics
set -o pipefail && xcodebuild -sdk iphoneos -scheme VC -configuration Release clean build \
ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

# Build VC .xcarchive
set -o pipefail && xcodebuild -sdk iphoneos -scheme VC -configuration Release clean archive \
-archivePath ./VC-CaveRunner ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

# Build Full for Crashlytics
set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Release clean build \
ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

# Build Full .xcarchive
set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Release clean archive \
-archivePath ./Full-CaveRunner ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

# Zip Archive for storing on Jenkins artifacts
zip -y -r VC-CaveRunner.xcarchive.zip VC-CaveRunner.xcarchive

zip -y -r Full-CaveRunner.xcarchive.zip Full-CaveRunner.xcarchive

cd "${WORKSPACE}"

# Package VC Release Build
mkdir -p "${WORKSPACE}/Payload/"
mv "${WORKSPACE}/iOS/3D Cave Runner Xcode/build/Release-iphoneos/CaveRunnerZ.app" "${WORKSPACE}/Payload/"
zip -r "CaveRunnerZ.ipa" "Payload"
rm -rf "${WORKSPACE}/Payload/"

# Package Full Release Build
mkdir -p "${WORKSPACE}/Payload/"
mv "${WORKSPACE}/iOS/3D Cave Runner Xcode/build/Release-iphoneos/3DCaveRunner.app" "${WORKSPACE}/Payload/"
zip -r "3DCaveRunner.ipa" "Payload"
rm -rf "${WORKSPACE}/Payload/"

# Store Dsym files
unzip -q Skillz.framework.dSYM.zip -d "iOS/3D Cave Runner Xcode/build/Release-iphoneos"
unzip -q Skillz_DEBUG.framework.dSYM.zip -d "iOS/3D Cave Runner Xcode/build/Debug-iphoneos"

"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
-ipaPath "${WORKSPACE}/3DCaveRunner.ipa" \
-groupAliases SDK,qa-2,tournament-server,product

"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
-ipaPath "${WORKSPACE}/CaveRunnerZ.ipa" \
-groupAliases SDK,qa-2,tournament-server,product
