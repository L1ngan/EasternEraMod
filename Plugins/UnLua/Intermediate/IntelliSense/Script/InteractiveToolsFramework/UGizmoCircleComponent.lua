---Simple Component intended to be used as part of 3D Gizmos.
---Draws a 3D circle based on parameters.
---@class UGizmoCircleComponent : UGizmoBaseComponent
---@field public Normal FVector
---@field public Radius number
---@field public Thickness number
---@field public NumSides integer
---@field public bViewAligned boolean
---@field public bDrawFullCircle boolean
---@field public bOnlyAllowFrontFacingHits boolean @If the circle was on a 3D sphere, then only the 'front' part of the circle can be hit, (in other words, if the ray would hit the sphere first, ignore the hit). Dynamically disabled if the circle is parallel to the view plane (ie "fully visible")
local UGizmoCircleComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoCircleComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoCircleComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoCircleComponent:AddAssetUserDataOfClass(InUserDataClass) end

