---@class FLevelSequenceTrackSettings
---@field public MatchingActorClass FSoftClassPath @The Actor class to create movie scene tracks for.
---@field public DefaultTracks TArray<FSoftClassPath> @List of movie scene track classes to be added automatically.
---@field public ExcludeDefaultTracks TArray<FSoftClassPath> @List of movie scene track classes not to be added automatically.
---@field public DefaultPropertyTracks TArray<FLevelSequencePropertyTrackSettings> @List of property names for which movie scene tracks will be created automatically.
---@field public ExcludeDefaultPropertyTracks TArray<FLevelSequencePropertyTrackSettings> @List of property names for which movie scene tracks will not be created automatically.
local FLevelSequenceTrackSettings = {}
