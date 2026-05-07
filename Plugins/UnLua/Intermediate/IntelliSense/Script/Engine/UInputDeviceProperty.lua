---Base class that represents a single Input Device Property. An Input Device Property
---represents a feature that can be set on an input device. Things like what color a
---light is, advanced rumble patterns, or trigger haptics.
---This top level object can then be evaluated at a specific time to create a lower level
---FInputDeviceProperty, which the IInputInterface implementation can interpret however it desires.
---The behavior of device properties can vary depending on the current platform. Some platforms may not
---support certain device properties. An older gamepad may not have any advanced trigger haptics for
---example.
---@class UInputDeviceProperty : UObject
---@field protected PropertyDuration number @The duration that this device property should last. Override this if your property has any dynamic curves to be the max time range. A duration of 0 means that the device property will be treated as a "One Shot" effect, being applied once before being removed by the Input Device Subsystem.
local UInputDeviceProperty = {}

---Reset the current device property. Provides an opportunity to reset device state after evaluation is complete.
---If overriding in Blueprints, make sure to call the parent function!
---@param PlatformUser FPlatformUserId
---@param DeviceId FInputDeviceId
---@param bForceReset boolean
function UInputDeviceProperty:ResetDeviceProperty(PlatformUser, DeviceId, bForceReset) end

---Evaluate this device property for a given duration.
---If overriding in Blueprints, make sure to call the parent function!
---@param PlatformUser FPlatformUserId
---@param DeviceId FInputDeviceId
---@param DeltaTime number
---@param Duration number
function UInputDeviceProperty:EvaluateDeviceProperty(PlatformUser, DeviceId, DeltaTime, Duration) end

---Apply the device property from GetInternalDeviceProperty to the given platform user.
---Note: To remove any applied affects of this device property, call ResetDeviceProperty.
---@param UserId FPlatformUserId
---@param DeviceId FInputDeviceId
function UInputDeviceProperty:ApplyDeviceProperty(UserId, DeviceId) end

