---Properties of the trim mode
---@class UTrimMeshesToolProperties : UInteractiveToolPropertySet
---@field public WhichMesh ETrimOperation @Which object to trim
---@field public TrimSide ETrimSide @Whether to remove the surface inside or outside of the trimming geometry
---@field public WindingThreshold number @Threshold to determine whether a triangle in one mesh is inside or outside of the other
---@field public bShowTrimmingMesh boolean @Whether to show a translucent version of the trimming mesh, to help visualize what is being cut
---@field public OpacityOfTrimmingMesh number @Opacity of translucent version of the trimming mesh
---@field public ColorOfTrimmingMesh FLinearColor @Color of translucent version of the trimming mesh
local UTrimMeshesToolProperties = {}

