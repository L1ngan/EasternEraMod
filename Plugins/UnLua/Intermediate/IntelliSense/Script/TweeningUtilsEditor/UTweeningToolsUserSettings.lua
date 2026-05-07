---@class UTweeningToolsUserSettings : UObject
---@field private PreferredTweenFunction TMap<string, string> @Associates features with the preferred function in that feature. If you want multiple locations in the editor to share the same setting, use the same key. This tween function should be selected by default when a curve editor is created. It is the function that was used last time in the editor.
local UTweeningToolsUserSettings = {}

