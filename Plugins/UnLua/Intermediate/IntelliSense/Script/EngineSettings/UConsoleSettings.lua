---Implements the settings for the UConsole class.
---@class UConsoleSettings : UObject
---@field public MaxScrollbackSize integer @The maximum number of lines the console keeps in its output history.
---@field public ManualAutoCompleteList TArray<FAutoCompleteCommand> @Manual list of auto-complete commands and info specified in BaseInput.ini
---@field public AutoCompleteMapPaths TArray<string> @List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini.
---@field public BackgroundOpacityPercentage number @Amount of transparency of the console background.
---@field public bOrderTopToBottom boolean @Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering
---@field public bDisplayHelpInAutoComplete boolean @Display the first line of any available help text in the auto-complete window, if a description isn't available
---@field public InputColor FColor @The color used for text input.
---@field public HistoryColor FColor @The color used for the previously typed commands history.
---@field public AutoCompleteCommandColor FColor @The autocomplete color used for executable commands.
---@field public AutoCompleteCVarColor FColor @The autocomplete color used for mutable CVars.
---@field public AutoCompleteFadedColor FColor @The autocomplete color used for command descriptions and read-only CVars.
local UConsoleSettings = {}

