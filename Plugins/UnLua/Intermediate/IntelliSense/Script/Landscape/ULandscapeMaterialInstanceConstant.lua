---@class ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
---@field public TextureStreamingInfo TArray<FLandscapeMaterialTextureStreamingInfo>
---@field public bIsLayerThumbnail boolean
---@field public bMobile boolean
---@field public bEditorToolUsage boolean
local ULandscapeMaterialInstanceConstant = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeMaterialInstanceConstant:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULandscapeMaterialInstanceConstant:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeMaterialInstanceConstant:AddAssetUserDataOfClass(InUserDataClass) end

