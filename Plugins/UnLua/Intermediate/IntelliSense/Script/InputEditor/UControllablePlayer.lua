---@class UControllablePlayer : UObject
---@field public Player APlayerController
---@field public BindingTargets TMap<string, FBindingTargets>
---@field public InputContext TMap<string, UInputMappingContext> @Storage for input mapping contexts applied to the player
---@field public InputAction TMap<string, UInputAction> @Storage for input actions applied to the player
---@field public UserSettings UEnhancedInputUserSettings @The user settings object that we can use to test. Normally this is owned by the EI Local Player subsystem
local UControllablePlayer = {}

