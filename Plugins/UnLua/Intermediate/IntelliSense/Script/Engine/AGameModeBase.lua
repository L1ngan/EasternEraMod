---The GameModeBase defines the game being played. It governs the game rules, scoring, what actors
---are allowed to exist in this game type, and who may enter the game.
---It is only instanced on the server and will never exist on the client.
---A GameModeBase actor is instantiated when the level is initialized for gameplay in
---C++ UGameEngine::LoadMap().
---The class of this GameMode actor is determined by (in order) either the URL ?game=xxx,
---the GameMode Override value set in the World Settings, or the DefaultGameMode entry set
---in the game's Project Settings.
---@class AGameModeBase : AInfo
---@field public OptionsString string @Save options string and parse it when needed
---@field public GameSessionClass TSubclassOf<AGameSession> @Class of GameSession, which handles login approval and online game interface
---@field public GameStateClass TSubclassOf<AGameStateBase> @Class of GameState associated with this GameMode.
---@field public PlayerControllerClass TSubclassOf<APlayerController> @The class of PlayerController to spawn for players logging in.
---@field public PlayerStateClass TSubclassOf<APlayerState> @A PlayerState of this class will be associated with every player to replicate relevant player information to all clients.
---@field public HUDClass TSubclassOf<AHUD> @HUD class this game uses.
---@field public DefaultPawnClass TSubclassOf<APawn> @The default pawn class used by players.
---@field public SpectatorClass TSubclassOf<ASpectatorPawn> @The pawn class used by the PlayerController for players when spectating.
---@field public ReplaySpectatorPlayerControllerClass TSubclassOf<APlayerController> @The PlayerController class used when spectating a network replay.
---@field public ServerStatReplicatorClass TSubclassOf<AServerStatReplicator>
---@field public GameSession AGameSession @Game Session handles login approval, arbitration, online game interface
---@field public GameState AGameStateBase @GameState is used to replicate game state relevant properties to all clients.
---@field public ServerStatReplicator AServerStatReplicator
---@field public DefaultPlayerName string @The default player name assigned to players that join with no name specified.
---@field public bUseSeamlessTravel boolean @Whether the game perform map travels using SeamlessTravel() which loads in the background and doesn't disconnect clients
---@field protected bStartPlayersAsSpectators boolean @Whether players should immediately spawn when logging in, or stay as spectators until they manually spawn
---@field protected bPauseable boolean @Whether the game is pauseable.
---@field protected GameNetDriverReplicationSystem EReplicationSystem @Can be used to request a specific replication system for a GameNetDriver that will replicate this game mode. Leave to Default to use the game engine's preferred system. Useful when migrating from one repsystem to another and a game mode does not fully support both repsystem yet.
local AGameModeBase = {}

---Transitions to calls BeginPlay on actors.
function AGameModeBase:StartPlay() end

---Called during RestartPlayer to actually spawn the player's pawn, when using a start spot
---@param NewPlayer AController
---@param StartSpot AActor
---@return APawn
function AGameModeBase:SpawnDefaultPawnFor(NewPlayer, StartSpot) end

---Called during RestartPlayer to actually spawn the player's pawn, when using a transform
---@param NewPlayer AController
---@param SpawnTransform FTransform
---@return APawn
function AGameModeBase:SpawnDefaultPawnAtTransform(NewPlayer, SpawnTransform) end

---Overridable function to determine whether an Actor should have Reset called when the game has Reset called on it.
---Default implementation returns true
---                false if the GameMode will manually reset it or if the actor does not need to be reset
---@param ActorToReset AActor
---@return boolean
function AGameModeBase:ShouldReset(ActorToReset) end

---Return to main menu, and disconnect any players
function AGameModeBase:ReturnToMainMenuHost() end

---Tries to spawn the player's pawn at a specific location
---@param NewPlayer AController
---@param SpawnTransform FTransform
function AGameModeBase:RestartPlayerAtTransform(NewPlayer, SpawnTransform) end

---Tries to spawn the player's pawn at the specified actor's location
---@param NewPlayer AController
---@param StartSpot AActor
function AGameModeBase:RestartPlayerAtPlayerStart(NewPlayer, StartSpot) end

---Tries to spawn the player's pawn, at the location returned by FindPlayerStart
---@param NewPlayer AController
function AGameModeBase:RestartPlayer(NewPlayer) end

---Overridable function called when resetting level. This is used to reset the game state while staying in the same map
---Default implementation calls Reset() on all actors except GameMode and Controllers
function AGameModeBase:ResetLevel() end

---Returns true if it's valid to call RestartPlayer. By default will call Player->CanRestartPlayer
---@param Player APlayerController
---@return boolean
function AGameModeBase:PlayerCanRestart(Player) end

---Returns true if NewPlayerController may only join the server as a spectator.
---@param NewPlayerController APlayerController
---@return boolean
function AGameModeBase:MustSpectate(NewPlayerController) end

---Notification that a player has successfully logged in, and has been given a player controller
---@param NewPlayer APlayerController
function AGameModeBase:K2_PostLogin(NewPlayer) end

---Called when a PlayerController is swapped to a new one during seamless travel
---@param OldPC APlayerController
---@param NewPC APlayerController
function AGameModeBase:K2_OnSwapPlayerControllers(OldPC, NewPC) end

---Implementable event called at the end of RestartPlayer
---@param NewPlayer AController
function AGameModeBase:K2_OnRestartPlayer(NewPlayer) end

---Implementable event when a Controller with a PlayerState leaves the game.
---@param ExitingController AController
function AGameModeBase:K2_OnLogout(ExitingController) end

---Overridable event for GameMode blueprint to respond to a change name call
---@param Other AController
---@param NewName string
---@param bNameChange boolean
function AGameModeBase:K2_OnChangeName(Other, NewName, bNameChange) end

---Return the specific player start actor that should be used for the next spawn
---This will either use a previously saved startactor, or calls ChoosePlayerStart
---@param Player AController
---@param IncomingName string
---@return AActor
function AGameModeBase:K2_FindPlayerStart(Player, IncomingName) end

---Called from RestartPlayerAtPlayerStart, can be used to initialize the start spawn actor
---@param StartSpot AActor
---@param NewPlayer AController
function AGameModeBase:InitStartSpot(StartSpot, NewPlayer) end

---Initialize the AHUD object for a player. Games can override this to do something different
---@param NewPlayer APlayerController
function AGameModeBase:InitializeHUDForPlayer(NewPlayer) end

---Returns true if the match start callbacks have been called
---@return boolean
function AGameModeBase:HasMatchStarted() end

---Returns true if the match can be considered ended
---@return boolean
function AGameModeBase:HasMatchEnded() end

---Signals that a player is ready to enter the game, which may start it up
---@param NewPlayer APlayerController
function AGameModeBase:HandleStartingNewPlayer(NewPlayer) end

---Returns number of human players currently spectating
---@return integer
function AGameModeBase:GetNumSpectators() end

---Returns number of active human players, excluding spectators
---@return integer
function AGameModeBase:GetNumPlayers() end

---Returns default pawn class for given controller
---@param InController AController
---@return TSubclassOf_UObject_
function AGameModeBase:GetDefaultPawnClassForController(InController) end

---Return the specific player start actor that should be used for the next spawn
---This will either use a previously saved startactor, or calls ChoosePlayerStart
---@param Player AController
---@param IncomingName string
---@return AActor
function AGameModeBase:FindPlayerStart(Player, IncomingName) end

---Return the 'best' player start for this player to spawn from
---Default implementation looks for a random unoccupied spot
---@param Player AController
---@return AActor
function AGameModeBase:ChoosePlayerStart(Player) end

---Sets the name for a controller
---@param Controller AController
---@param NewName string
---@param bNameChange boolean
function AGameModeBase:ChangeName(Controller, NewName, bNameChange) end

---Return whether Viewer is allowed to spectate from the point of view of ViewTarget.
---@param Viewer APlayerController
---@param ViewTarget APlayerState
---@return boolean
function AGameModeBase:CanSpectate(Viewer, ViewTarget) end

