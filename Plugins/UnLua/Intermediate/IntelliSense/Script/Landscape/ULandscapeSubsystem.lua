---@class ULandscapeSubsystem : UTickableWorldSubsystem
---@field private StreamingProxiesNeedingReregister TSet<ALandscapeStreamingProxy> @list of streaming proxies that need to re-register with their group because they moved, or changed their LODGroupKey
---@field private LandscapeActors TArray<ALandscape>
---@field private Proxies TArray<ALandscapeProxy> @UPROPERTY ensures these objects are not deleted before being unregistered (technically not necessary, as actors should always unregister prior to deletion)
local ULandscapeSubsystem = {}

