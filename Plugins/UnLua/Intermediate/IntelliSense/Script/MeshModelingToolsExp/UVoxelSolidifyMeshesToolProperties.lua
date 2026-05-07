---Properties of the solidify operation
---@class UVoxelSolidifyMeshesToolProperties : UInteractiveToolPropertySet
---@field public WindingThreshold number @Winding number threshold to determine what is consider inside the mesh
---@field public ExtendBounds number @How far we allow bounds of solid surface to go beyond the bounds of the original input surface before clamping / cutting the surface off
---@field public SurfaceSearchSteps integer @How many binary search steps to take when placing vertices on the surface
---@field public bSolidAtBoundaries boolean @Whether to fill at the border of the bounding box, if the surface extends beyond the voxel boundaries
---@field public bApplyThickenShells boolean @If true, uses the ThickenShells setting
---@field public ThickenShells number @Thicken open-boundary surfaces (extrude them inwards) to ensure they are captured in the VoxWrap output. Units are in world space.
local UVoxelSolidifyMeshesToolProperties = {}

