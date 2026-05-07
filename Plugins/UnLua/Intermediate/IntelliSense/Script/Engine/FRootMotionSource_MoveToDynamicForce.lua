---MoveToDynamicForce moves the target to a given location in world space over the duration, where the end location
---is dynamic and can change during the move (meant to be used for things like moving to a moving target)
---@class FRootMotionSource_MoveToDynamicForce : FRootMotionSource
---@field public StartLocation FVector
---@field public InitialTargetLocation FVector
---@field public TargetLocation FVector @Dynamically-changing location of target, which may be altered while this movement is ongoing
---@field public bRestrictSpeedToExpected boolean
---@field public PathOffsetCurve UCurveVector
---@field public TimeMappingCurve UCurveFloat
local FRootMotionSource_MoveToDynamicForce = {}
