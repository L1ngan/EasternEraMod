---Namespaced user data which provides access to a linked data asset
---@class UDataAssetLink : UNameSpacedUserData
---@field public DataAsset TSoftObjectPtr<UDataAsset> @If assigned, the data asset link will provide access to the data asset's content.
---@field protected DataAssetCached UDataAsset
local UDataAssetLink = {}

---@param InDataAsset TSoftObjectPtr_UDataAsset_
function UDataAssetLink:SetDataAsset(InDataAsset) end

---@return TSoftObjectPtr_UDataAsset_
function UDataAssetLink:GetDataAsset() end

