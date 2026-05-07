---@class FAbcNormalGenerationSettings
---@field public bForceOneSmoothingGroupPerObject boolean @Whether or not to force smooth normals for each individual object rather than calculating smoothing groups
---@field public HardEdgeAngleThreshold number @Threshold used to determine whether an angle between two normals should be considered hard, closer to 0 means more smooth vs 1
---@field public bRecomputeNormals boolean @Determines whether or not the normals should be forced to be recomputed
---@field public bIgnoreDegenerateTriangles boolean @Determines whether or not the degenerate triangles should be ignored when calculating tangents/normals
---@field public bSkipComputingTangents boolean @Determines whether tangents are computed for GeometryCache. Skipping them can improve streaming performance but may cause visual artifacts where they are required
local FAbcNormalGenerationSettings = {}
