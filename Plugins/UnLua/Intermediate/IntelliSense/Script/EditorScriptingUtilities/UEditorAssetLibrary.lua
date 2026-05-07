---Utility class to do most of the common functionalities with the ContentBrowser.
---The AssetRegistryHelpers class has more complex utilities. Use FindAssetData to get a FAssetData from an Asset Path.
---The Asset Path can be represented by
---            ie. (Reference/Text Path)       StaticMesh'/Game/MyFolder/MyAsset.MyAsset'
---            ie. (Full Name)                         StaticMesh /Game/MyFolder/MyAsset.MyAsset
---            ie. (Path Name)                         /Game/MyFolder/MyAsset.MyAsset
---            ie. (Package Name)                      /Game/MyFolder/MyAsset
---The Directory Path can be represented by
---            ie. /Game/MyNewFolder/
---            ie. /Game/MyNewFolder
---All operations can be slow. The editor should not be in play in editor mode. It will not work on assets of the type level.
---@class UEditorAssetLibrary : UBlueprintFunctionLibrary
local UEditorAssetLibrary = {}

---Browses to the associated asset and selects it in the most recently used Content Browser (summoning one if necessary)
---This is an asynchronous operation that can take a couple of frames to resolve the request
---@param AssetPaths TArray_string_
function UEditorAssetLibrary.SyncBrowserToObjects(AssetPaths) end

---Set the value associated with a given tag of a loaded asset's metadata.
---@param Object UObject
---@param Tag string
---@param Value string
function UEditorAssetLibrary.SetMetadataTag(Object, Tag, Value) end

---Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the files.
---@param AssetsToSave TArray_UObject_
---@param bOnlyIfIsDirty boolean @[opt] 
---@return boolean
function UEditorAssetLibrary.SaveLoadedAssets(AssetsToSave, bOnlyIfIsDirty) end

---Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the file.
---@param AssetToSave UObject
---@param bOnlyIfIsDirty boolean @[opt] 
---@return boolean
function UEditorAssetLibrary.SaveLoadedAsset(AssetToSave, bOnlyIfIsDirty) end

---Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.
---Will try to checkout the file first. Assets will be loaded before being saved.
---@param DirectoryPath string
---@param bOnlyIfIsDirty boolean @[opt] 
---@param bRecursive boolean @[opt] 
---@return boolean
function UEditorAssetLibrary.SaveDirectory(DirectoryPath, bOnlyIfIsDirty, bRecursive) end

---Save the packages the assets live in. All objects that live in the package will be saved.
---Will try to checkout the file first. The Asset will be loaded before being saved.
---@param AssetToSave string
---@param bOnlyIfIsDirty boolean @[opt] 
---@return boolean
function UEditorAssetLibrary.SaveAsset(AssetToSave, bOnlyIfIsDirty) end

---Rename an asset from the Content Browser that is already loaded.
---Equivalent to a Move operation. Will try to checkout the files.
---@param SourceAsset UObject
---@param DestinationAssetPath string
---@return boolean
function UEditorAssetLibrary.RenameLoadedAsset(SourceAsset, DestinationAssetPath) end

---Rename assets from the Content Browser that are in the folder.
---Equivalent to a Move operation. Will try to checkout the files. The Assets will be loaded before being renamed.
---@param SourceDirectoryPath string
---@param DestinationDirectoryPath string
---@return boolean
function UEditorAssetLibrary.RenameDirectory(SourceDirectoryPath, DestinationDirectoryPath) end

---Rename an asset from the Content Browser. Equivalent to a Move operation.
---Will try to checkout the file. The Asset will be loaded before being renamed.
---@param SourceAssetPath string
---@param DestinationAssetPath string
---@return boolean
function UEditorAssetLibrary.RenameAsset(SourceAssetPath, DestinationAssetPath) end

---Remove the given tag from a loaded asset's metadata.
---@param Object UObject
---@param Tag string
function UEditorAssetLibrary.RemoveMetadataTag(Object, Tag) end

---Create the directory on disk and in the Content Browser.
---@param DirectoryPath string
---@return boolean
function UEditorAssetLibrary.MakeDirectory(DirectoryPath) end

---Load a Blueprint asset from the Content Browser and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.
---@param AssetPath string
---@return TSubclassOf_UObject_
function UEditorAssetLibrary.LoadBlueprintClass(AssetPath) end

---Load an asset from the Content Browser. It will verify if the object is already loaded and only load it if it's necessary.
---@param AssetPath string
---@return UObject
function UEditorAssetLibrary.LoadAsset(AssetPath) end

---Return the list of all the assets found in the DirectoryPath.
---@param DirectoryPath string
---@param bRecursive boolean @[opt] 
---@param bIncludeFolder boolean @[opt] 
---@return TArray_string_
function UEditorAssetLibrary.ListAssets(DirectoryPath, bRecursive, bIncludeFolder) end

---Return the list of all the assets that have the pair of Tag/Value.
---@param TagName string
---@param TagValue string
---@return TArray_string_
function UEditorAssetLibrary.ListAssetByTagValue(TagName, TagValue) end

---Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.
---@param AssetPath string
---@return TMap_string__string_
function UEditorAssetLibrary.GetTagValues(AssetPath) end

---Historically, all project assets were stored in the logical "/Game/" directory
---when using plugins or UEFN projects, we want to ease asset reuse, and so the ambiguous
---"/Game/" directory is untenable. This function will return the useful project name.
---@return string
function UEditorAssetLibrary.GetProjectRootAssetDirectory() end

---Return a valid AssetPath for a loaded asset. The asset need to be a valid asset in the Content Browser.
---Similar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset
---@param LoadedAsset UObject
---@return string
function UEditorAssetLibrary.GetPathNameForLoadedAsset(LoadedAsset) end

---Returns the object's containing package
---@param Object UObject
---@return UPackage
function UEditorAssetLibrary.GetPackageForObject(Object) end

---Get all tags/values of a loaded asset's metadata.
---@param Object UObject
---@return TMap_string__string_
function UEditorAssetLibrary.GetMetadataTagValues(Object) end

---Get the value associated with the given tag of a loaded asset's metadata.
---@param Object UObject
---@param Tag string
---@return string
function UEditorAssetLibrary.GetMetadataTag(Object, Tag) end

---Find Package Referencers for an asset. Only Soft and Hard dependencies would be looked for.
---Soft are dependencies which don't need to be loaded for the object to be used.
---Had are dependencies which are required for correct usage of the source asset and must be loaded at the same time.
---Other references may exist. The asset may be currently used in memory by another asset, by the editor or by code.
---Package dependencies are cached with the asset. False positive can happen until all the assets are loaded and re-saved.
---@param AssetPath string
---@param bLoadAssetsToConfirm boolean @[opt] 
---@return TArray_string_
function UEditorAssetLibrary.FindPackageReferencersForAsset(AssetPath, bLoadAssetsToConfirm) end

---Return the AssetData for the Asset that can then be used with the more complex lib AssetRegistryHelpers.
---@param AssetPath string
---@return FAssetData
function UEditorAssetLibrary.FindAssetData(AssetPath) end

---Duplicate an asset from the Content Browser that is already loaded. Will try to checkout the file.
---@param SourceAsset UObject
---@param DestinationAssetPath string
---@return UObject
function UEditorAssetLibrary.DuplicateLoadedAsset(SourceAsset, DestinationAssetPath) end

---Duplicate asset from the Content Browser that are in the folder.
---Will try to checkout the files. The Assets will be loaded before being duplicated.
---@param SourceDirectoryPath string
---@param DestinationDirectoryPath string
---@return boolean
function UEditorAssetLibrary.DuplicateDirectory(SourceDirectoryPath, DestinationDirectoryPath) end

---Duplicate an asset from the Content Browser. Will try to checkout the file. The Asset will be loaded before being duplicated.
---@param SourceAssetPath string
---@param DestinationAssetPath string
---@return UObject
function UEditorAssetLibrary.DuplicateAsset(SourceAssetPath, DestinationAssetPath) end

---Check if there any asset that exist in the directory.
---@param DirectoryPath string
---@param bRecursive boolean @[opt] 
---@return boolean
function UEditorAssetLibrary.DoesDirectoryHaveAssets(DirectoryPath, bRecursive) end

---Check is the directory exist in the Content Browser.
---@param DirectoryPath string
---@return boolean
function UEditorAssetLibrary.DoesDirectoryExist(DirectoryPath) end

---Check if the asset exists in the Content Browser.
---@param AssetPath string
---@return boolean
function UEditorAssetLibrary.DoesAssetExist(AssetPath) end

---Check if the assets exist in the Content Browser.
---@param AssetPaths TArray_string_
---@return boolean
function UEditorAssetLibrary.DoAssetsExist(AssetPaths) end

---Delete assets from the Content Browser that are already loaded.
---This is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the files as deleted.
---@param AssetsToDelete TArray_UObject_
---@return boolean
function UEditorAssetLibrary.DeleteLoadedAssets(AssetsToDelete) end

---Delete an asset from the Content Browser that is already loaded.
---This is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the file as deleted.
---@param AssetToDelete UObject
---@return boolean
function UEditorAssetLibrary.DeleteLoadedAsset(AssetToDelete) end

---Delete the packages inside a directory. If the directory is then empty, delete the directory.
---This is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the file as deleted. Assets will be loaded before being deleted.
---The search is always recursive. It will try to delete the sub folders.
---@param DirectoryPath string
---@return boolean
function UEditorAssetLibrary.DeleteDirectory(DirectoryPath) end

---Delete the package the assets live in. All objects that live in the package will be deleted.
---This is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the file as deleted. The Asset will be loaded before being deleted.
---@param AssetPathToDelete string
---@return boolean
function UEditorAssetLibrary.DeleteAsset(AssetPathToDelete) end

---Consolidates an asset by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.
---This is useful when you want all references of assets to be replaced by a single asset.
---The function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.
---Next, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.
---@param AssetToConsolidateTo UObject
---@param AssetsToConsolidate TArray_UObject_
---@return boolean
function UEditorAssetLibrary.ConsolidateAssets(AssetToConsolidateTo, AssetsToConsolidate) end

---Checkout the assets from the Content Browser.
---@param AssetsToCheckout TArray_UObject_
---@return boolean
function UEditorAssetLibrary.CheckoutLoadedAssets(AssetsToCheckout) end

---Checkout the asset from the Content Browser.
---@param AssetToCheckout UObject
---@return boolean
function UEditorAssetLibrary.CheckoutLoadedAsset(AssetToCheckout) end

---Checkout assets from the Content Browser. It will load the assets if needed.
---All objects that are in the directory will be checkout. Assets will be loaded before being checkout.
---@param DirectoryPath string
---@param bRecursive boolean @[opt] 
---@return boolean
function UEditorAssetLibrary.CheckoutDirectory(DirectoryPath, bRecursive) end

---Checkout the asset from the Content Browser.
---@param AssetToCheckout string
---@return boolean
function UEditorAssetLibrary.CheckoutAsset(AssetToCheckout) end

