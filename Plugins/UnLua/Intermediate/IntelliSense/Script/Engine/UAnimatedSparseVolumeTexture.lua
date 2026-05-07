---Represents a streamable SparseVolumeTexture with one or more frames. Use USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest() to bind extract a particular frame to be used for rendering.
---@class UAnimatedSparseVolumeTexture : UStreamableSparseVolumeTexture
local UAnimatedSparseVolumeTexture = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimatedSparseVolumeTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAnimatedSparseVolumeTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimatedSparseVolumeTexture:AddAssetUserDataOfClass(InUserDataClass) end

