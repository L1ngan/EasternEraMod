---Implements an Actor for exponential height fog.
---@class AExponentialHeightFog : AInfo
---@field private Component UExponentialHeightFogComponent @
---@field public bEnabled boolean @replicated copy of ExponentialHeightFogComponent's bEnabled property
local AExponentialHeightFog = {}

---Replication Notification Callbacks
function AExponentialHeightFog:OnRep_bEnabled() end

