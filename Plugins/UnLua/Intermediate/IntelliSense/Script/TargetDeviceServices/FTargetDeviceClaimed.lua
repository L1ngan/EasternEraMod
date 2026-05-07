---Implements a message that is sent when a service claimed a device.
---@class FTargetDeviceClaimed
---@field public DeviceName string @Holds the identifier of the device that is being claimed.
---@field public HostName string @Holds the name of the host computer that is claiming the device.
---@field public HostUser string @Holds the name of the user that is claiming the device.
local FTargetDeviceClaimed = {}
