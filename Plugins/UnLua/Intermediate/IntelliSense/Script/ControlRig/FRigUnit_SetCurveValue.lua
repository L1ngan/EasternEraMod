---SetCurveValue is used to perform a change in the curve container by setting a single Curve value.
---@class FRigUnit_SetCurveValue : FRigUnitMutable
---@field public Curve string @The name of the Curve to set the Value for.
---@field public Value number @The value to set for the given Curve.
---@field private CachedCurveIndex FCachedRigElement @Used to cache the internally used curve index
local FRigUnit_SetCurveValue = {}
