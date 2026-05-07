---@class UMobilePatchingLibrary : UBlueprintFunctionLibrary
local UMobilePatchingLibrary = {}

---Attempt to download manifest file using specified manifest URL.
---On success it will return an object that represents remote content. This object can be queried for additional information, like total content size, download size, etc.
---User can choose to download and install remote content.
---@param RemoteManifestURL string
---@param CloudURL string
---@param InstallDirectory string
---@param OnSucceeded Delegate
---@param OnFailed Delegate
function UMobilePatchingLibrary.RequestContent(RemoteManifestURL, CloudURL, InstallDirectory, OnSucceeded, OnFailed) end

---Whether WiFi connection is currently available
---@return boolean
function UMobilePatchingLibrary.HasActiveWiFiConnection() end

---Get the list of supported platform names on this device. Example: Android_ETC2, Android_ASTC
---@return TArray_string_
function UMobilePatchingLibrary.GetSupportedPlatformNames() end

---Get the installed content. Will return non-null object if there is an installed content at specified directory
---User can choose to mount installed content into the game
---@param InstallDirectory string
---@return UMobileInstalledContent
function UMobilePatchingLibrary.GetInstalledContent(InstallDirectory) end

---Get the name of currently selected device profile name
---@return string
function UMobilePatchingLibrary.GetActiveDeviceProfileName() end

