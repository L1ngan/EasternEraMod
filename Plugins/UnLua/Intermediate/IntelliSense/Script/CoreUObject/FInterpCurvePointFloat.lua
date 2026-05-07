---Describes one specific point on an interpolation curve.
---@class FInterpCurvePointFloat
---@field public InVal number @Float input value that corresponds to this key (eg. time).
---@field public OutVal number @Float output value type when input is equal to InVal.
---@field public ArriveTangent number @Tangent of curve arriving at this point.
---@field public LeaveTangent number @Tangent of curve leaving this point.
---@field public InterpMode integer @Interpolation mode between this point and the next one.
local FInterpCurvePointFloat = {}
