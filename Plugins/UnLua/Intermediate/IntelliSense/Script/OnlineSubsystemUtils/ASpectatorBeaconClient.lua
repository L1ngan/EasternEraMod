---A beacon client used for making reservations with an existing game session
---@class ASpectatorBeaconClient : AOnlineBeaconClient
---@field protected DestSessionId string @Session Id of the destination host
---@field protected PendingReservation FSpectatorReservation @Pending reservation that will be sent upon connection with the intended host
---@field protected RequestType ESpectatorClientRequestType @Type of request currently being handled by this client beacon
---@field protected bPendingReservationSent boolean @Has the reservation request been delivered
---@field protected bCancelReservation boolean @Has the reservation request been canceled
local ASpectatorBeaconClient = {}

---Tell the server about the reservation request being made
---@param SessionId string
---@param Reservation FSpectatorReservation
function ASpectatorBeaconClient:ServerReservationRequest(SessionId, Reservation) end

---Tell the server to cancel a pending or existing reservation
---@param Spectator FUniqueNetIdRepl
function ASpectatorBeaconClient:ServerCancelReservationRequest(Spectator) end

---Response from the host session that the reservation count has changed
---@param NumRemainingReservations integer
function ASpectatorBeaconClient:ClientSendReservationUpdates(NumRemainingReservations) end

---Response from the host session that the reservation is full
function ASpectatorBeaconClient:ClientSendReservationFull() end

---Response from the host session after making a reservation request
---@param ReservationResponse integer
function ASpectatorBeaconClient:ClientReservationResponse(ReservationResponse) end

---Response from the host session after making a cancellation request
---@param ReservationResponse integer
function ASpectatorBeaconClient:ClientCancelReservationResponse(ReservationResponse) end

