---Describes one specific point on an interpolation curve.
---@class FInterpCurvePointQuat
---@field public InVal number @Float input value that corresponds to this key (eg. time).
---@field public OutVal FQuat @Quaternion output value of when input is equal to InVal.
---@field public ArriveTangent FQuat @Tangent of curve arriving at this point.
---@field public LeaveTangent FQuat @Tangent of curve leaving this point.
---@field public InterpMode integer @Interpolation mode between this point and the next one.
local FInterpCurvePointQuat = {}
