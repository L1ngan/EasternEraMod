---CurveExists is used to check whether a curve exists or not.
---@class FRigUnit_CurveExists : FRigUnit
---@field public Curve string @The name of the Curve to retrieve the transform for.
---@field public Exists boolean @Boolean indicating whether the named curve exists or not. Does not indicate whether the curve's value is valid or not.
---@field private CachedCurveIndex FCachedRigElement @Used to cache the internally used Curve index
local FRigUnit_CurveExists = {}
