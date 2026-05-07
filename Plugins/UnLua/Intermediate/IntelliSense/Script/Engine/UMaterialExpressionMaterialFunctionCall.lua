---@class UMaterialExpressionMaterialFunctionCall : UMaterialExpression
---@field public MaterialFunction UMaterialFunctionInterface @The function to call.
---@field public FunctionInputs TArray<FFunctionExpressionInput> @Array of all the function inputs that this function exposes.
---@field public FunctionOutputs TArray<FFunctionExpressionOutput> @Array of all the function outputs that this function exposes.
---@field public FunctionParameterInfo FMaterialParameterInfo @Used by material parameters to split references to separate instances.
local UMaterialExpressionMaterialFunctionCall = {}

---@param NewMaterialFunction UMaterialFunctionInterface
---@return boolean
function UMaterialExpressionMaterialFunctionCall:SetMaterialFunction(NewMaterialFunction) end

