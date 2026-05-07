---Implements a message that is sent when a device is already claimed by someone else.
---@class FTargetDeviceClaimDenied
---@field public DeviceName string @Holds the identifier of the device that is already claimed.
---@field public HostName string @Holds the name of the host computer that claimed the device.
---@field public HostUser string @Holds the name of the user that claimed the device.
local FTargetDeviceClaimDenied = {}
