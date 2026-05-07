---GameMode is a subclass of GameModeBase that behaves like a multiplayer match-based game.
---It has default behavior for picking spawn points and match state.
---If you want a simpler base, inherit from GameModeBase instead.
---@class AGameMode : AGameModeBase
---@field protected MatchState string @What match state we are currently in
---@field public bDelayedStart boolean @Whether the game should immediately start when the first player logs in. Affects the default behavior of ReadyToStartMatch
---@field public NumSpectators integer @Current number of spectators.
---@field public NumPlayers integer @Current number of human players.
---@field public NumBots integer @number of non-human players (AI controlled but participating as a player).
---@field public MinRespawnDelay number @Minimum time before player can respawn after dying.
---@field public NumTravellingPlayers integer @Number of players that are still traveling from a previous map
---@field public EngineMessageClass TSubclassOf<ULocalMessage> @Contains strings describing localized game agnostic messages.
---@field public InactivePlayerArray TArray<APlayerState> @PlayerStates of players who have disconnected from the server (saved in case they reconnect)
---@field protected InactivePlayerStateLifeSpan number @Time a playerstate will stick around in an inactive state after a player logout
---@field protected MaxInactivePlayers integer @The maximum number of inactive players before we kick the oldest ones out
---@field protected bHandleDedicatedServerReplays boolean @If true, dedicated servers will record replays when HandleMatchHasStarted/HandleMatchHasStopped is called
local AGameMode = {}

---Transition from WaitingToStart to InProgress. You can call this manually, will also get called if ReadyToStartMatch returns true
function AGameMode:StartMatch() end

---Exec command to broadcast a string to all players
---@param Msg string
function AGameMode:Say(Msg) end

---Restart the game, by default travel to the current map
function AGameMode:RestartGame() end

---Returns true if ready to Start Match. Games should override this
---@return boolean
function AGameMode:ReadyToStartMatch() end

---Returns true if ready to End Match. Games should override this
---@return boolean
function AGameMode:ReadyToEndMatch() end

---Implementable event to respond to match state changes
---@param NewState string
function AGameMode:K2_OnSetMatchState(NewState) end

---Returns true if the match state is InProgress or other gameplay state
---@return boolean
function AGameMode:IsMatchInProgress() end

---Returns the current match state, this is an accessor to protect the state machine flow
---@return string
function AGameMode:GetMatchState() end

---Transition from InProgress to WaitingPostMatch. You can call this manually, will also get called if ReadyToEndMatch returns true
function AGameMode:EndMatch() end

---Report that a match has failed due to unrecoverable error
function AGameMode:AbortMatch() end

