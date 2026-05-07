---Describes one specific point on an interpolation curve.
---@class FInterpCurvePointVector
---@field public InVal number @Float input value that corresponds to this key (eg. time).
---@field public OutVal FVector @3D vector output value of when input is equal to InVal.
---@field public ArriveTangent FVector @Tangent of curve arriving at this point.
---@field public LeaveTangent FVector @Tangent of curve leaving this point.
---@field public InterpMode integer @Interpolation mode between this point and the next one.
local FInterpCurvePointVector = {}
