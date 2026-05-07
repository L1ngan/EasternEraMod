---@class UMaterialExpressionDataDrivenShaderPlatformInfoSwitch : UMaterialExpression
---@field public InputTrue FExpressionInput
---@field public InputFalse FExpressionInput
---@field public DDSPIPropertyNames TArray<FDataDrivenShaderPlatformInfoInput>
---@field public bContainsInvalidProperty boolean
local UMaterialExpressionDataDrivenShaderPlatformInfoSwitch = {}

---@return TArray_string_
function UMaterialExpressionDataDrivenShaderPlatformInfoSwitch:GetNameOptions() end

