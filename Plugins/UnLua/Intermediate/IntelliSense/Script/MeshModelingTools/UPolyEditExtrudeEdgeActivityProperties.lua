---@class UPolyEditExtrudeEdgeActivityProperties : UInteractiveToolPropertySet
---@field public DirectionMode EPolyEditExtrudeEdgeDirectionMode @How direction to move the vertices is determined.
---@field public DistanceMode EPolyEditExtrudeEdgeDistanceMode @How distance to extrude along a given direction is determined.
---@field public Distance number
---@field public bUseUnselectedForFrames boolean @When a vertex has both a selected and nonselected neighbor, use the unselected neighbor in picking an extrude frame as well.
---@field public bAdjustToExtrudeEvenly boolean @Adjust individual extrude directions in an effort to make extruded edges parallel to their original edges.
local UPolyEditExtrudeEdgeActivityProperties = {}

