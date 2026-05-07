---@class UCollectionManagerScriptingSubsystem : UEditorSubsystem
local UCollectionManagerScriptingSubsystem = {}

---Re-parent the given collection.
---@param Collection FCollectionScriptingRef
---@param NewParentCollection FCollectionScriptingRef
---@return boolean
function UCollectionManagerScriptingSubsystem:ReparentCollection(Collection, NewParentCollection) end

---Rename the given collection.
---@param Collection FCollectionScriptingRef
---@param NewName string
---@param NewShareType ECollectionScriptingShareType
---@return boolean
function UCollectionManagerScriptingSubsystem:RenameCollection(Collection, NewName, NewShareType) end

---Remove the given assets from the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPaths TArray_FSoftObjectPath_
---@return boolean
function UCollectionManagerScriptingSubsystem:RemoveAssetsFromCollection(Collection, AssetPaths) end

---Remove the given assets from the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPtrs TArray_UObject_
---@return boolean
function UCollectionManagerScriptingSubsystem:RemoveAssetPtrsFromCollection(Collection, AssetPtrs) end

---Remove the given asset from the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPtr UObject
---@return boolean
function UCollectionManagerScriptingSubsystem:RemoveAssetPtrFromCollection(Collection, AssetPtr) end

---Remove the given asset from the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPath FSoftObjectPath
---@return boolean
function UCollectionManagerScriptingSubsystem:RemoveAssetFromCollection(Collection, AssetPath) end

---Remove the given assets from the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetDatas TArray_FAssetData_
---@return boolean
function UCollectionManagerScriptingSubsystem:RemoveAssetDatasFromCollection(Collection, AssetDatas) end

---Remove the given asset from the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetData FAssetData
---@return boolean
function UCollectionManagerScriptingSubsystem:RemoveAssetDataFromCollection(Collection, AssetData) end

---Get the collections in the specified container that contain the given asset.
---@param Container FCollectionScriptingContainerSource
---@param AssetPtr UObject
---@param OutCollections TArray_FCollectionScriptingRef_ @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:GetCollectionsContainingAssetPtr(Container, AssetPtr, OutCollections) end

---Get the collections in the specified container that contain the given asset.
---@param Container FCollectionScriptingContainerSource
---@param AssetData FAssetData
---@param OutCollections TArray_FCollectionScriptingRef_ @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:GetCollectionsContainingAssetData(Container, AssetData, OutCollections) end

---Get the collections in the specified container that contain the given asset.
---@param Container FCollectionScriptingContainerSource
---@param AssetPath FSoftObjectPath
---@param OutCollections TArray_FCollectionScriptingRef_ @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:GetCollectionsContainingAsset(Container, AssetPath, OutCollections) end

---Gets the given collections in the given container (matching only by name).
---@param Container FCollectionScriptingContainerSource
---@param Collection string
---@param OutCollections TArray_FCollectionScriptingRef_ @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:GetCollectionsByName(Container, Collection, OutCollections) end

---Get all available collections in the specified container.
---@param Container FCollectionScriptingContainerSource
---@param OutCollections TArray_FCollectionScriptingRef_ @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:GetCollections(Container, OutCollections) end

---Gets all available collection containers.
---@return TArray_FCollectionScriptingContainerSource_
function UCollectionManagerScriptingSubsystem:GetCollectionContainers() end

---Get the collection container for the base game.
---@return FCollectionScriptingContainerSource
function UCollectionManagerScriptingSubsystem:GetBaseGameCollectionContainer() end

---Get the assets in the given collection.
---@param Collection FCollectionScriptingRef
---@param OutAssets TArray_FAssetData_ @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:GetAssetsInCollection(Collection, OutAssets) end

---Remove all assets from the given collection.
---@param Collection FCollectionScriptingRef
---@return boolean
function UCollectionManagerScriptingSubsystem:EmptyCollection(Collection) end

---Destroy the given collection.
---@param Collection FCollectionScriptingRef
---@return boolean
function UCollectionManagerScriptingSubsystem:DestroyCollection(Collection) end

---Create a new collection with the given name and share type in the provided collection container if it doesn't already exist, or empty the existing collection if it does.
---@param Container FCollectionScriptingContainerSource
---@param Collection string
---@param ShareType ECollectionScriptingShareType
---@param OutNewOrEmptyCollection FCollectionScriptingRef @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:CreateOrEmptyCollection(Container, Collection, ShareType, OutNewOrEmptyCollection) end

---Create a new collection with the given name and share type in the provided collection container.
---@param Container FCollectionScriptingContainerSource
---@param Collection string
---@param ShareType ECollectionScriptingShareType
---@param OutNewCollection FCollectionScriptingRef @[out] 
---@return boolean
function UCollectionManagerScriptingSubsystem:CreateCollection(Container, Collection, ShareType, OutNewCollection) end

---Check whether the given collection exists in the given container (matching both name and share type).
---@param Container FCollectionScriptingContainerSource
---@param Collection string
---@param ShareType ECollectionScriptingShareType
---@return boolean
function UCollectionManagerScriptingSubsystem:CollectionExists(Container, Collection, ShareType) end

---Add the given asset to the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPath FSoftObjectPath
---@return boolean
function UCollectionManagerScriptingSubsystem:AddAssetToCollection(Collection, AssetPath) end

---Add the given assets to the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPaths TArray_FSoftObjectPath_
---@return boolean
function UCollectionManagerScriptingSubsystem:AddAssetsToCollection(Collection, AssetPaths) end

---Add the given asset to the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPtr UObject
---@return boolean
function UCollectionManagerScriptingSubsystem:AddAssetPtrToCollection(Collection, AssetPtr) end

---Add the given assets to the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetPtrs TArray_UObject_
---@return boolean
function UCollectionManagerScriptingSubsystem:AddAssetPtrsToCollection(Collection, AssetPtrs) end

---Add the given asset to the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetData FAssetData
---@return boolean
function UCollectionManagerScriptingSubsystem:AddAssetDataToCollection(Collection, AssetData) end

---Add the given assets to the given collection.
---@param Collection FCollectionScriptingRef
---@param AssetDatas TArray_FAssetData_
---@return boolean
function UCollectionManagerScriptingSubsystem:AddAssetDatasToCollection(Collection, AssetDatas) end

