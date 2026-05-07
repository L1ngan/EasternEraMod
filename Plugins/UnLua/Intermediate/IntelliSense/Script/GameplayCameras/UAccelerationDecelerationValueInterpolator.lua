---A value interpolator that first accelerates up to a maximum speed, and then decelerates
---before reaching the target value.
---@class UAccelerationDecelerationValueInterpolator : UCameraValueInterpolator
---@field public Acceleration number @The acceleration rate at the start of interpolation.
---@field public MaxSpeed number @The maximum speed reachable during interpolation.
---@field public Deceleration number @The deceleration rate at the end of interpolation.
local UAccelerationDecelerationValueInterpolator = {}

