---@class UAssetTagsSubsystem : UEngineSubsystem
local UAssetTagsSubsystem = {}

---@param Name string
---@param NewParentName string
---@return boolean
function UAssetTagsSubsystem:ReparentCollection(Name, NewParentName) end

---@param Name string
---@param NewName string
---@return boolean
function UAssetTagsSubsystem:RenameCollection(Name, NewName) end

---@param Name string
---@param AssetPathNames TArray_string_
---@return boolean
function UAssetTagsSubsystem:RemoveAssetsFromCollection(Name, AssetPathNames) end

---@param Name string
---@param AssetPtrs TArray_UObject_
---@return boolean
function UAssetTagsSubsystem:RemoveAssetPtrsFromCollection(Name, AssetPtrs) end

---@param Name string
---@param AssetPtr UObject
---@return boolean
function UAssetTagsSubsystem:RemoveAssetPtrFromCollection(Name, AssetPtr) end

---@param Name string
---@param AssetPathName string
---@return boolean
function UAssetTagsSubsystem:RemoveAssetFromCollection(Name, AssetPathName) end

---@param Name string
---@param AssetDatas TArray_FAssetData_
---@return boolean
function UAssetTagsSubsystem:RemoveAssetDatasFromCollection(Name, AssetDatas) end

---@param Name string
---@param AssetData FAssetData
---@return boolean
function UAssetTagsSubsystem:RemoveAssetDataFromCollection(Name, AssetData) end

---@param Name string
---@param AssetPaths TArray_FSoftObjectPath_
---@return boolean
function UAssetTagsSubsystem:K2_RemoveAssetsFromCollection(Name, AssetPaths) end

---@param Name string
---@param AssetPath FSoftObjectPath
---@return boolean
function UAssetTagsSubsystem:K2_RemoveAssetFromCollection(Name, AssetPath) end

---Get the names of the collections that contain the given asset.
---Use this for in-game access. Use the Collections Manager Scripting Subsystem for any other use case.
---@param AssetPath FSoftObjectPath
---@return TArray_string_
function UAssetTagsSubsystem:K2_GetCollectionsContainingAsset(AssetPath) end

---@param Name string
---@param AssetPath FSoftObjectPath
---@return boolean
function UAssetTagsSubsystem:K2_AddAssetToCollection(Name, AssetPath) end

---@param Name string
---@param AssetPaths TArray_FSoftObjectPath_
---@return boolean
function UAssetTagsSubsystem:K2_AddAssetsToCollection(Name, AssetPaths) end

---Get the names of the collections that contain the given asset.
---Use this for in-game access. Use the Collections Manager Scripting Subsystem for any other use case.
---@param AssetPtr UObject
---@return TArray_string_
function UAssetTagsSubsystem:GetCollectionsContainingAssetPtr(AssetPtr) end

---Get the names of the collections that contain the given asset.
---Use this for in-game access. Use the Collections Manager Scripting Subsystem for any other use case.
---@param AssetData FAssetData
---@return TArray_string_
function UAssetTagsSubsystem:GetCollectionsContainingAssetData(AssetData) end

---@param AssetPathName string
---@return TArray_string_
function UAssetTagsSubsystem:GetCollectionsContainingAsset(AssetPathName) end

---Get the names of all available collections.
---Use this for in-game access. Use the Collections Manager Scripting Subsystem for any other use case.
---@return TArray_string_
function UAssetTagsSubsystem:GetCollections() end

---Get the assets in the given collection.
---Use this for in-game access. Use the Collections Manager Scripting Subsystem for any other use case.
---@param Name string
---@return TArray_FAssetData_
function UAssetTagsSubsystem:GetAssetsInCollection(Name) end

---@param Name string
---@return boolean
function UAssetTagsSubsystem:EmptyCollection(Name) end

---@param Name string
---@return boolean
function UAssetTagsSubsystem:DestroyCollection(Name) end

---@param Name string
---@param ShareType ECollectionScriptingShareType
---@return boolean
function UAssetTagsSubsystem:CreateCollection(Name, ShareType) end

---Check whether the given collection exists.
---Use this for in-game access. Use the Collections Manager Scripting Subsystem for any other use case.
---@param Name string
---@return boolean
function UAssetTagsSubsystem:CollectionExists(Name) end

---@param Name string
---@param AssetPathName string
---@return boolean
function UAssetTagsSubsystem:AddAssetToCollection(Name, AssetPathName) end

---@param Name string
---@param AssetPathNames TArray_string_
---@return boolean
function UAssetTagsSubsystem:AddAssetsToCollection(Name, AssetPathNames) end

---@param Name string
---@param AssetPtr UObject
---@return boolean
function UAssetTagsSubsystem:AddAssetPtrToCollection(Name, AssetPtr) end

---@param Name string
---@param AssetPtrs TArray_UObject_
---@return boolean
function UAssetTagsSubsystem:AddAssetPtrsToCollection(Name, AssetPtrs) end

---@param Name string
---@param AssetData FAssetData
---@return boolean
function UAssetTagsSubsystem:AddAssetDataToCollection(Name, AssetData) end

---@param Name string
---@param AssetDatas TArray_FAssetData_
---@return boolean
function UAssetTagsSubsystem:AddAssetDatasToCollection(Name, AssetDatas) end

