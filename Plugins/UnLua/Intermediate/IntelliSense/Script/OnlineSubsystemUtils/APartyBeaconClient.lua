---A beacon client used for making reservations with an existing game session
---@class APartyBeaconClient : AOnlineBeaconClient
---@field protected DestSessionId string @Session Id of the destination host
---@field protected PendingReservation FPartyReservation @Pending reservation that will be sent upon connection with the intended host
---@field protected RequestType EClientRequestType @Type of request currently being handled by this client beacon
---@field protected bPendingReservationSent boolean @Has the reservation request been delivered
---@field protected bCancelReservation boolean @Has the reservation request been canceled
local APartyBeaconClient = {}

---Tell the server about the reservation update request being made
---@param SessionId string
---@param ReservationUpdate FPartyReservation
function APartyBeaconClient:ServerUpdateReservationRequest(SessionId, ReservationUpdate) end

---Tell the server about the reservation request being made
---@param SessionId string
---@param Reservation FPartyReservation
function APartyBeaconClient:ServerReservationRequest(SessionId, Reservation) end

---Tell the server that we are removing members from our reservation
---@param SessionId string
---@param ReservationUpdate FPartyReservation
function APartyBeaconClient:ServerRemoveMemberFromReservationRequest(SessionId, ReservationUpdate) end

---Tell the server to cancel a pending or existing reservation
---@param PartyLeader FUniqueNetIdRepl
function APartyBeaconClient:ServerCancelReservationRequest(PartyLeader) end

---Tell the server about the reservation add or update request being made
---@param SessionId string
---@param Reservation FPartyReservation
function APartyBeaconClient:ServerAddOrUpdateReservationRequest(SessionId, Reservation) end

---Response from the host session that the reservation count has changed
---@param NumRemainingReservations integer
function APartyBeaconClient:ClientSendReservationUpdates(NumRemainingReservations) end

---Response from the host session that the reservation is full
function APartyBeaconClient:ClientSendReservationFull() end

---Response from the host session after making a reservation request
---@param ReservationResponse integer
function APartyBeaconClient:ClientReservationResponse(ReservationResponse) end

---Response from the host session after making a cancellation request
---@param ReservationResponse integer
function APartyBeaconClient:ClientCancelReservationResponse(ReservationResponse) end

