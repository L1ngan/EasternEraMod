---@class UMaterialExpressionMaterialAttributeLayers : UMaterialExpression
---@field public Input FMaterialAttributesInput
---@field public DefaultLayers FMaterialLayersFunctions
---@field public LayerCallers TArray<UMaterialExpressionMaterialFunctionCall>
---@field public NumActiveLayerCallers integer
---@field public BlendCallers TArray<UMaterialExpressionMaterialFunctionCall>
---@field public NumActiveBlendCallers integer
---@field public OutputCaller UMaterialExpressionMaterialFunctionCall
---@field public bIsLayerGraphBuilt boolean
local UMaterialExpressionMaterialAttributeLayers = {}

