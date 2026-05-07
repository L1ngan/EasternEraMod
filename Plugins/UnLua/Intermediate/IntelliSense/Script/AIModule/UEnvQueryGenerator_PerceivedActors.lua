---Gathers actors perceived by context
---@class UEnvQueryGenerator_PerceivedActors : UEnvQueryGenerator
---@field protected AllowedActorClass TSubclassOf<AActor> @If set will be used to filter results
---@field protected SearchRadius FAIDataProviderFloatValue @Additional distance limit imposed on the items generated. Perception's range limit still applies.
---@field protected ListenerContext TSubclassOf<UEnvQueryContext> @The perception listener to use as a source of information
---@field protected SenseToUse TSubclassOf<UAISense> @If set will be used to filter gathered results so that only actors perceived with a given sense are considered
---@field protected bIncludeKnownActors boolean @Indicates whether to include all actors known via perception (TRUE) or just the ones actively being perceived at the moment (example "currently visible" as opposed to "seen and the perception stimulus haven't expired yet").
local UEnvQueryGenerator_PerceivedActors = {}

