---UnsetCurveValue is used to perform a change in the curve container by invalidating a single Curve value.
---@class FRigUnit_UnsetCurveValue : FRigUnitMutable
---@field public Curve string @The name of the Curve to set the Value for.
---@field private CachedCurveIndex FCachedRigElement @Used to cache the internally used curve index
local FRigUnit_UnsetCurveValue = {}
