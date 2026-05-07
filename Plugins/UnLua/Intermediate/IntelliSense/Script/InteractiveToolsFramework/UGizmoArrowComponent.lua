---Simple Component intended to be used as part of 3D Gizmos.
---Currently draws the "arrow" as a single 3D line.
---@class UGizmoArrowComponent : UGizmoBaseComponent
---@field public Direction FVector
---@field public Gap number
---@field public Length number
---@field public Thickness number
local UGizmoArrowComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoArrowComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoArrowComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoArrowComponent:AddAssetUserDataOfClass(InUserDataClass) end

