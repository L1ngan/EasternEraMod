---A volume representing a location in the world. Used for World Partition loading regions.
---@class ALocationVolume : AVolume
---@field public DebugColor FColor
local ALocationVolume = {}

---Unload this location volume
function ALocationVolume:Unload() end

---Load this location volume
function ALocationVolume:Load() end

---Return if this location volume is loaded
---@return boolean
function ALocationVolume:IsLoaded() end

