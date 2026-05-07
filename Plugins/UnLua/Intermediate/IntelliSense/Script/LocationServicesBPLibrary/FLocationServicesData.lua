---Struct to hold relevant location data retrieved from the mobile implementation's Location Service
---@class FLocationServicesData
---@field public Timestamp number @Timestamp from when this location data was taken (UTC time in milliseconds since 1 January 1970)
---@field public Longitude number
---@field public Latitude number
---@field public HorizontalAccuracy number @Estimated horizontal (Android: overall) accuracy of the result, in meters
---@field public VerticalAccuracy number @Estimated accuracy of the result, in meters (iOS only)
---@field public Altitude number @In meters, if provided with the result
local FLocationServicesData = {}
