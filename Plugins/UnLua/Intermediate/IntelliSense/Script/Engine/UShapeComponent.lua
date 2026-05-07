---ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc).
---@class UShapeComponent : UPrimitiveComponent
---@field public ShapeBodySetup UBodySetup @Description of collision
---@field public AreaClass TSubclassOf<UNavAreaBase>
---@field public ShapeColor FColor @Color used to draw the shape.
---@field public bDrawOnlyIfSelected boolean @Only show this component if the actor is selected
---@field public bShouldCollideWhenPlacing boolean @If true it allows Collision when placing even if collision is not enabled
---@field public bDynamicObstacle boolean @If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data
---@field protected bUseSystemDefaultObstacleAreaClass boolean @Uses FNavigationSystem::GetDefaultObstacleArea() by default instead of AreaClassOverride, bDynamicObstacle must be true to use this.
---@field protected AreaClassOverride TSubclassOf<UNavAreaBase> @Navigation area type override, null / none = no change to nav mesh. bDynamicObstacle must be true and bUseSystemDefaultAreaClass false to use this.
---@field protected LineThickness number @Used to control the line thickness when rendering
local UShapeComponent = {}

---Set the LineThickness
---@param Thickness number
function UShapeComponent:SetLineThickness(Thickness) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UShapeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UShapeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UShapeComponent:AddAssetUserDataOfClass(InUserDataClass) end

