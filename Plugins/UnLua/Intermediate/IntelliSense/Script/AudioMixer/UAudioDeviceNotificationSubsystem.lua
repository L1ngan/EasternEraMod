---UAudioDeviceNotificationSubsystem
---@class UAudioDeviceNotificationSubsystem : UEngineSubsystem
---@field public DefaultCaptureDeviceChanged MulticastDelegate @Multicast delegate triggered when default capture device changes
---@field public DefaultRenderDeviceChanged MulticastDelegate @Multicast delegate triggered when default render device changes
---@field public DeviceAdded MulticastDelegate @Multicast delegate triggered when a device is added
---@field public DeviceRemoved MulticastDelegate @Multicast delegate triggered when a device is removed
---@field public DeviceStateChanged MulticastDelegate @Multicast delegate triggered on device state change
---@field public DeviceSwitched MulticastDelegate @Multicast delegate triggered on device switch
local UAudioDeviceNotificationSubsystem = {}

