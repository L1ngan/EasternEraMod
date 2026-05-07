---Adds functionality to record the material UV scales for use by the automatic texture streaming system.
---@class UMaterialExpressionRecordTextureStreamingInfo : UMaterialExpression
---@field public TextureObject FExpressionInput @A texture object that will be sampled.
---@field public Coordinates FExpressionInput @The texture coordinates that we expect to use when sampling the texture object.
local UMaterialExpressionRecordTextureStreamingInfo = {}

