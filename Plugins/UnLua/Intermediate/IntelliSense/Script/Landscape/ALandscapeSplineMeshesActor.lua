---This class is only intended to be used by UWorldPartitionLandscapeSplineMeshesBuilder which extracts and clones
---landscape spline and control point static meshes into partitioned actors
---This serves as an optimization as these actors will be streamed at runtime
---@class ALandscapeSplineMeshesActor : APartitionActor
---@field private StaticMeshComponents TArray<UStaticMeshComponent>
---@field private GridGuid FGuid
local ALandscapeSplineMeshesActor = {}

