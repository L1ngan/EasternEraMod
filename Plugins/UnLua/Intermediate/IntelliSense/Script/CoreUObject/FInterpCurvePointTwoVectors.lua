---Describes one specific point on an interpolation curve.
---@class FInterpCurvePointTwoVectors
---@field public InVal number @Float input value that corresponds to this key (eg. time).
---@field public OutVal FTwoVectors @Two 3D vectors output value of when input is equal to InVal.
---@field public ArriveTangent FTwoVectors @Tangent of curve arriving at this point.
---@field public LeaveTangent FTwoVectors @Tangent of curve leaving this point.
---@field public InterpMode integer @Interpolation mode between this point and the next one.
local FInterpCurvePointTwoVectors = {}
