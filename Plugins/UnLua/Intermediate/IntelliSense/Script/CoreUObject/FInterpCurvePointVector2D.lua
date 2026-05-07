---Describes one specific point on an interpolation curve.
---@class FInterpCurvePointVector2D
---@field public InVal number @Float input value that corresponds to this key (eg. time).
---@field public OutVal FVector2D @2D vector output value of when input is equal to InVal.
---@field public ArriveTangent FVector2D @Tangent of curve arriving at this point.
---@field public LeaveTangent FVector2D @Tangent of curve leaving this point.
---@field public InterpMode integer @Interpolation mode between this point and the next one.
local FInterpCurvePointVector2D = {}
