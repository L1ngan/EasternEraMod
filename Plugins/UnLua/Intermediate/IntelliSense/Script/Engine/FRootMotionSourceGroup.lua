---Group of Root Motion Sources that are applied
---@class FRootMotionSourceGroup
---@field public bHasAdditiveSources boolean @Whether this group has additive root motion sources
---@field public bHasOverrideSources boolean @Whether this group has override root motion sources
---@field public bHasOverrideSourcesWithIgnoreZAccumulate boolean @Whether this group has override root motion sources that have IgnoreZAccumulate flag
---@field public bIsAdditiveVelocityApplied boolean @True when we had additive velocity applied last tick, checked to know if we should restore LastPreAdditiveVelocity before a Velocity computation
---@field public LastAccumulatedSettings FRootMotionSourceSettings @Aggregate Settings of the last group of accumulated sources
---@field public LastPreAdditiveVelocity FVector_NetQuantize10 @Saved off pre-additive-applied Velocity, used for being able to reliably add/remove additive velocity from currently computed Velocity (otherwise we would be removing additive velocity that no longer exists, like if you run into a wall and your Velocity becomes 0 - subtracting the velocity that we added heading into the wall last tick would make you go backwards. With this method we override that resulting Velocity due to obstructions
local FRootMotionSourceGroup = {}
