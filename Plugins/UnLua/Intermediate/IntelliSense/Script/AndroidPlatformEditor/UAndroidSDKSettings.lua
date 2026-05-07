---Implements the settings for the Android SDK setup.
---@class UAndroidSDKSettings : UObject
---@field public SDKPath FDirectoryPath @Location on disk of the Android SDK (falls back to ANDROID_HOME environment variable if this is left blank)
---@field public NDKPath FDirectoryPath @Location on disk of the Android NDK (falls back to NDKROOT environment variable if this is left blank)
---@field public JavaPath FDirectoryPath @Location on disk of Java (falls back to JAVA_HOME environment variable if this is left blank)
---@field public SDKAPILevel string @Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)
---@field public NDKAPILevel string @Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices.
local UAndroidSDKSettings = {}

