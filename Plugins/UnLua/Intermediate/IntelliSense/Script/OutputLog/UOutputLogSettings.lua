---Implements the Editor style settings.
---@class UOutputLogSettings : UObject
---@field public LogFontSize integer @The font size used in the output log
---@field public LogTimestampMode integer @The display mode for timestamps in the output log window
---@field public CategoryColorizationMode ELogCategoryColorizationMode @How should categories be colorized in the output log?
---@field public bCycleToOutputLogDrawer boolean @If checked pressing the console command shortcut will cycle between focusing the status bar console, opening the output log drawer, and back to the previous focus target. If unchecked, the console command shortcut will only focus the status bar console
---@field public bEnableOutputLogWordWrap boolean
---@field public bEnableOutputLogClearOnPIE boolean
---@field public OutputLogTabFilter FOutputLogFilterSettings @The most recently used filter settings.
local UOutputLogSettings = {}

