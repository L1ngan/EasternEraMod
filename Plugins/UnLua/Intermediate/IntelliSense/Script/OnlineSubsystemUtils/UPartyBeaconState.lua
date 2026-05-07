---A beacon host used for taking reservations for an existing game session
---@class UPartyBeaconState : UObject
---@field protected SessionName string @Session tied to the beacon
---@field protected NumConsumedReservations integer @Number of currently consumed reservations
---@field protected MaxReservations integer @Maximum allowed reservations
---@field protected NumTeams integer @Number of teams in the game
---@field protected NumPlayersPerTeam integer @Number of players on each team for balancing
---@field protected TeamAssignmentMethod string @Team assignment method
---@field protected ReservedHostTeamNum integer @Team that the host has been assigned to
---@field protected ForceTeamNum integer @Team that everyone is forced to in single team games
---@field protected bRestrictCrossConsole boolean @Are multiple consoles types allowed to play together
---@field protected PlatformCrossplayRestrictions TArray<string> @Platform crossplay restrictions.  Expected in the format "Plat1=Plat2,Plat3" to indicate Plat1 is considered crossplay with Plat2 and Plat3
---@field protected PlatformTypeMapping TArray<FPartyBeaconCrossplayPlatformMapping>
---@field protected bEnableRemovalRequests boolean @Process requests from clients to remove players from beacon
---@field protected bRespectCompetitiveIntegrity boolean @Competitive integrity represents how "fair" we need to keep the game. So no friends on other teams, no cross team chat, etc.
---@field protected Reservations TArray<FPartyReservation> @Current reservations in the system
local UPartyBeaconState = {}

