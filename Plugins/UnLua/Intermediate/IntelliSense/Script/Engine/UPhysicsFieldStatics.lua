---Static function with world field evaluation
---@class UPhysicsFieldStatics : UBlueprintFunctionLibrary
local UPhysicsFieldStatics = {}

---Evaluate the world physics vector field from BP
---@param WorldContextObject UObject
---@param WorldPosition FVector
---@param VectorType integer
---@return FVector
function UPhysicsFieldStatics.EvalPhysicsVectorField(WorldContextObject, WorldPosition, VectorType) end

---Evaluate the world physics scalar field from BP
---@param WorldContextObject UObject
---@param WorldPosition FVector
---@param ScalarType integer
---@return number
function UPhysicsFieldStatics.EvalPhysicsScalarField(WorldContextObject, WorldPosition, ScalarType) end

---Evaluate the world physics integer field from BP
---@param WorldContextObject UObject
---@param WorldPosition FVector
---@param IntegerType integer
---@return integer
function UPhysicsFieldStatics.EvalPhysicsIntegerField(WorldContextObject, WorldPosition, IntegerType) end

