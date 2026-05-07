---UMetaSoundCacheSubsystem
---@class UMetaSoundCacheSubsystem : UAudioEngineSubsystem
local UMetaSoundCacheSubsystem = {}

---same as PrecacheMetaSound except cached operator that already exists in the cache will be moved to the top instead of building,
---      any operators that we couldn't move to the top, will be built.
---      (i.e. if 2 operators are already cached and Num Instances is 4, it will construct 2 and move the existing 2 to the top of the cache)
---@param InMetaSound UMetaSoundSource
---@param InNumInstances integer @[opt] 
function UMetaSoundCacheSubsystem:TouchOrPrecacheMetaSound(InMetaSound, InNumInstances) end

---Clear the operator pool of any operators associated with the given MetaSound
---@param InMetaSound UMetaSoundSource
function UMetaSoundCacheSubsystem:RemoveCachedOperatorsForMetaSound(InMetaSound) end

---Builds the requested number of MetaSound operators (asynchronously) and puts them in the pool for playback.
---      (If these operators are not yet available when the MetaSound attempts to play, one will be created Independent of this request.)
---@param InMetaSound UMetaSoundSource
---@param InNumInstances integer @[opt] 
function UMetaSoundCacheSubsystem:PrecacheMetaSound(InMetaSound, InNumInstances) end

