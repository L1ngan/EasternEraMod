---Standard properties of the Simplify operation
---@class USimplifyMeshToolProperties : UMeshConstraintProperties
---@field public SimplifierType ESimplifyType @Simplification Scheme
---@field public TargetMode ESimplifyTargetType @Simplification Target Type
---@field public TargetPercentage integer @Target percentage of original triangle count
---@field public TargetEdgeLength number @Target edge length
---@field public TargetTriangleCount integer @Target triangle count
---@field public TargetVertexCount integer @Target vertex count
---@field public MinimalAngleThreshold number @Angle threshold in degrees used for testing if two triangles should be considered coplanar, or two lines collinear
---@field public PolyEdgeAngleTolerance number @Threshold angle change (in degrees) along a polygroup edge, above which a vertex must be added
---@field public BoundaryEdgeAngleTolerance number @Threshold angle change (in degrees) between adjacent boundary edges, above which the common vertex must be preserved
---@field public bDiscardAttributes boolean @Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed.
---@field public bGeometricConstraint boolean @If true, then simplification will consider geometric deviation with the input mesh
---@field public GeometricTolerance number @Geometric deviation tolerance used when bGeometricConstraint is enabled, to limit the geometric deviation between the simplified and original meshes
---@field public bShowGroupColors boolean @Display colors corresponding to the mesh's polygon groups
---@field public bReproject boolean @Enable projection back to input mesh
local USimplifyMeshToolProperties = {}

