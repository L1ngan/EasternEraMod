---GameStateBase is a class that manages the game's global state, and is spawned by GameModeBase.
---It exists on both the client and the server and is fully replicated.
---@class AGameStateBase : AInfo
---@field public GameModeClass TSubclassOf<AGameModeBase> @Class of the server's game mode, assigned by GameModeBase.
---@field public AuthorityGameMode AGameModeBase @Instance of the current game mode, exists only on the server. For non-authority clients, this will be NULL.
---@field public SpectatorClass TSubclassOf<ASpectatorPawn> @Class used by spectators, assigned by GameModeBase.
---@field public PlayerArray TArray<APlayerState> @Array of all PlayerStates, maintained on both server and clients (PlayerStates are always relevant)
---@field protected bReplicatedHasBegunPlay boolean @Replicated when GameModeBase->StartPlay has been called so the client will also start play
---@field protected ReplicatedWorldTimeSeconds number
---@field protected ReplicatedWorldTimeSecondsDouble number
---@field protected ServerWorldTimeSecondsDelta number @The difference from the local world's TimeSeconds and the server world's TimeSeconds.
---@field protected ServerWorldTimeSecondsUpdateFrequency number @Frequency that the server updates the replicated TimeSeconds from the world. Set to zero to disable periodic updates.
local AGameStateBase = {}

---Callback when we receive the spectator class
function AGameStateBase:OnRep_SpectatorClass() end

---Allows clients to calculate ServerWorldTimeSecondsDelta
function AGameStateBase:OnRep_ReplicatedWorldTimeSecondsDouble() end

function AGameStateBase:OnRep_ReplicatedWorldTimeSeconds() end

---By default calls BeginPlay and StartMatch
function AGameStateBase:OnRep_ReplicatedHasBegunPlay() end

---GameModeBase class notification callback.
function AGameStateBase:OnRep_GameModeClass() end

---Returns true if the world has started match (called MatchStarted callbacks)
---@return boolean
function AGameStateBase:HasMatchStarted() end

---Returns true if the match can be considered ended. Defaults to false.
---@return boolean
function AGameStateBase:HasMatchEnded() end

---Returns true if the world has started play (called BeginPlay on actors)
---@return boolean
function AGameStateBase:HasBegunPlay() end

---Returns the simulated TimeSeconds on the server, will be synchronized on client and server
---@return number
function AGameStateBase:GetServerWorldTimeSeconds() end

---Returns the time that should be used as when a player started
---@param Controller AController
---@return number
function AGameStateBase:GetPlayerStartTime(Controller) end

---Returns how much time needs to be spent before a player can respawn
---@param Controller AController
---@return number
function AGameStateBase:GetPlayerRespawnDelay(Controller) end

