---A whole party reservation
---@class FPartyReservation
---@field public TeamNum integer @Team assigned to this party
---@field public PartyLeader FUniqueNetIdRepl @Player initiating the request
---@field public PartyMembers TArray<FPlayerReservation> @All party members (including party leader) in the reservation
---@field public RemovedPartyMembers TArray<FPlayerReservation> @Keeping a record of all logged out players from this reservation.
local FPartyReservation = {}
