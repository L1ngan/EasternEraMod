---@class UPolyEditTopologyProperties : UEditMeshPolygonsToolActionPropertySet
---@field public bAddExtraCorners boolean @When true, adds extra corners at sharp group edge bends (in addition to the normal corners that are placed at junctures of three or more group edges). For instance, a single disconnected quad-like group would normally have a single group edge with no corners, since it has no neighboring groups, but this setting will allow for the generation of corners at the quad corners, which is very useful for editing. Note that the setting takes effect only after clicking Regenerate Extra Corners or performing some operation that changes the group topology.
---@field public ExtraCornerAngleThresholdDegrees number @When generating extra corners, how sharp the angle needs to be to warrant an extra corner placement there. Lower values require sharper corners, so are more tolerant of curved group edges. For instance, 180 will place corners at every vertex along a group edge even if the edge is perfectly straight, and 135 will place a vertex only once the edge bends 45 degrees off the straight path (i.e. 135 degrees to the previous edge). The setting is applied either when Regenerate Extra Corners is clicked, or after any operation that modifies topology.
local UPolyEditTopologyProperties = {}

function UPolyEditTopologyProperties:RegenerateExtraCorners() end

