---Base class for GeometryCache tracks, stores matrix animation data and implements functionality for it
---@class UGeometryCacheTrack : UObject
---@field protected Duration number @The duration of this track's animation. This is an open ended interval [0..Duration[. If the animation is looping this is also the length of the loop. Note: This is set by the importer possibly based on user preferences. There may be less actual frames available. E.g. the animation has data for the first 2 seconds, but duration is set to 5, so it will loop every 5 seconds with the last three seconds showing a static scene.
local UGeometryCacheTrack = {}

