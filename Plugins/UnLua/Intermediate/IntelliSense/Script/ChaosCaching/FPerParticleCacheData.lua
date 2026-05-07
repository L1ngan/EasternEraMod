---@class FPerParticleCacheData
---@field public TransformData FParticleTransformTrack
---@field public CurveData TMap<string, FRichCurve> @Named curve data. This can be particle or other continuous curve data pushed by the adapter that created the cache. Any particle property outside of the transforms will be placed in this container with a suitable name for the property. Blueprints and adapters can add whatever data they need to this container.
local FPerParticleCacheData = {}
