---@class UMaterialExpressionExternalCodeBase : UMaterialExpression
---@field public ExternalCodeIdentifiers TArray<string> @List of identifiers of the external HLSL code this expression inserts into the material shader. If the number of elements is 1, the single element will always be used. Otherwise, OutputIndex selects the respective identifier.
local UMaterialExpressionExternalCodeBase = {}

