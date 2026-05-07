---@class UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
---@field public GeneratorsActionDescription string @A short description of what test does, like "Generate pawn named Joe"
---@field public Context TSubclassOf<UEnvQueryContext> @context
---@field public GeneratedItemType TSubclassOf<UEnvQueryItemType> @     due to the way EQS editor is generating widgets it's there as well     It's a bug and we'll fix it
local UEnvQueryGenerator_BlueprintBase = {}

---@return UObject
function UEnvQueryGenerator_BlueprintBase:GetQuerier() end

---@param ContextActors TArray_AActor_
function UEnvQueryGenerator_BlueprintBase:DoItemGenerationFromActors(ContextActors) end

---@param ContextLocations TArray_FVector_
function UEnvQueryGenerator_BlueprintBase:DoItemGeneration(ContextLocations) end

---@param GeneratedVector FVector
function UEnvQueryGenerator_BlueprintBase:AddGeneratedVector(GeneratedVector) end

---@param GeneratedActor AActor
function UEnvQueryGenerator_BlueprintBase:AddGeneratedActor(GeneratedActor) end

