---Configurable properties for control axes, used to transform raw input into game ready values.
---@class FInputAxisProperties
---@field public DeadZone number @What the dead zone of the axis is.  For control axes such as analog sticks.
---@field public Sensitivity number @Scaling factor to multiply raw value by.
---@field public Exponent number @For applying curves to [0..1] axes, e.g. analog sticks
---@field public bInvert boolean @Inverts reported values for this axis
local FInputAxisProperties = {}
