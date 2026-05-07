---A beacon host used for taking reservations for an existing game session
---@class ASpectatorBeaconHost : AOnlineBeaconHostObject
---@field protected State USpectatorBeaconState @State of the beacon
---@field protected bLogoutOnSessionTimeout boolean @Do the timeouts below cause a player to be removed from the reservation list
---@field protected bIsValidationStrRequired boolean @Do spectators require validation strings.
---@field protected SessionTimeoutSecs number @Seconds that can elapse before a reservation is removed due to player not being registered with the session
---@field protected TravelSessionTimeoutSecs number @Seconds that can elapse before a reservation is removed due to player not being registered with the session during a travel
local ASpectatorBeaconHost = {}

