---Implements a message that is sent when a device is no longer claimed.
---@class FTargetDeviceUnclaimed
---@field public DeviceName string @Holds the identifier of the device that is no longer claimed.
---@field public HostName string @Holds the name of the host computer that had claimed the device.
---@field public HostUser string @Holds the name of the user that had claimed the device.
local FTargetDeviceUnclaimed = {}
