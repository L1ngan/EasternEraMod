---Used to expose C++ functions to tests that we don't want to make BP accessible
---in the engine itself.
---@class UFunctionalTestUtilityLibrary : UBlueprintFunctionLibrary
local UFunctionalTestUtilityLibrary = {}

---Helper function to trace and permute many options at once
---@param WorldContextObject UObject
---@param BatchOptions FTraceChannelTestBatchOptions
---@param Start FVector
---@param End FVector
---@param SphereCapsuleRadius number
---@param CapsuleHalfHeight number
---@param BoxHalfSize FVector
---@param Orientation FRotator
---@param TraceChannel integer
---@param ObjectTypes TArray_integer_
---@param ProfileName string
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray_AActor_
---@param bIgnoreSelf boolean
---@param DrawDebugType integer
---@param TraceColor FLinearColor @[opt] 
---@param TraceHitColor FLinearColor @[opt] 
---@param DrawTime number @[opt] 
---@return UTraceQueryTestResults
function UFunctionalTestUtilityLibrary.TraceChannelTestUtil(WorldContextObject, BatchOptions, Start, End, SphereCapsuleRadius, CapsuleHalfHeight, BoxHalfSize, Orientation, TraceChannel, ObjectTypes, ProfileName, bTraceComplex, ActorsToIgnore, bIgnoreSelf, DrawDebugType, TraceColor, TraceHitColor, DrawTime) end

