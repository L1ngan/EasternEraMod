---@class UGameplayDebuggerUserSettings : UDeveloperSettings
---@field public bEnableGameplayDebuggerInEditor boolean @Controls whether GameplayDebugger will be available in pure editor mode.
---@field public MaxViewDistance number @Distance from view location under which actors can be selected This distance can also be used by some categories to apply culling.
---@field public MaxViewAngle number @Angle from view direction under which actors can be selected This angle can also be used by some categories to apply culling.
---@field public EnabledCategories TSet<string> @Persist which categories are enabled across editor sessions. Saved to disk as names since index is unstable.
---@field protected FontSize integer @Font Size used by Gameplay Debugger
local UGameplayDebuggerUserSettings = {}

