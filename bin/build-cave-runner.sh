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
mv "${WORKSPACE}/themes/custom_theme-cr-full.json" "${WORKSPACE}/Android/3D Cave Runner - Android Studio/app/src/main/assets/custom_theme.json"
./gradlew :app:assembleMainRelease :app:crashlyticsUploadDistributionMainRelease

