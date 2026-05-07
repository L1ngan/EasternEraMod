---@class UBlueprintPlatformLibrary : UBlueprintFunctionLibrary
local UBlueprintPlatformLibrary = {}

---Set the allowed orientation of the device.
---@param NewAllowedDeviceOrientation integer
function UBlueprintPlatformLibrary.SetAllowedDeviceOrientation(NewAllowedDeviceOrientation) end

---Schedule a local notification to fire inSecondsFromNow from now
---@param inSecondsFromNow integer
---@param Title string
---@param Body string
---@param Action string
---@param ActivationEvent string
---@return integer
function UBlueprintPlatformLibrary.ScheduleLocalNotificationFromNow(inSecondsFromNow, Title, Body, Action, ActivationEvent) end

---Schedule a local notification badge to fire inSecondsFromNow from now
---@param inSecondsFromNow integer
---@param ActivationEvent string
function UBlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow(inSecondsFromNow, ActivationEvent) end

---Schedule a local notification badge at a specific time, inLocalTime specifies the current local time or if UTC time should be used
---@param FireDateTime FDateTime
---@param LocalTime boolean
---@param ActivationEvent string
---@return integer
function UBlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime(FireDateTime, LocalTime, ActivationEvent) end

---Schedule a local notification at a specific time, inLocalTime specifies the current local time or if UTC time should be used
---@param FireDateTime FDateTime
---@param LocalTime boolean
---@param Title string
---@param Body string
---@param Action string
---@param ActivationEvent string
---@return integer
function UBlueprintPlatformLibrary.ScheduleLocalNotificationAtTime(FireDateTime, LocalTime, Title, Body, Action, ActivationEvent) end

---Get the local notification that was used to launch the app
---@param NotificationLaunchedApp boolean @[out] 
---@param ActivationEvent string @[out] 
---@param FireDate integer @[out] 
function UBlueprintPlatformLibrary.GetLaunchNotification(NotificationLaunchedApp, ActivationEvent, FireDate) end

---Returns the current orientation of the device: will be either Portrait, LandscapeLeft, PortraitUpsideDown or LandscapeRight.
---@return integer
function UBlueprintPlatformLibrary.GetDeviceOrientation() end

---Returns the allowed orientation of the device. This is NOT the same as GetDeviceOrientation, which only returns Portrait, LandscapeLeft,
---PortraitUpsideDown or LandscapeRight. The allowed orientation limits what orientation your device can have. So if you set the allowed orientation
---to LandscapeLeft, GetDeviceOrientation will only ever return LandscapeLeft. But if you set the allowed orientation to LandscapeSensor, you are actually
---restricting the allowed orientations to LandscapeLeft OR LandscapeRight (depending on the sensor), so GetDeviceOrientation might return LandscapeLeft OR LandscapeRight.
---@return integer
function UBlueprintPlatformLibrary.GetAllowedDeviceOrientation() end

---Clear all pending local notifications. Typically this will be done before scheduling new notifications when going into the background
function UBlueprintPlatformLibrary.ClearAllLocalNotifications() end

---Cancel a local notification given the ActivationEvent
---@param NotificationId integer
function UBlueprintPlatformLibrary.CancelLocalNotificationById(NotificationId) end

---Cancel a local notification given the ActivationEvent
---@param ActivationEvent string
function UBlueprintPlatformLibrary.CancelLocalNotification(ActivationEvent) end

