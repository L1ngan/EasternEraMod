---@class AInstancedFoliageActor : AISMPartitionActor
local AInstancedFoliageActor = {}

---@param WorldContextObject UObject
---@param InFoliageType UFoliageType
function AInstancedFoliageActor.RemoveAllInstances(WorldContextObject, InFoliageType) end

---@param WorldContextObject UObject
---@param InFoliageType UFoliageType
---@param InTransforms TArray_FTransform_
function AInstancedFoliageActor.AddInstances(WorldContextObject, InFoliageType, InTransforms) end

