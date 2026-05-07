---@class UPolyEditPushPullProperties : UInteractiveToolPropertySet
---@field public DistanceMode EPolyEditExtrudeDistanceMode @How the extrusion distance is set.
---@field public Distance number @Extrusion distance.
---@field public DirectionMode EPolyEditPushPullModeOptions @Which way to move vertices while extruding.
---@field public SingleDirection EPolyEditExtrudeDirection @Direction in which to extrude.
---@field public MaxDistanceScaleFactor number @Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles.
---@field public bShellsToSolids boolean @Controls whether offsetting an entire open-border patch should create a solid or an open shell
---@field public MeasureDirection EPolyEditExtrudeDirection @What axis to measure the extrusion distance along.
---@field public bUseColinearityForSettingBorderGroups boolean @When offsetting regions that touch the mesh border, assign the side groups (groups on the stitched side of the extrude) in a way that considers edge colinearity. For instance, when true, extruding a flat rectangle will give four different groups on its sides rather than one connected group.
local UPolyEditPushPullProperties = {}

