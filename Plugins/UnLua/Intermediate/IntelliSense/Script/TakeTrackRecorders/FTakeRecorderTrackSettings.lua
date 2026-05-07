---@class FTakeRecorderTrackSettings
---@field public MatchingActorClass FSoftClassPath @The Actor class to create movie scene tracks for.
---@field public DefaultPropertyTracks TArray<FTakeRecorderPropertyTrackSettings> @List of property names for which movie scene tracks will be created automatically.
---@field public ExcludePropertyTracks TArray<FTakeRecorderPropertyTrackSettings> @List of property names for which movie scene tracks will NOT be created automatically.
local FTakeRecorderTrackSettings = {}
