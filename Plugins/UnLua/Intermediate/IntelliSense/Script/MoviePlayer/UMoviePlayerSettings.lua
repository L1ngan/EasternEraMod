---Implements the settings for the Windows target platform.
---@class UMoviePlayerSettings : UObject
---@field public bWaitForMoviesToComplete boolean @If enabled, The game waits for startup movies to complete even if loading has finished.
---@field public bMoviesAreSkippable boolean @If enabled, Startup movies can be skipped by the user when a mouse button is pressed.
---@field public StartupMovies TArray<string> @Movies to play on startup. Note that these must be in your game's Game/Content/Movies directory.
local UMoviePlayerSettings = {}

