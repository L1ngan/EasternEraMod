---@class UDoubleChannelKeyProxy : UObject
---@field private Time FFrameNumber @User-facing time of the key, applied to the actual key on PostEditChange, and updated every tick
---@field private Value FMovieSceneDoubleValue @User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick
local UDoubleChannelKeyProxy = {}

