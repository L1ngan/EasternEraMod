---@class UPolyEditOffsetProperties : UInteractiveToolPropertySet
---@field public DistanceMode EPolyEditExtrudeDistanceMode @How the offset distance is set.
---@field public Distance number @Offset distance.
---@field public DirectionMode EPolyEditOffsetModeOptions @Which way to move vertices during the offset
---@field public MaxDistanceScaleFactor number @Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles.
---@field public bShellsToSolids boolean @Controls whether offsetting an entire open-border patch should create a solid or an open shell
---@field public MeasureDirection EPolyEditExtrudeDirection @What axis to measure the offset distance along.
---@field public bUseColinearityForSettingBorderGroups boolean @When offsetting regions that touch the mesh border, assign the side groups (groups on the stitched side of the offset) in a way that considers edge colinearity. For instance, when true, extruding a flat rectangle will give four different groups on its sides rather than one connected group.
local UPolyEditOffsetProperties = {}

