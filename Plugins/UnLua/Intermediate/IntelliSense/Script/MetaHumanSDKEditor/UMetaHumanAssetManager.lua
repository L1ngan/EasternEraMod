---Manages MetaHuman characters and compatible assets in the project
---@class UMetaHumanAssetManager : UBlueprintFunctionLibrary
local UMetaHumanAssetManager = {}

---Updates the stored asset details for a MetaHuman Asset
---@param Asset FMetaHumanAssetDescription @[out] 
---@return FMetaHumanAssetDescription
function UMetaHumanAssetManager.UpdateAssetDetails(Asset) end

---Updates the stored package dependencies for a MetaHuman Asset
---@param Asset FMetaHumanAssetDescription @[out] 
---@return FMetaHumanAssetDescription
function UMetaHumanAssetManager.UpdateAssetDependencies(Asset) end

---Performs some simple tests to see if an asset is of the correct type and in the correct location to be
---a Root Asset of the given type of MetaHuman Asset.
---@param RootPackage string
---@param AssetType EMetaHumanAssetType
---@return boolean
function UMetaHumanAssetManager.IsAssetOfType(RootPackage, AssetType) end

---Finds all assets in the project that ore of the correct type and in the correct location to be packaged
---@param AssetType EMetaHumanAssetType
---@return TArray_FMetaHumanAssetDescription_
function UMetaHumanAssetManager.FindAssetsForPackaging(AssetType) end

---Packages up the described MetaHuman Asset (including dependencies) into a zip file
---@param Assets TArray_FMetaHumanAssetDescription_
---@param ArchivePath string
---@return boolean
function UMetaHumanAssetManager.CreateArchive(Assets, ArchivePath) end

