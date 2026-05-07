---@class UControlPointMeshComponent : UStaticMeshComponent
---@field public bSelected boolean
---@field public VirtualTextureMainPassMaxDrawDistance number @The max draw distance to use in the main pass when also rendering to a runtime virtual texture. This is only exposed to the user through the same setting on ULandscapeSplineControlPoint.
local UControlPointMeshComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControlPointMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UControlPointMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UControlPointMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

