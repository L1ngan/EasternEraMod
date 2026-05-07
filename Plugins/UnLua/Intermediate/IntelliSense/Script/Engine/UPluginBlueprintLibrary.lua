---A function library of utilities for querying information about plugins.
---@class UPluginBlueprintLibrary : UBlueprintFunctionLibrary
local UPluginBlueprintLibrary = {}

---Determine whether a plugin is mounted.
---@param PluginName string
---@return boolean
function UPluginBlueprintLibrary.IsPluginMounted(PluginName) end

---Get the version name of a plugin.
---        name was stored in OutVersionName, or false otherwise
---@param PluginName string
---@param OutVersionName string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginVersionName(PluginName, OutVersionName) end

---Get the version number of a plugin.
---        number was stored in OutVersion, or false otherwise
---@param PluginName string
---@param OutVersion integer @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginVersion(PluginName, OutVersion) end

---Get the name of the plugin containing an object.
---        name was stored in OutPluginName, or false otherwise
---@param ObjectPath FSoftObjectPath
---@param OutPluginName string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginNameForObjectPath(ObjectPath, OutPluginName) end

---Get the virtual root path for assets in a plugin.
---        root path was stored in OutAssetPath, or false otherwise
---@param PluginName string
---@param OutAssetPath string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginMountedAssetPath(PluginName, OutAssetPath) end

---Get the editor custom virtual path of a plugin.
---        custom virtual path was stored in OutVirtualPath, or false otherwise
---@param PluginName string
---@param OutVirtualPath string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginEditorCustomVirtualPath(PluginName, OutVirtualPath) end

---Get the filesystem path to a plugin's descriptor.
---        filesystem path was stored in OutFilePath, or false otherwise
---@param PluginName string
---@param OutFilePath string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginDescriptorFilePath(PluginName, OutFilePath) end

---Get the description of a plugin.
---        was stored in OutDescription, or false otherwise
---@param PluginName string
---@param OutDescription string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginDescription(PluginName, OutDescription) end

---Get the filesystem path to a plugin's content directory.
---        directory filesystem path was stored in OutContentDir, or false otherwise
---@param PluginName string
---@param OutContentDir string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginContentDir(PluginName, OutContentDir) end

---Get the filesystem path to a plugin's base directory.
---        filesystem path was stored in OutBaseDir, or false otherwise
---@param PluginName string
---@param OutBaseDir string @[out] 
---@return boolean
function UPluginBlueprintLibrary.GetPluginBaseDir(PluginName, OutBaseDir) end

---Get the names of all enabled plugins.
---@return TArray_string_
function UPluginBlueprintLibrary.GetEnabledPluginNames() end

---Get the list of extra directories added by the project that are
---recursively searched for plugins.
---@return TArray_string_
function UPluginBlueprintLibrary.GetAdditionalProjectPluginSearchPaths() end

---Get the list of extra directories that are recursively searched for
---plugins (aside from the engine and project plugin directories).
---@return TArray_string_
function UPluginBlueprintLibrary.GetAdditionalPluginSearchPaths() end

