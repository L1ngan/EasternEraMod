---Types of reservation requests that can be made by this beacon
---@class ESpectatorClientRequestType
---@field public NonePending integer
---@field public ExistingSessionReservation integer
---@field public ReservationUpdate integer
---@field public EmptyServerReservation integer
---@field public Reconnect integer
---@field public Abandon integer
---@field public ESpectatorClientRequestType_MAX integer
local ESpectatorClientRequestType = {}
