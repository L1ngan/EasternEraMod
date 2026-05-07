---Convert convex hulls on a geometry collection to a dynamic mesh
---@class FConvexHullToMeshDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection
---@field private OptionalSelectionFilter FDataflowTransformSelection @Optional transform selection to convert hulls from -- if not provided, all convex hulls will be converted.
---@field private bUseRobustHulls boolean @Whether to robustly extract valid/manifold meshes to represent the convex hulls. Note: Not necessary for simple visualization, but useful for downstream processing.
---@field private Mesh UDynamicMesh @Single mesh aggregating all the convex hulls together
---@field private Meshes TArray<UDynamicMesh> @Array of meshes for each convex hull found
local FConvexHullToMeshDataflowNode = {}
