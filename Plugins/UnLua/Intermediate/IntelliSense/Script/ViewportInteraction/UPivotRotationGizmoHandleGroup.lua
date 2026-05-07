---Axis Gizmo handle for rotation
---@class UPivotRotationGizmoHandleGroup : UAxisGizmoHandleGroup
---@field private RootFullRotationHandleComponent USceneComponent @Root component of all the mesh components that are used to visualize the rotation when dragging
---@field private FullRotationHandleMeshComponent UGizmoHandleMeshComponent @When dragging a rotation handle the full rotation circle appears
---@field private StartRotationIndicatorMeshComponent UGizmoHandleMeshComponent @The mesh that indicated the start rotation
---@field private RootStartRotationIdicatorComponent USceneComponent @The root component of the start rotation indicator
---@field private DeltaRotationIndicatorMeshComponent UGizmoHandleMeshComponent @The mesh that indicated the delta rotation
---@field private RootDeltaRotationIndicatorComponent USceneComponent @The root component of the delta rotation indicator
local UPivotRotationGizmoHandleGroup = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPivotRotationGizmoHandleGroup:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPivotRotationGizmoHandleGroup:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPivotRotationGizmoHandleGroup:AddAssetUserDataOfClass(InUserDataClass) end

