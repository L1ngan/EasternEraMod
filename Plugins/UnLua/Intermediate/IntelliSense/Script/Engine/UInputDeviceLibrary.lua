---A static BP library that exposes Input Device data to blueprints
---@class UInputDeviceLibrary : UBlueprintFunctionLibrary
local UInputDeviceLibrary = {}

---Static invalid platform user
---@return FPlatformUserId
function UInputDeviceLibrary.PlatformUserId_None() end

---Returns true if PlatformUserId A is not equal to PlatformUserId B (A != B)
---@param A FPlatformUserId
---@param B FPlatformUserId
---@return boolean
function UInputDeviceLibrary.NotEqual_PlatformUserId(A, B) end

---Returns true if InputDeviceId A is not equal to InputDeviceId B (A != B)
---@param A FInputDeviceId
---@param B FInputDeviceId
---@return boolean
function UInputDeviceLibrary.NotEqual_InputDeviceId(A, B) end

---Check if the given platform ID is valid
---@param UserId FPlatformUserId
---@return boolean
function UInputDeviceLibrary.IsValidPlatformId(UserId) end

---Check if the given input device is valid
---@param DeviceId FInputDeviceId
---@return boolean
function UInputDeviceLibrary.IsValidInputDevice(DeviceId) end

---Returns true if the given Platform User Id is the user for unpaired input devices on this platform.
---@param PlatformId FPlatformUserId
---@return boolean
function UInputDeviceLibrary.IsUnpairedUserId(PlatformId) end

---Returns true if the given input device is mapped to the unpaired platform user id.
---@param InputDevice FInputDeviceId
---@return boolean
function UInputDeviceLibrary.IsInputDeviceMappedToUnpairedUser(InputDevice) end

---Returns true if the given handle is valid
---@param InHandle FInputDevicePropertyHandle
---@return boolean
function UInputDeviceLibrary.IsDevicePropertyHandleValid(InHandle) end

---Static invalid input device
---@return FInputDeviceId
function UInputDeviceLibrary.InputDeviceId_None() end

---Returns the platform user id that is being used for unmapped input devices.
---Will be PLATFORMUSERID_NONE if platform does not support this (this is the default behavior)
---@return FPlatformUserId
function UInputDeviceLibrary.GetUserForUnpairedInputDevices() end

---Returns the platform user attached to this input device, or PLATFORMUSERID_NONE if invalid
---@param DeviceId FInputDeviceId
---@return FPlatformUserId
function UInputDeviceLibrary.GetUserForInputDevice(DeviceId) end

---Returns the 'Primary' Platform user for this platform.
---This typically has an internal ID of '0' and is used as the default platform user to
---map devices such as the keyboard and mouse that don't get assigned unique ID's from their
---owning platform code.
---@return FPlatformUserId
function UInputDeviceLibrary.GetPrimaryPlatformUser() end

---Returns the primary input device used by a specific player, or INPUTDEVICEID_NONE if invalid
---@param UserId FPlatformUserId
---@return FInputDeviceId
function UInputDeviceLibrary.GetPrimaryInputDeviceForUser(UserId) end

---Get the player controller who has the given Platform User ID.
---@param UserId FPlatformUserId
---@return APlayerController
function UInputDeviceLibrary.GetPlayerControllerFromPlatformUser(UserId) end

---Get the player controller who owns the given input device id
---@param DeviceId FInputDeviceId
---@return APlayerController
function UInputDeviceLibrary.GetPlayerControllerFromInputDevice(DeviceId) end

---Gets the connection state of the given input device.
---@param DeviceId FInputDeviceId
---@return EInputDeviceConnectionState
function UInputDeviceLibrary.GetInputDeviceConnectionState(DeviceId) end

---Returns the default device id used for things like keyboard/mouse input
---@return FInputDeviceId
function UInputDeviceLibrary.GetDefaultInputDevice() end

---Populates the OutInputDevices array with any InputDeviceID's that are mapped to the given platform user
---@param UserId FPlatformUserId
---@param OutInputDevices TArray_FInputDeviceId_ @[out] 
---@return integer
function UInputDeviceLibrary.GetAllInputDevicesForUser(UserId, OutInputDevices) end

---Get all mapped input devices on this platform regardless of their connection state.
---@param OutInputDevices TArray_FInputDeviceId_ @[out] 
---@return integer
function UInputDeviceLibrary.GetAllInputDevices(OutInputDevices) end

---Gather all currently connected input devices
---@param OutInputDevices TArray_FInputDeviceId_ @[out] 
---@return integer
function UInputDeviceLibrary.GetAllConnectedInputDevices(OutInputDevices) end

---Get all currently active platform ids, anyone who has a mapped input device
---@param OutUsers TArray_FPlatformUserId_ @[out] 
---@return integer
function UInputDeviceLibrary.GetAllActiveUsers(OutUsers) end

---Returns true if PlatformUserId A is equal to PlatformUserId B (A == B)
---@param A FPlatformUserId
---@param B FPlatformUserId
---@return boolean
function UInputDeviceLibrary.EqualEqual_PlatformUserId(A, B) end

---Returns true if InputDeviceId A is equal to InputDeviceId B (A == B)
---@param A FInputDeviceId
---@param B FInputDeviceId
---@return boolean
function UInputDeviceLibrary.EqualEqual_InputDeviceId(A, B) end

