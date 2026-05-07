---@class FMediaPlayerOptions
---@field public Tracks FMediaPlayerTrackOptions @Indices of the media tracks to select for playback
---@field public TracksByLanguage FMediaPlayerInitialTrackLanguageSelection @Language of the media tracks to select for playback
---@field public TrackSelection EMediaPlayerOptionTrackSelectMode @How the initial media tracks for playback are selected
---@field public SeekTime FTimespan @Initial media time to start playback at.
---@field public SeekTimeType EMediaPlayerOptionSeekTimeType @How to interpret the initial seek time.
---@field public PlayOnOpen EMediaPlayerOptionBooleanOverride @How to handle automatic playback when media opens.
---@field public Loop EMediaPlayerOptionBooleanOverride @How to initially select looping of the media.
local FMediaPlayerOptions = {}
