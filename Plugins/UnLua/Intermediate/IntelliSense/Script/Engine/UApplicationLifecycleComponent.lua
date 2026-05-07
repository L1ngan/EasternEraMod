---Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc).
---@class UApplicationLifecycleComponent : UActorComponent
---@field public ApplicationWillDeactivateDelegate MulticastDelegate @This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button). The game should be paused if possible, etc...
---@field public ApplicationHasReactivatedDelegate MulticastDelegate @Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)
---@field public ApplicationWillEnterBackgroundDelegate MulticastDelegate @This is called when the application is being backgrounded (e.g., due to switching to another app or closing it via the home button) The game should release shared resources, save state, etc..., since it can be terminated from the background state without any further warning.
---@field public ApplicationHasEnteredForegroundDelegate MulticastDelegate @Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)
---@field public ApplicationWillTerminateDelegate MulticastDelegate @This *may* be called when the application is getting terminated by the OS. There is no guarantee that this will ever be called on a mobile device, save state when ApplicationWillEnterBackgroundDelegate is called instead.
---@field public ApplicationShouldUnloadResourcesDelegate MulticastDelegate @Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc.
---@field public ApplicationReceivedStartupArgumentsDelegate MulticastDelegate @Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one.
---@field public OnTemperatureChangeDelegate MulticastDelegate @Called when temperature level has changed, and receives the severity
---@field public OnLowPowerModeDelegate MulticastDelegate @Called when we are in low power mode
local UApplicationLifecycleComponent = {}

---@param Severity ETemperatureSeverityType
function UApplicationLifecycleComponent:OnTemperatureChangeDelegate__DelegateSignature(Severity) end

---@param bInLowPowerMode boolean
function UApplicationLifecycleComponent:OnLowPowerModeDelegate__DelegateSignature(bInLowPowerMode) end

---@param StartupArguments TArray_string_
function UApplicationLifecycleComponent:ApplicationStartupArgumentsDelegate__DelegateSignature(StartupArguments) end

function UApplicationLifecycleComponent:ApplicationLifetimeDelegate__DelegateSignature() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UApplicationLifecycleComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UApplicationLifecycleComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UApplicationLifecycleComponent:AddAssetUserDataOfClass(InUserDataClass) end

