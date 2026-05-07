---@class FObservedComponent
---@field public CacheName string @Unique name for the cache, used as a key into the cache collection
---@field public ComponentRef FComponentReference
---@field public SoftComponentRef FSoftComponentReference @The component observed by this object for either playback or recording
---@field public bIsSimulating boolean @Capture of the initial state of the component before cache manager takes control.
---@field public bPlaybackEnabled boolean @Whether this component is enabled for playback, this allow a cache to hold many component but only replay some of them.
---@field public USDCacheDirectory FDirectoryPath @USD cache directory, if supported for this simulated structure type.
local FObservedComponent = {}
