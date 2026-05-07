---In order for a platform to support early movie playback, the platform must support the rendering thread
---starting very early and support rendering as soon as it is started and the module containing the movie streamer for the platform must already be loaded
---@class EMoviePlaybackType
---@field public MT_Normal integer
---@field public MT_Looped integer
---@field public MT_LoadingLoop integer
---@field public MT_MAX integer
local EMoviePlaybackType = {}
