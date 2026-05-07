---@class FAnimNode_LegIK : FAnimNode_SkeletalControlBase
---@field public ReachPrecision number @Tolerance for reaching IK Target, in unreal units.
---@field public MaxIterations integer @Max Number of Iterations.
---@field public SoftPercentLength number @Default is 1.0 (off). Range is 0.1 to 1.0. When set to a value less than 1, will "softly" approach full extension starting when the effector distance from the root of the chain is greater than this percent length of the bone chain. Typical values are around 0.97. This is useful for preventing the knee from "popping" when approaching full extension.
---@field public SoftAlpha number @Default is 1.0 (full). Range is 0 to 1. Blends the effect of the "softness" on/off.
---@field public LegsDefinition TArray<FAnimLegIKDefinition>
local FAnimNode_LegIK = {}
