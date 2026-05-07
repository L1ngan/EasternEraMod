---An identifier that can be used to determine what input devices are available based on the FInputDeviceScope.
---These mappings should match a FInputDeviceScope that is used by an IInputDevice
---@class FHardwareDeviceIdentifier
---@field public InputClassName string @The name of the Input Class that uses this hardware device. This should correspond with a FInputDeviceScope that is used by an IInputDevice
---@field public HardwareDeviceIdentifier string @The name of this hardware device. This should correspond with a FInputDeviceScope that is used by an IInputDevice
---@field public PrimaryDeviceType EHardwareDevicePrimaryType @The generic type that this hardware identifies as. This can be used to easily determine behaviors
---@field public SupportedFeaturesMask integer @Flags that represent this hardware device's traits
local FHardwareDeviceIdentifier = {}
