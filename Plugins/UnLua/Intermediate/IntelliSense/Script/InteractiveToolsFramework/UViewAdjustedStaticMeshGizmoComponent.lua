---Version of a static mesh component that only takes the dynamic draw path and has the ability to
---adjust the transform based on view information.
---@class UViewAdjustedStaticMeshGizmoComponent : UStaticMeshComponent
---@field private GizmoViewContext UGizmoViewContext @Needed for proper line traces
---@field private SubstituteInteractionComponent UPrimitiveComponent
---@field private HoverOverrideMaterial UMaterialInterface
local UViewAdjustedStaticMeshGizmoComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UViewAdjustedStaticMeshGizmoComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UViewAdjustedStaticMeshGizmoComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UViewAdjustedStaticMeshGizmoComponent:AddAssetUserDataOfClass(InUserDataClass) end

