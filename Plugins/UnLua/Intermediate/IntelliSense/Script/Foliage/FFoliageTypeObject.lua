---A wrapper struct used to allow the use of either FoliageType assets or FoliageType blueprint classes
---@class FFoliageTypeObject
---@field private FoliageTypeObject UObject @The foliage type that will be spawned by the procedural foliage simulation
---@field private TypeInstance UFoliageType @The actual instance of the foliage type that is used for spawning
---@field private bIsAsset boolean @Whether this contains an asset object (as opposed to a BP class)
local FFoliageTypeObject = {}
