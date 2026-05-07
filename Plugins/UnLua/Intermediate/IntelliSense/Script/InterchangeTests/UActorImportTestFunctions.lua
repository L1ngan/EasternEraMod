---@class UActorImportTestFunctions : UImportTestFunctionsBase
local UActorImportTestFunctions = {}

---Check whether the expected number of actors are imported
---@param Actors TArray_AActor_
---@param ExpectedNumberOfImportedActors integer
---@return FInterchangeTestFunctionResult
function UActorImportTestFunctions.CheckImportedActorCount(Actors, ExpectedNumberOfImportedActors) end

---Check whether the generic property (with a given name) in the imported actor component (with the given name) has the expected value (or matches with it using regex)
---@param Actor AActor
---@param ComponentName string
---@param PropertyName string
---@param bUseRegexToMatchValue boolean
---@param ExpectedValue string
---@return FInterchangeTestFunctionResult
function UActorImportTestFunctions.CheckComponentPropertyValue(Actor, ComponentName, PropertyName, bUseRegexToMatchValue, ExpectedValue) end

---Check whether the generic property (with a given name) in the imported actor has the expected value (or matches with it using regex)
---@param Actor AActor
---@param PropertyName string
---@param bUseRegexToMatchValue boolean
---@param ExpectedValue string
---@return FInterchangeTestFunctionResult
function UActorImportTestFunctions.CheckActorPropertyValue(Actor, PropertyName, bUseRegexToMatchValue, ExpectedValue) end

---Check whether the expected number of actors with a given class are imported
---@param Actors TArray_AActor_
---@param Class TSubclassOf_AActor_
---@param ExpectedNumberOfActors integer
---@return FInterchangeTestFunctionResult
function UActorImportTestFunctions.CheckActorClassCount(Actors, Class, ExpectedNumberOfActors) end

---Check whether the imported actor has the expected class
---@param Actor AActor
---@param ExpectedClass TSubclassOf_AActor_
---@return FInterchangeTestFunctionResult
function UActorImportTestFunctions.CheckActorClass(Actor, ExpectedClass) end

