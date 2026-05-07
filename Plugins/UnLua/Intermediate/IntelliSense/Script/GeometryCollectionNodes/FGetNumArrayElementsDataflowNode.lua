---Returns the number of elements in an array
---DEPRECATED 5.6 - use the generic GetArraySize node instead
---@class FGetNumArrayElementsDataflowNode : FDataflowNode
---@field public FloatArray TArray<number> @Float array input
---@field public IntArray TArray<integer> @Int32 array input
---@field public Points TArray<FVector> @FVector array input
---@field public Vector3fArray TArray<FVector3f> @FVector3f array input
---@field public NumElements integer @Number of elements in the array
local FGetNumArrayElementsDataflowNode = {}
