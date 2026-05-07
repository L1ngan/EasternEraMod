---The terrain visualization component for an associated spline component.
---This takes a 2D terrain material and instances sprite geometry along the spline path.
---@class UPaperTerrainComponent : UPrimitiveComponent
---@field public TerrainMaterial UPaperTerrainMaterial @The terrain material to apply to this component (set of rules for which sprites are used on different surfaces or the interior)
---@field public bClosedSpline boolean
---@field public bFilledSpline boolean
---@field public AssociatedSpline UPaperTerrainSplineComponent
---@field public RandomSeed integer @Random seed used for choosing which spline meshes to use.
---@field public SegmentOverlapAmount number @The overlap amount between segments
---@field protected TerrainColor FLinearColor @The color of the terrain (passed to the sprite material as a vertex color)
---@field protected ReparamStepsPerSegment integer @Number of steps per spline segment to place in the reparameterization table
---@field protected SpriteCollisionDomain integer @Collision domain (no collision, 2D (experimental), or 3D)
---@field protected CollisionThickness number @The extrusion thickness of collision geometry when using a 3D collision domain
---@field protected CachedBodySetup UBodySetup @Description of collision
local UPaperTerrainComponent = {}

---Set color of the terrain
---@param NewColor FLinearColor
function UPaperTerrainComponent:SetTerrainColor(NewColor) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperTerrainComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPaperTerrainComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperTerrainComponent:AddAssetUserDataOfClass(InUserDataClass) end

