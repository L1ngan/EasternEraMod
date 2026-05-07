---@class UMaterialExpressionNeuralNetworkInput : UMaterialExpressionCustomOutput
---@field public Coordinates FExpressionInput @Coordinate to read values:                  Texture index (float4): Batch[ignored], StartChannel[int,0], ViewportUV in 0..1 range                  Buffer  index (float4): Batch[int,0], StartChannel[int,0], WidthHeight[ViewportUV] in 0..1 range
---@field public Input0 FExpressionInput @First input node for neural post processing in post process material
---@field public Mask FExpressionInput @Input is ignored if Mask is zero.               TODO: Used to optimize performance
---@field public NeuralIndexType integer @Indexing type: write to the texture or buffer
local UMaterialExpressionNeuralNetworkInput = {}

