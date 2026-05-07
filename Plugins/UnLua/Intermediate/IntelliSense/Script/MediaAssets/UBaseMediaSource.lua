---Base class for concrete media sources.
---@class UBaseMediaSource : UMediaSource
---@field public PlatformPlayerNames TMap<string, string> @Override native media player plug-ins per platform (Empty = find one automatically).
---@field private PlayerName string @Name of the desired native media player (Empty = find one automatically).
local UBaseMediaSource = {}

