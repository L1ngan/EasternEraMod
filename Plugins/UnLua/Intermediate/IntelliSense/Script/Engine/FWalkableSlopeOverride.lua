---Struct allowing control over "walkable" normals, by allowing a restriction or relaxation of what steepness is normally walkable.
---@class FWalkableSlopeOverride
---@field public WalkableSlopeBehavior integer @Behavior of this surface (whether we affect the walkable slope).
---@field public WalkableSlopeAngle number @Override walkable slope angle (in degrees), applying the rules of the Walkable Slope Behavior.
local FWalkableSlopeOverride = {}
