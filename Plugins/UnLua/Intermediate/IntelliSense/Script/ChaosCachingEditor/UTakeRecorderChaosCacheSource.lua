---A recording source selector for the chaos integration into take recorder
---@class UTakeRecorderChaosCacheSource : UTakeRecorderSource
---@field public ChaosCacheManager TSoftObjectPtr<AChaosCacheManager> @Chaos Cache manager to be used as take recorder source
---@field private TrackRecorder UMovieSceneChaosCacheTrackRecorder @Chaos cache track recorder used by this source
local UTakeRecorderChaosCacheSource = {}

