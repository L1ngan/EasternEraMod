---The input node that holds the output from the neural network to the post process material
---@class UMaterialExpressionNeuralNetworkOutput : UMaterialExpression
---@field public Coordinates FExpressionInput @Coordinate to store the values:                  Texture index (float4): Batch[ignored], StartChannel[int,0], ViewportUV in 0..1 range                  Buffer  index (float4): Batch[int,0], StartChannel[int,0], WidthHeight[ViewportUV] in 0..1 range
---@field public NeuralIndexType integer @Indexing type: read from the texture or buffer.                Texture index is valid only when the first 2 dimension of the input and output dimension matches.
local UMaterialExpressionNeuralNetworkOutput = {}

