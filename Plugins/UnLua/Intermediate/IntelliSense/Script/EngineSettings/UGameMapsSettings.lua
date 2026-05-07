---@class UGameMapsSettings : UObject
---@field public EditorStartupMap FSoftObjectPath @If set, this map will be loaded when the Editor starts up.
---@field public EditorTemplateMapOverrides TArray<FTemplateMapInfoOverride> @Map templates that should show up in the new level dialog. This will completely override the default maps chosen by the default editor
---@field public LocalMapOptions string @The default options that will be appended to a map being loaded.
---@field public TransitionMap FSoftObjectPath @The map loaded when transition from one map to another.
---@field public bUseSplitscreen boolean @Whether the screen should be split or not when multiple local players are present
---@field public TwoPlayerSplitscreenLayout integer @The viewport layout to use if the screen should be split and there are two local players
---@field public ThreePlayerSplitscreenLayout integer @The viewport layout to use if the screen should be split and there are three local players
---@field public FourPlayerSplitscreenLayout EFourPlayerSplitScreenType @The viewport layout to use if the screen should be split and there are three local players
---@field public bOffsetPlayerGamepadIds boolean @If enabled, this will make so that gamepads start being assigned to the second controller ID in local multiplayer games. In PIE sessions with multiple windows, this has the same effect as enabling "Route 1st Gamepad to 2nd Client"
---@field public GameInstanceClass FSoftClassPath @The class to use when instantiating the transient GameInstance class
---@field private GameDefaultMap FSoftObjectPath @The map that will be loaded by default when no other map is loaded.
---@field private ServerDefaultMap FSoftObjectPath @The map that will be loaded by default when no other map is loaded (DEDICATED SERVER).
---@field private GlobalDefaultGameMode FSoftClassPath @GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL).
---@field private GlobalDefaultServerGameMode FSoftClassPath @GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL) (DEDICATED SERVERS) If not set, the GlobalDefaultGameMode value will be used.
---@field private GameModeMapPrefixes TArray<FGameModeName> @Overrides the GameMode to use when loading a map that starts with a specific prefix
---@field private GameModeClassAliases TArray<FGameModeName> @List of GameModes to load when game= is specified in the URL (e.g. "DM" could be an alias for "MyProject.MyGameModeMP_DM")
local UGameMapsSettings = {}

---Modify "Skip Assigning Gamepad to Player 1" GameMapsSettings option
---@param bSkipFirstPlayer boolean @[opt] 
function UGameMapsSettings:SetSkipAssigningGamepadToPlayer1(bSkipFirstPlayer) end

---@return boolean
function UGameMapsSettings:GetSkipAssigningGamepadToPlayer1() end

---Returns the game local maps settings
---@return UGameMapsSettings
function UGameMapsSettings.GetGameMapsSettings() end

