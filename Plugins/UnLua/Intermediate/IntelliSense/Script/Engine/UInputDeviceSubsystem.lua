---The input device subsystem provides an interface to allow users to set Input Device Properties
---on any Platform User.
---@class UInputDeviceSubsystem : UEngineSubsystem
---@field public OnInputHardwareDeviceChanged MulticastDelegate @A delegate that is fired when a platform user changes what Hardware Input device they are using
---@field protected ActiveProperties TSet<FActiveDeviceProperty> @Set of currently active input device properties that will be evaluated on tick
---@field protected PropertiesPendingRemoval TSet<FInputDevicePropertyHandle> @Set of property handles the properties that are currently pending manual removal. This is populated by the "Remove device property" functions.
local UInputDeviceSubsystem = {}

---Remove a set of device properties based on their handles.
---@param HandlesToRemove TSet_FInputDevicePropertyHandle_
function UInputDeviceSubsystem:RemoveDevicePropertyHandles(HandlesToRemove) end

---Remove a single device property based on it's handle
---@param HandleToRemove FInputDevicePropertyHandle
function UInputDeviceSubsystem:RemoveDevicePropertyByHandle(HandleToRemove) end

---Removes all the current Input Device Properties that are active, regardless of the Platform User
function UInputDeviceSubsystem:RemoveAllDeviceProperties() end

---Returns true if the property associated with the given handle is currently active, and it is not pending removal
---@param Handle FInputDevicePropertyHandle
---@return boolean
function UInputDeviceSubsystem:IsPropertyActive(Handle) end

---Returns the most recently used FInputDeviceId for the given platform user id.
---This will be INPUTDEVICEID_NONE if there is no known device for the given user.
---@param InUserId FPlatformUserId
---@param OfType EHardwareDevicePrimaryType @[opt] 
---@return FInputDeviceId
function UInputDeviceSubsystem:GetMostRecentlyUsedInputDeviceId(InUserId, OfType) end

---Gets the most recently used hardware input device for the given platform user
---@param InUserId FPlatformUserId
---@return FHardwareDeviceIdentifier
function UInputDeviceSubsystem:GetMostRecentlyUsedHardwareDevice(InUserId) end

---@param InputDevice FInputDeviceId
---@return FHardwareDeviceIdentifier
function UInputDeviceSubsystem:GetInputDeviceHardwareIdentifier(InputDevice) end

---Returns a pointer to the active input device property with the given handle. Returns null if the property doesn't exist
---@param Handle FInputDevicePropertyHandle
---@return UInputDeviceProperty
function UInputDeviceSubsystem:GetActiveDeviceProperty(Handle) end

---Spawn a new instance of the given device property class and activate it.
---@param PropertyClass TSubclassOf_UInputDeviceProperty_
---@param Params FActivateDevicePropertyParams
---@return FInputDevicePropertyHandle
function UInputDeviceSubsystem:ActivateDevicePropertyOfClass(PropertyClass, Params) end

