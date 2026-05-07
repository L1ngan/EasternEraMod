---GameInstance: high-level manager object for an instance of the running game.
---Spawned at game creation and not destroyed until game instance is shut down.
---Running as a standalone game, there will be one of these.
---Running in PIE (play-in-editor) will generate one of these per PIE instance.
---@class UGameInstance : UObject
---@field protected LocalPlayers TArray<ULocalPlayer> @List of locally participating players in this game instance
---@field protected OnlineSession UOnlineSession @Class to manage online services
---@field protected ReferencedObjects TArray<UObject> @List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame
---@field protected OnPawnControllerChangedDelegates MulticastDelegate @gets triggered shortly after a pawn's controller is set. Most of the time     it signals that the Controller has changed but in edge cases (like during     replication) it might end up broadcasting the same pawn-controller pair     more than once
---@field public OnInputDeviceConnectionChange MulticastDelegate @Callback for when an input device connection state has changed (a new gamepad was connected or disconnected)
---@field public OnUserInputDevicePairingChange MulticastDelegate @Callback when an input device has changed pairings (the owning platform user has changed for that device)
local UGameInstance = {}

---Opportunity for blueprints to handle the game instance being shutdown.
function UGameInstance:ReceiveShutdown() end

---Opportunity for blueprints to handle the game instance being initialized.
function UGameInstance:ReceiveInit() end

---Opportunity for blueprints to handle travel errors.
---@param FailureType integer
function UGameInstance:HandleTravelError(FailureType) end

---Opportunity for blueprints to handle network errors.
---@param FailureType integer
---@param bIsServer boolean
function UGameInstance:HandleNetworkError(FailureType, bIsServer) end

---Debug console command to remove the player with a given controller ID.
---@param ControllerId integer
function UGameInstance:DebugRemovePlayer(ControllerId) end

---Debug console command to create a player.
---@param ControllerId integer
function UGameInstance:DebugCreatePlayer(ControllerId) end

