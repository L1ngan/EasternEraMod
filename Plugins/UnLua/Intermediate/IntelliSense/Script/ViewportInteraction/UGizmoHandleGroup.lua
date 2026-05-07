---Base class for gizmo handles
---@class UGizmoHandleGroup : USceneComponent
---@field protected GizmoMaterial UMaterialInterface @Gizmo material (opaque)
---@field protected TranslucentGizmoMaterial UMaterialInterface @Gizmo material (translucent)
---@field protected Handles TArray<FGizmoHandle> @All the StaticMeshes for this handle type
---@field protected OwningTransformGizmoActor ABaseTransformGizmo @The actor transform gizmo owning this handlegroup
---@field protected DragOperationComponent UViewportDragOperationComponent
local UGizmoHandleGroup = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoHandleGroup:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoHandleGroup:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoHandleGroup:AddAssetUserDataOfClass(InUserDataClass) end

