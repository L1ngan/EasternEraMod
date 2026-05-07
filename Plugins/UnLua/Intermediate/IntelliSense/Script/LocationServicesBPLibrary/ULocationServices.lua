---@class ULocationServices : UBlueprintFunctionLibrary
local ULocationServices = {}

---Stops the updates of location from the Location Service that was started with StartLocationService
---@return boolean
function ULocationServices.StopLocationServices() end

---Starts requesting location updates from the appropriate Location Service
---@return boolean
function ULocationServices.StartLocationServices() end

---Checks if the supplied Accuracy is available on the current device.
---@param Accuracy ELocationAccuracy
---@return boolean
function ULocationServices.IsLocationAccuracyAvailable(Accuracy) end

---Called to set up the Location Service before use
---@param Accuracy ELocationAccuracy
---@param UpdateFrequency number
---@param MinDistanceFilter number
---@return boolean
function ULocationServices.InitLocationServices(Accuracy, UpdateFrequency, MinDistanceFilter) end

---* Returns the Location Services implementation object. Intended to be used to set up the FLocationServicesData_OnLocationChanged
---* delegate in Blueprints.
---* @@return - the Android or IOS impl object
---@return ULocationServicesImpl
function ULocationServices.GetLocationServicesImpl() end

---Returns the last location information returned by the location service. If no location update has been made, will return
---a default-value-filled struct.
---@return FLocationServicesData
function ULocationServices.GetLastKnownLocation() end

---Checks if the Location Services on the mobile device are enabled for this application
---@return boolean
function ULocationServices.AreLocationServicesEnabled() end

