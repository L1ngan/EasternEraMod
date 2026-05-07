---Simple Component intended to be used as part of 3D Gizmos.
---Draws line terminated by a short perpendicular handle line based on parameters.
---@class UGizmoLineHandleComponent : UGizmoBaseComponent
---@field public Normal FVector
---@field public HandleSize number
---@field public Thickness number
---@field public Direction FVector
---@field public Length number
---@field public bImageScale boolean
local UGizmoLineHandleComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoLineHandleComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoLineHandleComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoLineHandleComponent:AddAssetUserDataOfClass(InUserDataClass) end

