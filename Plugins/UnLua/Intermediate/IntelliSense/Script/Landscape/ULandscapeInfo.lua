---@class ULandscapeInfo : UObject
---@field public LandscapeActor TWeakObjectPtr<ALandscape>
---@field public LandscapeGuid FGuid
---@field public ComponentSizeQuads integer
---@field public SubsectionSizeQuads integer
---@field public ComponentNumSubsections integer
---@field public bDrawScaleSetByActor boolean @True when the draw scale has been set by the landscape Actor (false if default or set by a streaming proxy)
---@field public DrawScale FVector
---@field public Layers TArray<FLandscapeInfoLayerSettings>
---@field public RegionSizeInComponents integer
---@field public StreamingProxies TArray<TWeakObjectPtr<ALandscapeStreamingProxy>>
---@field private SplineActors TArray<TScriptInterface<ULandscapeSplineInterface>> @SORTED list of all actors implementing the spline interface that are registered with this landscape info
local ULandscapeInfo = {}

