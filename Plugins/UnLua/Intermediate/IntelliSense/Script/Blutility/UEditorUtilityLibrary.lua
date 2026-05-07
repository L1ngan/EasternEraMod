---Expose editor utility functions to Blutilities
---@class UEditorUtilityLibrary : UBlueprintFunctionLibrary
local UEditorUtilityLibrary = {}

---Sync the Content Browser to the given folder(s)
---@param FolderList TArray_string_
function UEditorUtilityLibrary.SyncBrowserToFolders(FolderList) end

---Renames an asset (cannot move folders)
---@param Asset UObject
---@param NewName string
function UEditorUtilityLibrary.RenameAsset(Asset, NewName) end

---@return TArray_AActor_
function UEditorUtilityLibrary.GetSelectionSet() end

---@param Origin FVector @[out] 
---@param BoxExtent FVector @[out] 
---@param SphereRadius number @[out] 
function UEditorUtilityLibrary.GetSelectionBounds(Origin, BoxExtent, SphereRadius) end

---Returns the folders that are selected in the path view for the content browser
---@return TArray_string_
function UEditorUtilityLibrary.GetSelectedPathViewFolderPaths() end

---Gets the path to the currently selected folder in the content browser
---@return TArray_string_
function UEditorUtilityLibrary.GetSelectedFolderPaths() end

---Gets the set of currently selected classes
---@return TArray_TSubclassOf_UObject__
function UEditorUtilityLibrary.GetSelectedBlueprintClasses() end

---@param AssetClass TSubclassOf_UObject_
---@return TArray_UObject_
function UEditorUtilityLibrary.GetSelectedAssetsOfClass(AssetClass) end

---Gets the set of currently selected assets
---@return TArray_UObject_
function UEditorUtilityLibrary.GetSelectedAssets() end

---Gets the set of currently selected asset data
---@return TArray_FAssetData_
function UEditorUtilityLibrary.GetSelectedAssetData() end

---Attempts to get the path for the active content browser, returns false if there is no active content browser
---or if it was a virtual path
---@param OutPath string @[out] 
---@return boolean
function UEditorUtilityLibrary.GetCurrentContentBrowserPath(OutPath) end

---Gets the current content browser path if one is open, whether it is internal or virtual.
---@return FContentBrowserItemPath
function UEditorUtilityLibrary.GetCurrentContentBrowserItemPath() end

---Attempts to find the actor specified by PathToActor in the current editor world
---@param PathToActor string
---@return AActor
function UEditorUtilityLibrary:GetActorReference(PathToActor) end

---Searches the blueprint's widget hierarchy for a widget with the specified name
---@param WidgetBlueprint UWidgetBlueprint
---@param WidgetName string
---@return UWidget
function UEditorUtilityLibrary.FindSourceWidgetByName(WidgetBlueprint, WidgetName) end

---@param WidgetBP UWidgetBlueprint
function UEditorUtilityLibrary.ConvertToEditorUtilityWidget(WidgetBP) end

---@param Object UObject
---@param Branches ECastToWidgetBlueprintCases @[out] 
---@param AsWidgetBlueprint UWidgetBlueprint @[out] 
function UEditorUtilityLibrary.CastToWidgetBlueprint(Object, Branches, AsWidgetBlueprint) end

---Create a new widget and add to the specific widget blueprint's widget tree
---@param WidgetBlueprint UWidgetBlueprint
---@param WidgetClass TSubclassOf_UWidget_
---@param WidgetName string
---@param WidgetParentName string
---@return UWidget
function UEditorUtilityLibrary.AddSourceWidget(WidgetBlueprint, WidgetClass, WidgetName, WidgetParentName) end

