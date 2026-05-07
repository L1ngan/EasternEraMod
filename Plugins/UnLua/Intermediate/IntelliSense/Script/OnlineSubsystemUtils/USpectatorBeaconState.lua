---A beacon host used for taking reservations for an existing game session
---@class USpectatorBeaconState : UObject
---@field protected SessionName string @Session tied to the beacon
---@field protected NumConsumedReservations integer @Number of currently consumed reservations
---@field protected MaxReservations integer @Maximum allowed reservations
---@field protected bRestrictCrossConsole boolean @Are multiple consoles types allowed to play together
---@field protected Reservations TArray<FSpectatorReservation> @Current reservations in the system
local USpectatorBeaconState = {}

