---Cache settings to pass to the player.
---@class FMediaSourceCacheSettings
---@field public bOverride boolean @Override the default cache settings. Currently only the ImgMedia player supports these settings.
---@field public TimeToLookAhead number @The cache will fill up with frames that are up to this time from the current time. E.g. if this is 0.2, and we are at time index 5 seconds, then we will fill the cache with frames between 5 seconds and 5.2 seconds.
local FMediaSourceCacheSettings = {}
