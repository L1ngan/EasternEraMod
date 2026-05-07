---@class FAbcCompressionSettings
---@field public bMergeMeshes boolean @Whether or not the individual meshes should be merged for compression purposes
---@field public bBakeMatrixAnimation boolean @Whether or not Matrix-only animation should be baked out as vertex animation (or skipped?)
---@field public BaseCalculationType EBaseCalculationType @Determines how the final number of bases that are stored as morph targets are calculated
---@field public PercentageOfTotalBases number @Will generate given percentage of the given bases as morph targets
---@field public MaxNumberOfBases integer @Will generate given fixed number of bases as morph targets
---@field public MinimumNumberOfVertexInfluencePercentage number @Minimum percentage of influenced vertices required for a morph target to be valid
local FAbcCompressionSettings = {}
