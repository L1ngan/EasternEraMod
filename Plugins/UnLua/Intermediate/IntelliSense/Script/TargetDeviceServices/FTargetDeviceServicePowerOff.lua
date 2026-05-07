---Implements a message for powering on a target device.
---@class FTargetDeviceServicePowerOff
---@field public Force boolean @Holds a flag indicating whether the power-off should be enforced. If powering off is not enforced, if may fail if some running application prevents it.
---@field public Operator string @Holds the name of the user that wishes to power off the device.
local FTargetDeviceServicePowerOff = {}
