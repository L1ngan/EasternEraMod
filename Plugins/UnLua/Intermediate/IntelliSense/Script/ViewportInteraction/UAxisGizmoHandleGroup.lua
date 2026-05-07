---Base class for gizmo handles on axis
---@class UAxisGizmoHandleGroup : UGizmoHandleGroup
local UAxisGizmoHandleGroup = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAxisGizmoHandleGroup:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAxisGizmoHandleGroup:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAxisGizmoHandleGroup:AddAssetUserDataOfClass(InUserDataClass) end

