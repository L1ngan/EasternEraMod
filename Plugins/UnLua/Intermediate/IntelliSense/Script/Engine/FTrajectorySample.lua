---@class FTrajectorySample
---@field public AccumulatedSeconds number @The relative accumulated time that this sample is associated with Zero value for instantaneous, negative values for the past, and positive values for the future
---@field public Transform FTransform @Position relative to the sampled in-motion object
---@field public LinearVelocity FVector @Linear velocity relative to the sampled in-motion object
local FTrajectorySample = {}
