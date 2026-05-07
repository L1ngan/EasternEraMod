---UFUNCTION actions to manage default proximity detection settings for geometry collections
---(These are pulled out from the above settings object mainly to control their ordering in the properties panel)
---@class UFractureProximityActions : UFractureToolSettings
local UFractureProximityActions = {}

---Set settings from current project defaults
function UFractureProximityActions:SetFromDefaults() end

---Save settings as project defaults, to be used for all new geometry collections
function UFractureProximityActions:SaveAsDefaults() end

