---A track that can be added to any sequence to affect the playback position and speed of that sequence and all its subsequences
---@class UMovieSceneTimeWarpTrack : UMovieSceneTrack
---@field private Sections TArray<UMovieSceneSection> @Array of sections contained within this track - should only ever be one.
---@field private bIsActiveTimeWarp boolean @True if this track is the active timewarp in its sequence. Assigned as part of compilation
local UMovieSceneTimeWarpTrack = {}

