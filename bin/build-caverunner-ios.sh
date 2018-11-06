#!/bin/bash
cd "${WORKSPACE}"

# Link Sidious stored location for Unity lib.
sudo ln -sf "/opt/sdk-integrations/Unity_2017.1.1/libiPhone-lib.a"  "${WORKSPACE}/iOS/3D Cave Runner Xcode/Libraries/libiPhone-lib.a"

# Clean old artifacts
rm -rf "iOS/3D Cave Runner Xcode/Cave Runner.xcarchive"
rm -rf "iOS/3D Cave Runner Xcode/3DCaveRunner.xcarchive"
rm -rf "iOS/3D Cave Runner Xcode/3DCaveRunnerEnterpise.xcarchive"
rm -rf "iOS/3D Cave Runner Xcode/Cave Runner.xcarchive.zip"
rm -rf "iOS/3D Cave Runner Xcode/3DCaveRunner.xcarchive.zip"
rm -rf "iOS/3D Cave Runner Xcode/3DCaveRunnerEnterpise.xcarchive.zip"
rm -rf "iOS/3D Cave Runner Xcode/Skillz.framework"
rm -rf "iOS/3D Cave Runner Xcode/build"

unzip -q 'Skillz.framework.zip' -d "./iOS/3D Cave Runner Xcode/"

cd "iOS/3D Cave Runner Xcode"

export SDKVERSION=$(/usr/libexec/PlistBuddy -c "Print :CFBundleVersion" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/Info.plist")
export NEW_TAG=`git describe --match '*.*.*'`

export SDKVERSION=${SDKVERSION}

echo ${SDKVERSION}

# Set Version numbers
/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString \"${SDKVERSION}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Info.plist"
/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString \"${SDKVERSION}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/VCInfo.plist"

/usr/libexec/PlistBuddy -c "Set :CFBundleVersion \"${NEW_TAG}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Info.plist"
/usr/libexec/PlistBuddy -c "Set :CFBundleVersion \"${NEW_TAG}\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/VCInfo.plist"

# Move Custom theme for VC into Skillz Framework
cp "${WORKSPACE}/themes/themeVirtual.json" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/theme.json"

# Build VC .xcarchive
set -o pipefail && xcodebuild -sdk iphoneos -scheme VC -configuration Release clean archive \
-archivePath "./Cave Runner" ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

# Build VC IPA for Crashlytics
xcodebuild -exportArchive -archivePath "./Cave Runner.xcarchive" -exportOptionsPlist "${WORKSPACE}/iOS/VCAdHocArchive.plist" \
-exportPath "${WORKSPACE}/VCOnly/" | xcpretty

zip -y -r "Cave Runner.xcarchive.zip" "Cave Runner.xcarchive"

## Build Full .xcarchive

## Move Custom theme for Full into Skillz Framework
cp "${WORKSPACE}/themes/theme.json" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/theme.json"

set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Release clean archive \
-archivePath "./3DCaveRunner" ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty

#Build Full IPA for Crashlytics

xcodebuild -exportArchive -archivePath "./3DCaveRunner.xcarchive" -exportOptionsPlist "${WORKSPACE}/iOS/FullAdHocArchive.plist" \
-exportPath "${WORKSPACE}/FullAdhoc/" | xcpretty

## Zip Archive for storing on Jenkins artifacts
zip -y -r 3DCaveRunner.xcarchive.zip 3DCaveRunner.xcarchive

## Build Enterprise

## Move Custom theme for Full into Skillz Framework
cp "${WORKSPACE}/themes/theme.json" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Skillz.framework/theme.json"

# Set bundle identifier
/usr/libexec/PlistBuddy -c "Set :CFBundleIdentifier \"com.skillz.enterprise.3Dcaverunner\"" -c "Save" "${WORKSPACE}/iOS/3D Cave Runner Xcode/Info.plist"

# Compile Enterprise Archive
set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Enterprise clean archive \
-archivePath "./3DCaveRunnerEnterpise" ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc" | xcpretty

# Build Enterprise IPA for Crashlytics
xcodebuild -exportArchive -archivePath "./3DCaveRunnerEnterpise.xcarchive" -exportOptionsPlist "${WORKSPACE}/iOS/EnterpriseArchive.plist" \
-exportPath "${WORKSPACE}/Enterprise/" | xcpretty

# Zip Enterprise Archive for storing on Jenkins artifacts
zip -y -r 3DCaveRunnerEnterpise.xcarchive.zip 3DCaveRunnerEnterpise.xcarchive

cd "${WORKSPACE}"

"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
-ipaPath "${WORKSPACE}/FullAdhoc/Full.ipa" \
-groupAliases SDK,qa-2,tournament-server,product

"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
-ipaPath "${WORKSPACE}/VCOnly/VC.ipa" \
-groupAliases SDK,qa-2,tournament-server,product

"${WORKSPACE}/iOS/3D Cave Runner Xcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
-ipaPath "${WORKSPACE}/Enterprise/Full.ipa" \
-groupAliases SDK,qa-2,tournament-server,product,exec