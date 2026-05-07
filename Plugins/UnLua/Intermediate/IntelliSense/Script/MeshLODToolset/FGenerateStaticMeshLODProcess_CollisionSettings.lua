---@class FGenerateStaticMeshLODProcess_CollisionSettings
---@field public CollisionGroupLayerName string @Transient property, not set directly by the user. The user controls a CollisionGroupLayerName dropdown property on the Tool and that value is copied here.
---@field public CollisionType EGenerateStaticMeshLODSimpleCollisionGeometryType @Type of simple collision objects to produce
---@field public ConvexTriangleCount integer @Target triangle count for each convex hull after simplification
---@field public bPrefilterVertices boolean @Whether to subsample input vertices using a regular grid before computing the convex hull
---@field public PrefilterGridResolution integer @Grid resolution (along the maximum-length axis) for subsampling before computing the convex hull
---@field public bSimplifyPolygons boolean @Whether to simplify polygons used for swept convex hulls
---@field public HullTolerance number @Target minumum edge length for simplified swept convex hulls
---@field public SweepAxis EGenerateStaticMeshLODProjectedHullAxisMode @Which axis to sweep along when computing swept convex hulls
local FGenerateStaticMeshLODProcess_CollisionSettings = {}
