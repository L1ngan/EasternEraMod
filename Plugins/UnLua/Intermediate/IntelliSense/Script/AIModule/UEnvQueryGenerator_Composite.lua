---Composite generator allows using multiple generators in single query option
---All child generators must produce exactly the same item type!
---@class UEnvQueryGenerator_Composite : UEnvQueryGenerator
---@field public Generators TArray<UEnvQueryGenerator>
---@field public bAllowDifferentItemTypes boolean @allow generators with different item types, use at own risk! WARNING: generator will use ForcedItemType for raw data, you MUST ensure proper memory layout child generators will be writing to memory block through their own item types: - data must fit info block allocated by ForcedItemType - tests will read item location/properties through ForcedItemType
---@field public bHasMatchingItemType boolean
---@field public ForcedItemType TSubclassOf<UEnvQueryItemType>
local UEnvQueryGenerator_Composite = {}

