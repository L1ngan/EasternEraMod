---Developer settings for Enhanced Input
---@class UEnhancedInputDeveloperSettings : UDeveloperSettingsBackedByCVars
---@field public DefaultMappingContexts TArray<FDefaultContextSetting> @Array of any input mapping contexts that you want to be applied by default to the Enhanced Input local player subsystem. NOTE: These mapping context's can only be from your game's root content directory, not plugins.
---@field public DefaultWorldSubsystemMappingContexts TArray<FDefaultContextSetting> @Array of any input mapping contexts that you want to be applied by default to the Enhanced Input world subsystem. NOTE: These mapping context's can only be from your game's root content directory, not plugins.
---@field public PlatformSettings FPerPlatformSettings @Platform specific settings for Enhanced Input.
---@field public UserSettingsClass TSoftClassPtr<UEnhancedInputUserSettings> @The class that should be used for the User Settings by each Enhanced Input subsystem. An instance of this class will be spawned by each Enhanced Input subsytem as a place to store user settings such as keymappings, accessibility settings, etc. Subclass this to add more custom options to your game.
---@field public DefaultPlayerMappableKeyProfileClass TSoftClassPtr<UEnhancedPlayerMappableKeyProfile> @The default class for the player mappable key profile, used to store the key mappings set by the player in the user settings.
---@field public InputSettingsSaveSlotName string @The default SaveGame slot name to use when loading/saving Enhanced Input user settings. The file name will be this string with ".sav" appended to the end of it. So, on disk, the file would be "<InputSettingsSaveSlotName>.sav". This file will be written to the "SaveGames" directory, which is "<Project Folder>/Saved/SaveGames" in the editor.
---@field public DefaultWorldInputClass TSoftClassPtr<UEnhancedPlayerInput> @The default player input class that the Enhanced Input world subsystem will use.
---@field public bSendTriggeredEventsWhenInputIsFlushed boolean @If true, then any in progress Enhanced Input Actions will fire Cancelled and Triggered events when input is flushed (i.e. the viewport has lost focus, or UEnhancedPlayerInput::FlushPressedKeys has been called) If false, then enhanced input actions may not fire their delegates when input is flushed and their key state would be retained.
---@field public bEnableUserSettings boolean @If true, then an instance of the User Settings Class will be created on each Enhanced Input subsystem.
---@field public bEnableDefaultMappingContexts boolean @If true, then the DefaultMappingContexts will be applied to all Enhanced Input Subsystems.
---@field public bShouldOnlyTriggerLastActionInChord boolean @If true, then only the last action in a ChordedAction trigger will be fired. This means that only the action that has the ChordedTrigger on it will be fired, not the individual steps. Default value is true.
---@field public bEnableInputModeFiltering boolean @If true, then Enhanced Input will filter which Input Mapping Context mappings are processed based on the current value of the "Current Input Mode". If a mapping context's query does not match with the current input mode tag container, then its mappings will not be processed. Default Value is true.
---@field public bEnableWorldSubsystem boolean @If true, then the world subsystem will be created.
---@field public DefaultMappingContextInputModeQuery FGameplayTagQuery @This value will be used to populate the default InputModeQuery on Input Mapping Contexts.
---@field public DefaultInputMode FGameplayTagContainer @The default input mode which will be set when a UEnhancedPlayerInput object is created.
local UEnhancedInputDeveloperSettings = {}

