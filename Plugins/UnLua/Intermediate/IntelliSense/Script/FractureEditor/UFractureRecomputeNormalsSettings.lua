---Settings for visualizing and recomputing normals and tangents
---@class UFractureRecomputeNormalsSettings : UFractureToolSettings
---@field public bShowNormals boolean @Whether to display normal vectors
---@field public bShowTangents boolean @Whether to display tangent and bitangent vectors
---@field public Length number @Length of display normal and tangent vectors
---@field public bOnlyTangents boolean @Whether to only recompute tangents, and leave normals as they were
---@field public bRecomputeSharpEdges boolean @If true, update where edges are 'sharp' by comparing adjacent triangle face normals vs the Sharp Edge Angle Threshold.
---@field public SharpEdgeAngleThreshold number @Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bRecomputeSharpEdges is true
---@field public bOnlyInternalSurfaces boolean @Whether to only change internal surface normals / tangents
local UFractureRecomputeNormalsSettings = {}

