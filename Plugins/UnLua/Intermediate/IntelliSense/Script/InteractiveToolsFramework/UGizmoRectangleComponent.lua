---Simple Component intended to be used as part of 3D Gizmos.
---Draws outline of 3D rectangle based on parameters.
---@class UGizmoRectangleComponent : UGizmoBaseComponent
---@field public DirectionX FVector
---@field public DirectionY FVector
---@field public bOrientYAccordingToCamera boolean @When true, instead of using the provided DirectionY, the component will use a direction orthogonal to the camera direction and DirectionX. This keeps the rectangle pinned along DirectionX but spun to be flatter relative the camera.
---@field public OffsetX number
---@field public OffsetY number
---@field public LengthX number
---@field public LengthY number
---@field public Thickness number
---@field public SegmentFlags integer
local UGizmoRectangleComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoRectangleComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoRectangleComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoRectangleComponent:AddAssetUserDataOfClass(InUserDataClass) end

