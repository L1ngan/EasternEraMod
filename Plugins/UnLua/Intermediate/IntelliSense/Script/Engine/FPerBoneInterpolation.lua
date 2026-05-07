---@class FPerBoneInterpolation
---@field public BoneReference FBoneReference
---@field public InterpolationSpeedPerSec number @If greater than zero, this is the speed at which the sample weights are allowed to change for this specific bone. A speed of 1 means a sample weight can change from zero to one (or one to zero) in one second. A speed of 2 means that this would take half a second. Smaller values mean slower adjustments of the sample weights, and thus more smoothing. However, a value of zero disables this smoothing entirely. If set, the value overrides the overall Sample Weight Speed which will no longer affect this bone.
local FPerBoneInterpolation = {}
