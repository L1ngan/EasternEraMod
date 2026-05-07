---UFUNCTION actions to manage convex hulls generation for geometry collections
---(These are pulled out from the above settings object mainly to control their ordering in the properties panel)
---@class UFractureConvexActions : UFractureToolSettings
local UFractureConvexActions = {}

---Set settings from current project defaults
function UFractureConvexActions:SetFromDefaults() end

---Save settings as project defaults, to be used for all new geometry collections
function UFractureConvexActions:SaveAsDefaults() end

