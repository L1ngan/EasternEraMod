---@class RenderToTextureFunctionLibrary_C : UBlueprintFunctionLibrary
local RenderToTextureFunctionLibrary_C = {}

---@param Size FVector2D
---@param Position FVector2D
---@param Scale number
---@param __WorldContext UObject
---@param Screen_Position FVector2D @[out] 
---@param Screen_Size FVector2D @[out] 
RenderToTextureFunctionLibrary_C["Set Canvas Material Scale and Position"] = function(Size, Position, Scale, __WorldContext, Screen_Position, Screen_Size) end

---@param Type integer
---@param Variable_Name string @[out] 
---@param int TArray_integer_ @[out] 
---@param int2 TArray_FVector2D_ @[out] 
---@param int3 TArray_FVector_ @[out] 
---@param int4 TArray_FLinearColor_ @[out] 
---@param __WorldContext UObject
---@param String string @[out] 
RenderToTextureFunctionLibrary_C["Array to HLSL Int Array"] = function(Type, Variable_Name, int, int2, int3, int4, __WorldContext, String) end

