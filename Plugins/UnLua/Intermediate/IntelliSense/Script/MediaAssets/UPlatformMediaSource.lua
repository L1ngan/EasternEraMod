---A media source that selects other media sources based on target platform.
---Use this asset to override media sources on a per-platform basis.
---@class UPlatformMediaSource : UMediaSource
---@field public PlatformMediaSources TMap<string, UMediaSource> @Media sources per platform.
---@field private MediaSource UMediaSource @Default media source. This media source will be used if no source was specified for a target platform.
local UPlatformMediaSource = {}

