---Settings for the Pattern Tool
---@class UPatternToolSettings : UInteractiveToolPropertySet
---@field public Seed integer @The seed used to introduce random transform variations when enabled
---@field public bProjectElementsDown boolean @Whether or not the pattern items should be projected along the negative Z axis of the plane mechanic
---@field public ProjectionOffset number @How much each pattern item should be moved along the negative Z axis of the plane mechanic if Project Elements Down is enabled
---@field public bHideSources boolean @Hide the source meshes when enabled
---@field public bUseRelativeTransforms boolean @If false, all pattern elements will be positioned at the origin of the first pattern element
---@field public bRandomlyPickElements boolean @Whether to randomly pick which source mesh is scattered at each location, or to always use all source meshes
---@field public Shape EPatternToolShape @Shape of the underlying Pattern
---@field public SingleAxis EPatternToolSingleAxis @Axis direction used for the Pattern geometry
---@field public SinglePlane EPatternToolSinglePlane @Plane used for the Pattern geometry
local UPatternToolSettings = {}

