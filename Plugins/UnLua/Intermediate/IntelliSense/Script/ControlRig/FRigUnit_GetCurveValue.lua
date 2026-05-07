---GetCurveValue is used to retrieve a single float from a Curve
---@class FRigUnit_GetCurveValue : FRigUnit
---@field public Curve string @The name of the Curve to retrieve the transform for.
---@field public Valid boolean
---@field public Value number @The current transform of the given Curve - or identity in case it wasn't found.
---@field private CachedCurveIndex FCachedRigElement @Used to cache the internally used Curve index
local FRigUnit_GetCurveValue = {}
