---Represent a current play position in an animation
---based on sync markers
---@class FMarkerSyncAnimPosition
---@field public PreviousMarkerName string @The marker we have passed
---@field public NextMarkerName string @The marker we are heading towards
---@field public PositionBetweenMarkers number @Value between 0 and 1 representing where we are:       0   we are at PreviousMarker       1   we are at NextMarker       0.5 we are half way between the two
local FMarkerSyncAnimPosition = {}
