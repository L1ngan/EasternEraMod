---@class FAbcGeometryCacheSettings
---@field public bFlattenTracks boolean @Whether or not to merge all vertex animation into one track
---@field public bStoreImportedVertexNumbers boolean @Store the imported vertex numbers. This lets you know the vertex numbers inside the DCC. The values of each vertex number will range from 0 to 7 for a cube. Even if the number of positions might be 24.
---@field public bApplyConstantTopologyOptimizations boolean @Force the preprocessor to only do optimization once instead of when the preprocessor decides. This may lead to some problems with certain meshes but makes sure motion           blur always works if the topology is constant.
---@field public MotionVectors EAbcGeometryCacheMotionVectorsImport
---@field public bOptimizeIndexBuffers boolean @Optimizes index buffers for each unique frame, to allow better cache coherency on the GPU. Very costly and time-consuming process, recommended to OFF.
---@field public CompressedPositionPrecision number @Precision used for compressing vertex positions (lower = better result but less compression, higher = more lossy compression but smaller size)
---@field public CompressedTextureCoordinatesNumberOfBits integer @Bit-precision used for compressing texture coordinates (hight = better result but less compression, lower = more lossy compression but smaller size)
local FAbcGeometryCacheSettings = {}
