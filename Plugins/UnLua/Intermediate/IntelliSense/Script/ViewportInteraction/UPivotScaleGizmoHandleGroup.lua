---Axis Gizmo handle for scaling
---@class UPivotScaleGizmoHandleGroup : UAxisGizmoHandleGroup
local UPivotScaleGizmoHandleGroup = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPivotScaleGizmoHandleGroup:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPivotScaleGizmoHandleGroup:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPivotScaleGizmoHandleGroup:AddAssetUserDataOfClass(InUserDataClass) end

