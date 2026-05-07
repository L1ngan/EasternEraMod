---A game viewport (FViewport) is a high-level abstract interface for the
---platform specific rendering, audio, and input subsystems.
---GameViewportClient is the engine's interface to a game viewport.
---Exactly one GameViewportClient is created for each instance of the game.  The
---only case (so far) where you might have a single instance of Engine, but
---multiple instances of the game (and thus multiple GameViewportClients) is when
---you have more than one PIE window running.
---Responsibilities:
---propagating input events to the global interactions list
---@class UGameViewportClient : UScriptViewportClient
---@field public ViewportConsole UConsole @The viewport's console.   Might be null on consoles
---@field public DebugProperties TArray<FDebugDisplayProperty> @Debug properties that have been added via one of the "displayall" commands
---@field public MaxSplitscreenPlayers integer
---@field protected World UWorld @The relative world context for this viewport
---@field protected GameInstance UGameInstance
local UGameViewportClient = {}

---Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller.
function UGameViewportClient:SSSwapControllers() end

---Exec for toggling the display of the title safe area
function UGameViewportClient:ShowTitleSafeArea() end

---Sets the player which console commands will be executed in the context of.
---@param PlayerIndex integer
function UGameViewportClient:SetConsoleTarget(PlayerIndex) end

