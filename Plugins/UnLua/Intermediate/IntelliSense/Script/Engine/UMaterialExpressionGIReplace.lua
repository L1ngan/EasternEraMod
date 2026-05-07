---@class UMaterialExpressionGIReplace : UMaterialExpression
---@field public Default FExpressionInput @Used for direct lighting computations e.g. real-time shaders
---@field public StaticIndirect FExpressionInput @Used for baked indirect lighting e.g. Lightmass
---@field public DynamicIndirect FExpressionInput @Used for dynamic indirect lighting e.g. Light Propagation Volumes
local UMaterialExpressionGIReplace = {}

