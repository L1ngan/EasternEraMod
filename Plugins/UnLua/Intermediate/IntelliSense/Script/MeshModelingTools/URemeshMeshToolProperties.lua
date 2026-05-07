---Standard properties of the Remesh operation
---@class URemeshMeshToolProperties : URemeshProperties
---@field public TargetTriangleCount integer @Target triangle count
---@field public SmoothingType ERemeshSmoothingType @Smoothing type
---@field public bDiscardAttributes boolean @Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed.
---@field public bShowGroupColors boolean @Display colors corresponding to the mesh's polygon groups
---@field public RemeshType ERemeshType @Remeshing type
---@field public RemeshIterations integer @Number of Remeshing passes
---@field public MaxRemeshIterations integer @Maximum number of Remeshing passes, for Remeshers that have convergence criteria
---@field public ExtraProjectionIterations integer @For NormalFlowRemesher: extra iterations of normal flow with no remeshing
---@field public bUseTargetEdgeLength boolean @If true, the target count is ignored and the target edge length is used directly
---@field public TargetEdgeLength number @Remesh to have edges approximately this length. An attempt at a reasonable value is computed automatically for this field based on the selected target mesh.
---@field public bReproject boolean @Enable projection back to input mesh
---@field public bReprojectConstraints boolean @Project constrained vertices back to original constraint curves
---@field public BoundaryCornerAngleThreshold number @Angle threshold in degrees for classifying a boundary vertex as a corner. Corners will be fixed if Reproject Constraints is active.
local URemeshMeshToolProperties = {}

