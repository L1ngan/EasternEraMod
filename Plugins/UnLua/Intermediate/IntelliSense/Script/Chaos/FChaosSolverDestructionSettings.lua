---@class FChaosSolverDestructionSettings
---@field public PerAdvanceBreaksAllowed integer @Number of breaks allowed to occur for each invocation of AdvanceClustering
---@field public PerAdvanceBreaksRescheduleLimit integer @Number of breaks allowed to be rescheduled for next frame if any
---@field public ClusteringParticleReleaseThrottlingMinCount integer @Minimum number of active geometry collection to reach before clustering start to disable a percentage of the released particle per cluster
---@field public ClusteringParticleReleaseThrottlingMaxCount integer @Maximum number of active geometry collection to reach before all released clustering disable all released particle instantly
---@field public bOptimizeForRuntimeMemory boolean @When enabled, this will avoid creating non-necessary geometry collection physics data until the root breaks This will save runtime memory for unbroken geometry collection at the cost of allocating those particle when the first break happens It is false by default
local FChaosSolverDestructionSettings = {}
