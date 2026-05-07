---Current State of a physical Mouse device at a point in time.
---@class FMouseInputDeviceState
---@field public Left FDeviceButtonState @State of the left mouse button
---@field public Middle FDeviceButtonState @State of the middle mouse button
---@field public Right FDeviceButtonState @State of the right mouse button
---@field public WheelDelta number @Change in 'ticks' of the mouse wheel since last state event
---@field public Position2D FVector2D @Current 2D position of the mouse, in application-defined coordinate system
---@field public Delta2D FVector2D @Change in 2D mouse position from last state event
---@field public WorldRay FRay @Ray into current 3D scene at current 2D mouse position
local FMouseInputDeviceState = {}
