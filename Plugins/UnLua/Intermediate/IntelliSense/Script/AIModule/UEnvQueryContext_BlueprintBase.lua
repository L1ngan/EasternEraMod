---@class UEnvQueryContext_BlueprintBase : UEnvQueryContext
local UEnvQueryContext_BlueprintBase = {}

---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingLocation FVector @[out] 
function UEnvQueryContext_BlueprintBase:ProvideSingleLocation(QuerierObject, QuerierActor, ResultingLocation) end

---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingActor AActor @[out] 
function UEnvQueryContext_BlueprintBase:ProvideSingleActor(QuerierObject, QuerierActor, ResultingActor) end

---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingLocationSet TArray_FVector_ @[out] 
function UEnvQueryContext_BlueprintBase:ProvideLocationsSet(QuerierObject, QuerierActor, ResultingLocationSet) end

---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingActorsSet TArray_AActor_ @[out] 
function UEnvQueryContext_BlueprintBase:ProvideActorsSet(QuerierObject, QuerierActor, ResultingActorsSet) end

