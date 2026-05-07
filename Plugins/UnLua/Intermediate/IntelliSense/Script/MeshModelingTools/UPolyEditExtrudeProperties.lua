---@class UPolyEditExtrudeProperties : UInteractiveToolPropertySet
---@field public DistanceMode EPolyEditExtrudeDistanceMode @How the extrude distance is set.
---@field public Distance number @Distance to extrude.
---@field public DirectionMode EPolyEditExtrudeModeOptions @How to move the vertices during the extrude
---@field public Direction EPolyEditExtrudeDirection @Direction in which to extrude.
---@field public MaxDistanceScaleFactor number @Controls the maximum distance vertices can move from the target distance in order to stay parallel with their source triangles.
---@field public bShellsToSolids boolean @Controls whether extruding an entire open-border patch should create a solid or an open shell
---@field public MeasureDirection EPolyEditExtrudeDirection @What axis to measure the extrusion distance along.
---@field public bUseColinearityForSettingBorderGroups boolean @When extruding regions that touch the mesh border, assign the side groups (groups on the stitched side of the extrude) in a way that considers edge colinearity. For instance, when true, extruding a flat rectangle will give four different groups on its sides rather than one connected group.
local UPolyEditExtrudeProperties = {}

