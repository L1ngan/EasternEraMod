---Library function to record debug draw shapes that will be played back when a CVD recording is loaded
---@class UChaosVDRuntimeBlueprintLibrary : UBlueprintFunctionLibrary
local UChaosVDRuntimeBlueprintLibrary = {}

---@param WorldContext UObject
---@param InStartLocation FVector
---@param InVector FVector
---@param Tag string @[opt] 
---@param Color FLinearColor @[opt] 
function UChaosVDRuntimeBlueprintLibrary.RecordDebugDrawVector(WorldContext, InStartLocation, InVector, Tag, Color) end

---@param WorldContext UObject
---@param InCenter FVector
---@param Radius number
---@param Tag string @[opt] 
---@param Color FLinearColor @[opt] 
function UChaosVDRuntimeBlueprintLibrary.RecordDebugDrawSphere(WorldContext, InCenter, Radius, Tag, Color) end

---@param WorldContext UObject
---@param InStartLocation FVector
---@param InEndLocation FVector
---@param Tag string @[opt] 
---@param Color FLinearColor @[opt] 
function UChaosVDRuntimeBlueprintLibrary.RecordDebugDrawLine(WorldContext, InStartLocation, InEndLocation, Tag, Color) end

---@param WorldContext UObject
---@param InBox FBox
---@param Tag string @[opt] 
---@param Color FLinearColor @[opt] 
function UChaosVDRuntimeBlueprintLibrary.RecordDebugDrawBox(WorldContext, InBox, Tag, Color) end

