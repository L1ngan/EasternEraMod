---Settings for Per Element Rotation in the Pattern Tool
---@class UPatternTool_RotationSettings : UInteractiveToolPropertySet
---@field public bInterpolate boolean @If true, Rotation is linearly interpolated between StartRotation and Rotation values
---@field public bJitter boolean @If true, Rotation at each Pattern Element is offset by a uniformly chosen random value in the range of [-RotationJitterRange, RotationJitterRange]
---@field public StartRotation FRotator @Rotation applied to all Pattern Elements, or to first Pattern Element for Interpolated rotation
---@field public EndRotation FRotator @Rotation applied to last Pattern Elements for Interpolated rotation
---@field public Jitter FRotator @Upper bound of the range which is sampled to randomly rotate each Pattern Element if Jitter is true
local UPatternTool_RotationSettings = {}

