---Path tracing buffer is only accessable in postprocess material.
---@class UMaterialExpressionPathTracingBufferTexture : UMaterialExpression
---@field public Coordinates FExpressionInput @Ignored if not specified
---@field public PathTracingBufferTextureId integer @Which path tracing buffer texture we want to make a lookup into.
local UMaterialExpressionPathTracingBufferTexture = {}

