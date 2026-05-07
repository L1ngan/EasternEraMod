---Parameters for the UInputDeviceSubsystem::ActivateDeviceProperty function
---@class FActivateDevicePropertyParams
---@field public UserId FPlatformUserId @The Platform User whose device's should receive the device property
---@field public DeviceId FInputDeviceId @The Input Device that should receive the device property. If nothing is specified here, then the Platform User's default input device will be used. The default input device is obtained from IPlatformInputDeviceMapper::GetPrimaryInputDeviceForUser
---@field public bLooping boolean @If true, then the input device property will not be removed after it's evaluation time has completed. Instead, it will remain active until manually removed with a RemoveDeviceProperty call.
---@field public bIgnoreTimeDilation boolean @If true, then this device property will ignore dilated delta time and use the Applications delta time instead
---@field public bPlayWhilePaused boolean @If true, then this device property will be played even if the game world is paused.
local FActivateDevicePropertyParams = {}
