---@class UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
---@field public SearchedActorClass TSubclassOf<AActor>
---@field public GenerateOnlyActorsInRadius FAIDataProviderBoolValue @If true, this will only returns actors of the specified class within the SearchRadius of the SearchCenter context.  If false, it will return ALL actors of the specified class in the world.
---@field public SearchRadius FAIDataProviderFloatValue @Max distance of path between point and context.  NOTE: Zero and negative values will never return any results if UseRadius is true.  "Within" requires Distance < Radius.  Actors ON the circle (Distance == Radius) are excluded.
---@field public SearchCenter TSubclassOf<UEnvQueryContext> @context
local UEnvQueryGenerator_ActorsOfClass = {}

