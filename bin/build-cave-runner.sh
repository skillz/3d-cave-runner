#!/bin/bash
#####
# Build VC and Full for Android
#####

cd "${WORKSPACE}/Android/3D Cave Runner - Android Studio"
rm -rf "./build"

printf "apiSecret=bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1\n" >> app/fabric.properties

# Link Sidious location for Android SDK
sudo ln -sf /Users/opsadmin/Library/Android/sdk /usr/local/android-sdk-linux
# Compile Apps
# Clean dependencies so latest Skillz SDK is fetched
./gradlew --refresh-dependencies
# Move theme for VC
mv "${WORKSPACE}/themes/custom_theme-cr-vc.json" "${WORKSPACE}/Android/3D Cave Runner - Android Studio/app/src/main/assets/custom_theme.json"
./gradlew clean :app:assembleVconlyRelease :app:crashlyticsUploadDistributionVconlyRelease
# Move theme for Full
#mv "${WORKSPACE}/themes/custom_theme-cr-full.json" "${WORKSPACE}/Android/3D Cave Runner - Android Studio/app/src/main/assets/custom_theme.json"
#./gradlew :app:assembleMainRelease :app:crashlyticsUploadDistributionMainRelease

#####
# Build VC and Full for iOS Crashlytics, and .xcarchives
#####

cd "${WORKSPACE}"

# Link Sidious stored location for Unity lib.
sudo ln -sf "/opt/sdk-integrations/Unity_2017.1.1/libiPhone-lib.a"  "${WORKSPACE}/iOS/3D Cave Runner Xcode/Libraries/libiPhone-lib.a"

# Clean old artifacts
rm -rf "iOS/3D Cave Runner Xcode/Cave Runner.xcarchive.zip"
rm -rf "iOS/3D Cave Runner Xcode/3DCaveRunner.xcarchive.zip"
rm -rf "iOS/3D Cave Runner Xcode/Skillz.framework"
rm -rf "iOS/3D Cave Runner Xcode/build"

unzip -q 'Skillz.framework.zip' -d "./iOS/3D Cave Runner Xcode/"

cd "iOS/3D Cave Runner Xcode"

export SDKVERSION=$(/usr/libexec/PlistBuddy -c "Print :CFBundleVersion" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/Info.plist")
export NEW_TAG=`TZ=America/New_York date '+%y-%m-%d-%H:%M'`-${BUILD_NUMBER}

export SDKVERSION=${SDKVERSION}

echo ${SDKVERSION}

# Set Version numbers
/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString \"${SDKVERSION}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Info.plist"

/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString \"${SDKVERSION}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/VCInfo.plist"

# Move Custom theme for VC into Skillz Framework
mv "${WORKSPACE}/themes/themeVirtual.json" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/theme.json"

# Build VC for Crashlytics
set -o pipefail && xcodebuild -sdk iphoneos -scheme VC -configuration Release clean build \
ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

# Package VC Release Build
rm -rf "${WORKSPACE}/PayloadVC/"
mkdir -p "${WORKSPACE}/PayloadVC/"
mv "${WORKSPACE}/iOS/3D Cave Runner Xcode/build/Release-iphoneos/Cave Runner.app" "${WORKSPACE}/PayloadVC/"

# Build VC .xcarchive
set -o pipefail && xcodebuild -sdk iphoneos -scheme VC -configuration Release clean archive \
-archivePath "./Cave Runner" ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

## Move Custom theme for Full into Skillz Framework
#mv "${WORKSPACE}/themes/theme.json" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/theme.json"

## Build Full for Crashlytics
#set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Release clean build \
#ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty
#
## Package Full Release Build
#rm -rf "${WORKSPACE}/PayloadFull/"
#mkdir -p "${WORKSPACE}/PayloadFull/"
#mv "${WORKSPACE}/iOS/3D Cave Runner Xcode/build/Release-iphoneos/3dCaveRun.app" "${WORKSPACE}/PayloadFull/"
#
## Build Full .xcarchive
#set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Release clean archive \
#-archivePath ./3DCaveRunner ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty
#
## Zip Archive for storing on Jenkins artifacts
#zip -y -r "Cave Runner.xcarchive.zip" "Cave Runner.xcarchive"
#zip -y -r 3DCaveRunner.xcarchive.zip 3DCaveRunner.xcarchive

# Remove archives
rm -rf "iOS/3D Cave Runner Xcode/Cave Runner.xcarchive"
#rm -rf "iOS/3D Cave Runner Xcode/3DCaveRunner.xcarchive"

cd "${WORKSPACE}"

# Create IPAs
rm -rf "3DCaveRunner.ipa"
rm -rf "Cave Runner.ipa"

rm -rf "Payload"
mv "PayloadVC" "Payload"
zip -r "Cave Runner.ipa" "Payload"

#rm -rf "Payload"
#mv "PayloadFull" "Payload"
#zip -r "3DCaveRunner.ipa" "Payload"


# Store Dsym files
unzip -q Skillz.framework.dSYM.zip -d "iOS/3D Cave Runner Xcode/build/Release-iphoneos"
unzip -q Skillz_DEBUG.framework.dSYM.zip -d "iOS/3D Cave Runner Xcode/build/Debug-iphoneos"

#"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
#bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
#-ipaPath "${WORKSPACE}/3DCaveRunner.ipa" \
#-groupAliases SDK,qa-2,tournament-server,product

"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
-ipaPath "${WORKSPACE}/Cave Runner.ipa" \
-groupAliases SDK,qa-2,tournament-server,product
