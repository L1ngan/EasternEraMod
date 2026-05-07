---@class ASkyLight : AInfo
---@field private LightComponent USkyLightComponent @
---@field public bEnabled boolean @replicated copy of LightComponent's bEnabled property
local ASkyLight = {}

---Replication Notification Callbacks
function ASkyLight:OnRep_bEnabled() end

