---A PlayerState is created for every player on a server (or in a standalone game).
---PlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc.
---@class APlayerState : AInfo
---@field private Score number @Player's current score.
---@field private PlayerId integer @Unique net id number. Actual value varies based on current online subsystem, use it only as a guaranteed unique number per player.
---@field private CompressedPing integer @Replicated compressed ping for this player (holds ping in msec divided by 4)
---@field private bShouldUpdateReplicatedPing boolean @Whether or not this player's replicated CompressedPing value is updated automatically. Since player states are always relevant by default, in cases where there are many players replicating, replicating the ping value can cause additional unnecessary overhead on servers if the value isn't needed on clients.
---@field private bIsSpectator boolean @Whether this player is currently a spectator
---@field private bOnlySpectator boolean @Whether this player can only ever be a spectator
---@field private bIsABot boolean @True if this PlayerState is associated with an AIController
---@field private bIsInactive boolean @Means this PlayerState came from the GameMode's InactivePlayerArray
---@field private bFromPreviousLevel boolean @indicates this is a PlayerState from the previous level of a seamless travel, waiting for the player to finish the transition before creating a new one this is used to avoid preserving the PlayerState in the InactivePlayerArray if the player leaves
---@field private StartTime integer @Elapsed time on server when this PlayerState was first created.
---@field private UniqueId FUniqueNetIdRepl @The id used by the network to uniquely identify a player. NOTE: the internals of this property should *never* be exposed to the player as it's transient and opaque in meaning (ie it might mean date/time followed by something else). It is OK to use and pass around this property, though.
---@field public EngineMessageClass TSubclassOf<ULocalMessage> @This is used for sending game agnostic messages that can be localized
---@field public SavedNetworkAddress string @Used to match up InactivePlayerState with rejoining playercontroller.
---@field public OnPawnSet MulticastDelegate @Broadcast whenever this player's possessed pawn is set
---@field private PawnPrivate APawn @The pawn that is controlled by by this player state.
---@field private PlayerNamePrivate string @Player name, or blank if none.
local APlayerState = {}

---* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting
---*
---* @@param OldPlayerState         Old PlayerState, which we use to fill the new one with
---@param OldPlayerState APlayerState
function APlayerState:ReceiveOverrideWith(OldPlayerState) end

---* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level
---*
---* @@param NewPlayerState         New PlayerState, which we fill with the current properties
---@param NewPlayerState APlayerState
function APlayerState:ReceiveCopyProperties(NewPlayerState) end

function APlayerState:OnRep_UniqueId() end

---Replication Notification Callbacks
function APlayerState:OnRep_Score() end

function APlayerState:OnRep_PlayerName() end

function APlayerState:OnRep_PlayerId() end

function APlayerState:OnRep_bIsInactive() end

---@param InActor AActor
function APlayerState:OnPawnPrivateDestroyed(InActor) end

---Gets the literal value of bIsSpectator.
---@return boolean
function APlayerState:IsSpectator() end

---Gets the literal value of bOnlySpectator.
---@return boolean
function APlayerState:IsOnlyASpectator() end

---Gets the literal value of bIsABot.
---@return boolean
function APlayerState:IsABot() end

---Gets the literal value of Score.
---@return number
function APlayerState:GetScore() end

---returns current player name
---@return string
function APlayerState:GetPlayerName() end

---Gets the literal value of PlayerId.
---@return integer
function APlayerState:GetPlayerId() end

---Return the player controller that created this player state, or null for remote clients
---@return APlayerController
function APlayerState:GetPlayerController() end

---Returns the ping (in milliseconds)
---Returns ExactPing if available (local players or when running on the server), and
---the replicated CompressedPing (converted back to milliseconds) otherwise.
---Note that replication of CompressedPing is controlled by bShouldUpdateReplicatedPing,
---and if disabled then this will return 0 or a stale value on clients for player states
---that aren't related to local players
---@return number
function APlayerState:GetPingInMilliseconds() end

---Return the pawn controlled by this Player State.
---@return APawn
function APlayerState:GetPawn() end

---Gets the literal value of the compressed Ping value (Ping = PingInMS / 4).
---@return integer
function APlayerState:GetCompressedPing() end

---Gets the online unique id for a player. If a player is logged in this will be consistent across all clients and servers.
---@return FUniqueNetIdRepl
function APlayerState:BP_GetUniqueId() end

