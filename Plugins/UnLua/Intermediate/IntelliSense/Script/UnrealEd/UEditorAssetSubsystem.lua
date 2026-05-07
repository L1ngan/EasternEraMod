---UEditorAssetSubsystem
---Subsystem for exposing asset related utilities to scripts.
---Asset Paths can be represented in the following ways:
---             (Reference/Text Path)   StaticMesh'/Game/MyFolder/MyAsset.MyAsset'
---             (Full Name)                             StaticMesh /Game/MyFolder/MyAsset.MyAsset
---             (Path Name)                             /Game/MyFolder/MyAsset.MyAsset
---             (Package Name)                  /Game/MyFolder/MyAsset
---Directory Paths can be represented in the following ways:
---             /Game/MyNewFolder/
---             /Game/MyNewFolder
---@class UEditorAssetSubsystem : UEditorSubsystem
local UEditorAssetSubsystem = {}

---Sorts the assets based on their meta data's type.
---Supported types: FString, int, float, FDateTime.
---@param Assets TArray_FAssetData_ @[out] 
---@param MetaDataTag string
---@param MetaDataType EEditorAssetMetaDataSortType
---@param SortOrder EEditorAssetSortOrder
---@return boolean
function UEditorAssetSubsystem:SortByMetaData(Assets, MetaDataTag, MetaDataType, SortOrder) end

---Set the value associated with a given tag of a loaded asset's metadata.
---@param Object UObject
---@param Tag string
---@param Value string
function UEditorAssetSubsystem:SetMetadataTag(Object, Tag, Value) end

---Set the package dirty flag for an asset
---@param Object UObject
---@param bDirtyState boolean
---@return boolean
function UEditorAssetSubsystem:SetDirtyFlag(Object, bDirtyState) end

---Save the packages the assets live in. All objects that live in the packages will be saved. Will try to checkout the files.
---@param AssetsToSave TArray_UObject_
---@param bOnlyIfIsDirty boolean @[opt] 
---@return boolean
function UEditorAssetSubsystem:SaveLoadedAssets(AssetsToSave, bOnlyIfIsDirty) end

---Save the package the asset lives in. All objects that live in the package will be saved. Will try to checkout the file.
---@param AssetToSave UObject
---@param bOnlyIfIsDirty boolean @[opt] 
---@return boolean
function UEditorAssetSubsystem:SaveLoadedAsset(AssetToSave, bOnlyIfIsDirty) end

---Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.
---Will try to checkout the file first. Assets will be loaded before being saved.
---@param DirectoryPath string
---@param bOnlyIfIsDirty boolean @[opt] 
---@param bRecursive boolean @[opt] 
---@return boolean
function UEditorAssetSubsystem:SaveDirectory(DirectoryPath, bOnlyIfIsDirty, bRecursive) end

---Save the packages the assets live in. All objects that live in the package will be saved.
---Will try to checkout the file first. The Asset will be loaded before being saved.
---@param AssetToSave string
---@param bOnlyIfIsDirty boolean @[opt] 
---@return boolean
function UEditorAssetSubsystem:SaveAsset(AssetToSave, bOnlyIfIsDirty) end

---Rename an asset that is already loaded. Equivalent to a Move operation.
---Will try to checkout the file.
---@param SourceAsset UObject
---@param DestinationAssetPath string
---@return boolean
function UEditorAssetSubsystem:RenameLoadedAsset(SourceAsset, DestinationAssetPath) end

---Rename a directory. Equivalent to a Move operation moving all contained assets.
---Will try to checkout the files. The Assets will be loaded before being renamed.
---@param SourceDirectoryPath string
---@param DestinationDirectoryPath string
---@return boolean
function UEditorAssetSubsystem:RenameDirectory(SourceDirectoryPath, DestinationDirectoryPath) end

---Rename an asset. Equivalent to a Move operation.
---Will try to checkout the file. The Asset will be loaded before being renamed.
---@param SourceAssetPath string
---@param DestinationAssetPath string
---@return boolean
function UEditorAssetSubsystem:RenameAsset(SourceAssetPath, DestinationAssetPath) end

---Call this to remove a callback added with AddOnExtractAssetFromFile.
---@param Delegate Delegate
function UEditorAssetSubsystem:RemoveOnExtractAssetFromFile(Delegate) end

---Remove the given tag from a loaded asset's metadata.
---@param Object UObject
---@param Tag string
function UEditorAssetSubsystem:RemoveMetadataTag(Object, Tag) end

---Dynamic version of FOnExtractAssetFromFile.
---@param Files TArray_string_
---@param AssetDataArray TArray_FAssetData_ @[out] 
function UEditorAssetSubsystem:OnExtractAssetFromFileDynamic__DelegateSignature(Files, AssetDataArray) end

---Create a directory on disk.
---@param DirectoryPath string
---@return boolean
function UEditorAssetSubsystem:MakeDirectory(DirectoryPath) end

---Load a Blueprint asset and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.
---@param AssetPath string
---@return TSubclassOf_UObject_
function UEditorAssetSubsystem:LoadBlueprintClass(AssetPath) end

---Load an asset. It will verify if the object is already loaded and only load it if it's necessary.
---@param AssetPath string
---@return UObject
function UEditorAssetSubsystem:LoadAsset(AssetPath) end

---Return the list of all the assets that have the pair of Tag/Value.
---@param TagName string
---@param TagValue string
---@return TArray_string_
function UEditorAssetSubsystem:ListAssetsByTagValue(TagName, TagValue) end

---Return the list of all the assets found in the DirectoryPath.
---@param DirectoryPath string
---@param bRecursive boolean @[opt] 
---@param bIncludeFolder boolean @[opt] 
---@return TArray_string_
function UEditorAssetSubsystem:ListAssets(DirectoryPath, bRecursive, bIncludeFolder) end

---Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.
---@param AssetPath string
---@return TMap_string__string_
function UEditorAssetSubsystem:GetTagValues(AssetPath) end

---Return a valid AssetPath for a loaded asset.
---Similar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset
---@param LoadedAsset UObject
---@return string
function UEditorAssetSubsystem:GetPathNameForLoadedAsset(LoadedAsset) end

---Get all tags/values of a loaded asset's metadata.
---@param Object UObject
---@return TMap_string__string_
function UEditorAssetSubsystem:GetMetadataTagValues(Object) end

---Get the value associated with the given tag of a loaded asset's metadata.
---@param Object UObject
---@param Tag string
---@return string
function UEditorAssetSubsystem:GetMetadataTag(Object, Tag) end

---Returns the length of the computed cooked package name and path
---@param Asset UObject
---@return integer
function UEditorAssetSubsystem:GetLoadedAssetFilenameLengthForCooking(Asset) end

---Returns the length of the computed cooked package name and path
---@param AssetPath string
---@return integer
function UEditorAssetSubsystem:GetAssetFilenameLengthForCooking(AssetPath) end

---Gets all assets which have the given tags.
---@param RequiredTags TSet_string_
---@param AllowedClasses TSet_TSubclassOf_UObject__
---@return TArray_FAssetData_
function UEditorAssetSubsystem:GetAllAssetsByMetaDataTags(RequiredTags, AllowedClasses) end

---Find Package Referencers for an asset. Only Soft and Hard dependencies will be looked for.
---Soft are dependencies which don't need to be loaded for the object to be used.
---Hard are dependencies which are required for correct usage of the source asset and must be loaded at the same time.
---Other references may exist. The asset may be currently used in memory by another asset, by the editor or by code.
---Package dependencies are cached with the asset. False positives can happen until all the assets are loaded and re-saved.
---@param AssetPath string
---@param bLoadAssetsToConfirm boolean @[opt] 
---@return TArray_string_
function UEditorAssetSubsystem:FindPackageReferencersForAsset(AssetPath, bLoadAssetsToConfirm) end

---Return the AssetData for the Asset that can then be used with AssetRegistryHelpers.
---@param AssetPath string
---@return FAssetData
function UEditorAssetSubsystem:FindAssetData(AssetPath) end

---Duplicate an asset that is already loaded. Will try to checkout the file.
---@param SourceAsset UObject
---@param DestinationAssetPath string
---@return UObject
function UEditorAssetSubsystem:DuplicateLoadedAsset(SourceAsset, DestinationAssetPath) end

---Duplicate a directory and the assets in it.
---Will try to checkout the files. The Assets will be loaded before being duplicated.
---@param SourceDirectoryPath string
---@param DestinationDirectoryPath string
---@return boolean
function UEditorAssetSubsystem:DuplicateDirectory(SourceDirectoryPath, DestinationDirectoryPath) end

---Duplicate an asset. Will try to checkout the file. The Asset will be loaded before being duplicated.
---@param SourceAssetPath string
---@param DestinationAssetPath string
---@return UObject
function UEditorAssetSubsystem:DuplicateAsset(SourceAssetPath, DestinationAssetPath) end

---Check if a directory exists.
---@param DirectoryPath string
---@return boolean
function UEditorAssetSubsystem:DoesDirectoryExist(DirectoryPath) end

---Check if a directory contains any assets.
---@param DirectoryPath string
---@param bRecursive boolean @[opt] 
---@return boolean
function UEditorAssetSubsystem:DoesDirectoryContainAssets(DirectoryPath, bRecursive) end

---Check if an asset exists in the Asset Registry.
---@param AssetPath string
---@return boolean
function UEditorAssetSubsystem:DoesAssetExist(AssetPath) end

---Check if assets exist in the Asset Registry.
---@param AssetPaths TArray_string_
---@return boolean
function UEditorAssetSubsystem:DoAssetsExist(AssetPaths) end

---Delete assets that are already loaded.
---This is a Force Delete. It does not check if the assets have references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the files as deleted.
---@param AssetsToDelete TArray_UObject_
---@return boolean
function UEditorAssetSubsystem:DeleteLoadedAssets(AssetsToDelete) end

---Delete an asset that is already loaded.
---This is a Force Delete. It does not check if the asset has references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the file as deleted.
---@param AssetToDelete UObject
---@return boolean
function UEditorAssetSubsystem:DeleteLoadedAsset(AssetToDelete) end

---Delete the packages inside a directory. If the directory is then empty, delete the directory.
---This is a Force Delete. It does not check if the assets have references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the file as deleted. Assets will be loaded before being deleted.
---The search is always recursive. It will try to delete the sub folders.
---@param DirectoryPath string
---@return boolean
function UEditorAssetSubsystem:DeleteDirectory(DirectoryPath) end

---Delete the package an asset is in. All objects in the package will be deleted.
---This is a Force Delete. It does not check if the asset has references in other Levels or by Actors.
---It will close all the asset editors and may clear the Transaction buffer (Undo History).
---Will try to mark the file as deleted. The Asset will be loaded before being deleted.
---@param AssetPathToDelete string
---@return boolean
function UEditorAssetSubsystem:DeleteAsset(AssetPathToDelete) end

---Consolidates assets by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.
---This is useful when you want all references of assets to be replaced by a single asset.
---The function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.
---Next, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.
---@param AssetToConsolidateTo UObject
---@param AssetsToConsolidate TArray_UObject_
---@return boolean
function UEditorAssetSubsystem:ConsolidateAssets(AssetToConsolidateTo, AssetsToConsolidate) end

---Checkout the assets.
---@param AssetsToCheckout TArray_UObject_
---@return boolean
function UEditorAssetSubsystem:CheckoutLoadedAssets(AssetsToCheckout) end

---Checkout the asset corresponding to an object.
---@param AssetToCheckout UObject
---@return boolean
function UEditorAssetSubsystem:CheckoutLoadedAsset(AssetToCheckout) end

---Checkout all assets in a directory. It will load the assets if needed.
---All objects that are in the directory will be checked out. Assets will be loaded before being checked out.
---@param DirectoryPath string
---@param bRecursive boolean @[opt] 
---@return boolean
function UEditorAssetSubsystem:CheckoutDirectory(DirectoryPath, bRecursive) end

---Checkout an asset.
---@param AssetToCheckout string
---@return boolean
function UEditorAssetSubsystem:CheckoutAsset(AssetToCheckout) end

---Call this to add a callback to extract an asset from a file,
---for example from a drag and drop operation.
---@param Delegate Delegate
function UEditorAssetSubsystem:AddOnExtractAssetFromFile(Delegate) end

