---@class FMeshRayTracingProxySettings
---@field public bEnabled boolean @If true, Ray Tracing Proxy data will be generated.
---@field public FallbackTarget ENaniteFallbackTarget @Which heuristic to use when generating the fallback mesh.
---@field public FallbackPercentTriangles number @Percentage of triangles to keep from source mesh for fallback. 1.0 = no reduction, 0.0 = no triangles.
---@field public FallbackRelativeError number @Reduce until at least this amount of error is reached relative to size of the mesh
---@field public LOD1PercentTriangles number
---@field public FoliageOverOcclusionBias number @A bias to reduce foliage over occlusion in Lumen GI. 0: no adjustment, 1: full strength.
local FMeshRayTracingProxySettings = {}
