---@class FIKRigSetTransformSettings : FIKRigSolverSettingsBase
---@field public Goal string @The goal used to affect the bone transform
---@field public BoneToAffect string @The bone to affect
---@field public PositionAlpha number @Blend the translation on/off. Range is 0-1. Default is 1.0.
---@field public RotationAlpha number @Blend the rotation on/off. Range is 0-1. Default is 1.0.
---@field public Alpha number @Blend the total effect on/off. Range is 0-1. Default is 1.0.
---@field public bPropagateToChildren boolean @If true, the transform modification will propagate to the hierarchy below the target bone.
local FIKRigSetTransformSettings = {}
