---UObject based class for handling mobile events. Having this object as an option gives the app lifetime access to these global delegates. The component UApplicationLifecycleComponent is destroyed at level loads
---@class UPlatformGameInstance : UGameInstance
---@field public ApplicationWillDeactivateDelegate MulticastDelegate @This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button). The game should be paused if possible, etc...
---@field public ApplicationHasReactivatedDelegate MulticastDelegate @Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)
---@field public ApplicationWillEnterBackgroundDelegate MulticastDelegate @This is called when the application is being backgrounded (e.g., due to switching to another app or closing it via the home button) The game should release shared resources, save state, etc..., since it can be terminated from the background state without any further warning.
---@field public ApplicationHasEnteredForegroundDelegate MulticastDelegate @Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)
---@field public ApplicationWillTerminateDelegate MulticastDelegate @This *may* be called when the application is getting terminated by the OS. There is no guarantee that this will ever be called on a mobile device, save state when ApplicationWillEnterBackgroundDelegate is called instead.
---@field public ApplicationShouldUnloadResourcesDelegate MulticastDelegate @Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc.
---@field public ApplicationReceivedStartupArgumentsDelegate MulticastDelegate @Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one.
---@field public ApplicationRegisteredForRemoteNotificationsDelegate MulticastDelegate @called when the user grants permission to register for remote notifications
---@field public ApplicationRegisteredForUserNotificationsDelegate MulticastDelegate @called when the user grants permission to register for notifications
---@field public ApplicationFailedToRegisterForRemoteNotificationsDelegate MulticastDelegate @called when the application fails to register for remote notifications
---@field public ApplicationReceivedRemoteNotificationDelegate MulticastDelegate @called when the application receives a remote notification
---@field public ApplicationReceivedLocalNotificationDelegate MulticastDelegate @called when the application receives a local notification
---@field public ApplicationReceivedScreenOrientationChangedNotificationDelegate MulticastDelegate @called when the application receives a screen orientation change notification
local UPlatformGameInstance = {}

---@param StartupArguments TArray_string_
function UPlatformGameInstance:PlatformStartupArgumentsDelegate__DelegateSignature(StartupArguments) end

---@param inScreenOrientation integer
function UPlatformGameInstance:PlatformScreenOrientationChangedDelegate__DelegateSignature(inScreenOrientation) end

---@param inInt integer
function UPlatformGameInstance:PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(inInt) end

---@param inArray TArray_integer_
function UPlatformGameInstance:PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(inArray) end

---@param inString string
---@param inAppState integer
function UPlatformGameInstance:PlatformReceivedRemoteNotificationDelegate__DelegateSignature(inString, inAppState) end

---@param inString string
---@param inInt integer
---@param inAppState integer
function UPlatformGameInstance:PlatformReceivedLocalNotificationDelegate__DelegateSignature(inString, inInt, inAppState) end

---@param inString string
function UPlatformGameInstance:PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(inString) end

function UPlatformGameInstance:PlatformDelegate__DelegateSignature() end

