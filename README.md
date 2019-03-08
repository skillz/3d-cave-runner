# 3D Cave Runner

Skillz integration example: 3D Cave Runner game for Unity Android. This targets the Mercury (v21.0.x) release of the Skillz SDK.

## Building Locally

### Android

These instructions assume `sdk-ota` is cloned, and the `release-mercury` branch is checked out and properly set up. Make sure your submodules have been init'ed. Refer to the [README](https://github.com/skillz/sdk-ota/blob/release-mercury/README.md) for detailed instructions.

Additionally, this guide assumes your machine is set up to build Android apps. Specifically, you must have access to the `sdk-android` repository. The README in [sdk-android](https://github.com/skillz/sdk-android) points to detailed instructions for installing Android Studio, the Android SDK, etc.

#### Work from the "sdk-ota" Repository

First, make sure that you are *not* opening the `master-v21.0` branch directly from the `3d-cave-runner` repo. This branch has an [sdk folder](https://github.com/skillz/3d-cave-runner/tree/master-v21.0/Android/3D%20Cave%20Runner%20-%20Android%20Studio/sdk) that is actually a symlink into the same folder name of the [sdk-android](https://github.com/skillz/sdk-android/tree/31c04c82414dff44f800adc890a3b0cd06dd73ed/sdk) repository.

The reason for this is that SDK team works almost entirely from the [sdk-ota](https://github.com/skillz/sdk-ota) repository. Specifically, the `sdk-android`, `sdk-ios`, `sdk-unity-crossplatform`, and `3d-cave-runner` repositories are submodules under `sdk-ota`. This is why you need access to the `sdk-android` repo.

#### Switch to the "release-mercury" branch

1. Checkout the `release-mercury` branch of the `sdk-ota` repo.
2. Make sure your submodules are up-to-date (re: `git submodule update --force --recursive`).

At this point, the submodule for 3D Cave Runner should be under `<sdk ota repo root>/sdk-integrations/3d-cave-runnder`. The pointer for this submodule should be the latest commit under the `master-v21.0` branch of the 3D Cave Runner repo. If not, please update the pointer. Ask someone for help if you do not know how to do this.

#### Open the Android Studio Project

Fire up Android Studio, and open up the project. It is the `<sdk ota repo root>/sdk-integrations/3d-cave-runner/Android/3D Cave Runner - Android Studio/` folder.

#### Sync "build.gradle" and build

1. In Android Studio, open the `build.gradle` file under the *app* module, not the one at the top-level. If Gradle isn't already syncing, Click the "Sync" button under the floating toolbar that is displayed from the editor.
2. Wait for Gradle to resolve all dependencies sucessfully.
3. If step 2 was a sucess, open the "Build Variants" Panel. It should be on the left side of the IDE.
4. There should be a "Build Variant" dropdown. Select the `localSDKDebug` variant.
5. Attempt to build the project. It's the Build->Make Project menu item.

At this point, the project should compile successfully. Ask someone on the SDK or Integration teams for help if you encounter any issues.