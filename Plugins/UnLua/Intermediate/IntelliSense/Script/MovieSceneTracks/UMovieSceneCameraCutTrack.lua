---Handles manipulation of CameraCut properties in a movie scene.
---@class UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
---@field public bCanBlend boolean
---@field private Sections TArray<UMovieSceneSection> @All movie scene sections.
---@field private bAutoArrangeSections boolean @Whether camera cut sections should automatically resize to fill gaps
local UMovieSceneCameraCutTrack = {}

