---@class UCollisionGeometryVisualizationProperties : UInteractiveToolPropertySet
---@field public bShowCollision boolean @Show/hide collision geometry
---@field public bShowSolid boolean @Whether to show solid shapes in addition to wireframes
---@field public LineThickness number @Thickness of lines used to visualize collision shapes
---@field public bShowHidden boolean @Show occluded parts of the collision geometry, rendered with dashed lines
---@field public bRandomColors boolean @Render each collision geometry with a randomly-chosen color
---@field public Color FColor @The color to use for all collision visualizations, if random colors are not used
---@field public LineMaterial UMaterialInterface
---@field public LineMaterialShowingHidden UMaterialInterface
---@field public TriangleMaterial UMaterialInterface
---@field public bEnableShowCollision boolean
---@field public bEnableShowSolid boolean
local UCollisionGeometryVisualizationProperties = {}

