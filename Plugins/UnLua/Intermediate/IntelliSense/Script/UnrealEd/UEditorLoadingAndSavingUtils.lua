---This class is a wrapper for editor loading and saving functionality
---It is meant to contain only functions that can be executed in script (but are also allowed in C++).
---It is separated from FEditorFileUtils to ensure new easier to use methods can be created without breaking FEditorFileUtils backwards compatibility
---However this should be used in place of FEditorFileUtils wherever possible as the goal is to deprecate FEditorFileUtils eventually
---@class UEditorLoadingAndSavingUtils : UObject
local UEditorLoadingAndSavingUtils = {}

---Unloads a list of packages
---@param PackagesToUnload TArray_UPackage_
---@param bOutAnyPackagesUnloaded boolean @[out] 
---@param OutErrorMessage string @[out] 
function UEditorLoadingAndSavingUtils.UnloadPackages(PackagesToUnload, bOutAnyPackagesUnloaded, OutErrorMessage) end

---Save all packages. Optionally prompting the user to select which packages to save.
---Prompt the user to select which dirty packages to save and check them out from source control (if enabled).
---@param PackagesToSave TArray_UPackage_
---@param bOnlyDirty boolean
---@return boolean
function UEditorLoadingAndSavingUtils.SavePackagesWithDialog(PackagesToSave, bOnlyDirty) end

---Save all packages.
---Assume all dirty packages should be saved and check out from source control (if enabled).
---@param PackagesToSave TArray_UPackage_
---@param bOnlyDirty boolean
---@return boolean
function UEditorLoadingAndSavingUtils.SavePackages(PackagesToSave, bOnlyDirty) end

---Saves the specified map, returning true on success.
---@param World UWorld
---@param AssetPath string
---@return boolean
function UEditorLoadingAndSavingUtils.SaveMap(World, AssetPath) end

---Looks at all currently loaded packages and saves them if their "bDirty" flag is set.
---Prompt the user to select which dirty packages to save and check them out from source control (if enabled).
---@param bSaveMapPackages boolean
---@param bSaveContentPackages boolean
---@return boolean
function UEditorLoadingAndSavingUtils.SaveDirtyPackagesWithDialog(bSaveMapPackages, bSaveContentPackages) end

---Looks at all currently loaded packages and saves them if their "bDirty" flag is set.
---Assume all dirty packages should be saved and check out from source control (if enabled).
---@param bSaveMapPackages boolean
---@param bSaveContentPackages boolean
---@return boolean
function UEditorLoadingAndSavingUtils.SaveDirtyPackages(bSaveMapPackages, bSaveContentPackages) end

---Saves the active level, prompting the use for checkout if necessary.
---@return boolean
function UEditorLoadingAndSavingUtils.SaveCurrentLevel() end

---Helper function that attempts to reload the specified top-level packages.
---@param PackagesToReload TArray_UPackage_
---@param bOutAnyPackagesReloaded boolean @[out] 
---@param OutErrorMessage string @[out] 
---@param InteractionMode EReloadPackagesInteractionMode @[opt] 
function UEditorLoadingAndSavingUtils.ReloadPackages(PackagesToReload, bOutAnyPackagesReloaded, OutErrorMessage, InteractionMode) end

---@param PathToTemplateLevel string
---@param bSaveExistingMap boolean
---@return UWorld
function UEditorLoadingAndSavingUtils.NewMapFromTemplate(PathToTemplateLevel, bSaveExistingMap) end

---@param bSaveExistingMap boolean
---@return UWorld
function UEditorLoadingAndSavingUtils.NewBlankMap(bSaveExistingMap) end

---Prompts the user to save the current map if necessary, the presents a load dialog and
---loads a new map if selected by the user.
---@return UWorld
function UEditorLoadingAndSavingUtils.LoadMapWithDialog() end

---Loads the specified map.  Does not prompt the user to save the current map.
---@param Filename string
---@return UWorld
function UEditorLoadingAndSavingUtils.LoadMap(Filename) end

---Imports a file such as (FBX or obj) and spawns actors f into the current level
---@param Filename string
function UEditorLoadingAndSavingUtils.ImportScene(Filename) end

---Appends array with all currently dirty map packages.
---@param OutDirtyPackages TArray_UPackage_ @[out] 
function UEditorLoadingAndSavingUtils.GetDirtyMapPackages(OutDirtyPackages) end

---Appends array with all currently dirty content packages.
---@param OutDirtyPackages TArray_UPackage_ @[out] 
function UEditorLoadingAndSavingUtils.GetDirtyContentPackages(OutDirtyPackages) end

---Exports the current scene
---@param bExportSelectedActorsOnly boolean
function UEditorLoadingAndSavingUtils.ExportScene(bExportSelectedActorsOnly) end

