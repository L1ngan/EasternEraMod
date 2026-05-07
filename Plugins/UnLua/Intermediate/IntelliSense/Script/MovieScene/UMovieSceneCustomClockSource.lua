---@class UMovieSceneCustomClockSource : UInterface
local UMovieSceneCustomClockSource = {}

---@param DeltaSeconds number
---@param InPlayRate number
function UMovieSceneCustomClockSource:OnTick(DeltaSeconds, InPlayRate) end

---@param InStopTime FQualifiedFrameTime
function UMovieSceneCustomClockSource:OnStopPlaying(InStopTime) end

---@param InStartTime FQualifiedFrameTime
function UMovieSceneCustomClockSource:OnStartPlaying(InStartTime) end

---@param InCurrentTime FQualifiedFrameTime
---@param InPlayRate number
---@return FFrameTime
function UMovieSceneCustomClockSource:OnRequestCurrentTime(InCurrentTime, InPlayRate) end

