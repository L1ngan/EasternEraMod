---@class UAnimCompress : UAnimBoneCompressionCodec
---@field public bNeedsSkeleton boolean @Compression algorithms requiring a skeleton should set this value to true.
---@field public TranslationCompressionFormat integer @Format for bitwise compression of translation data.
---@field public RotationCompressionFormat integer @Format for bitwise compression of rotation data.
---@field public ScaleCompressionFormat integer @Format for bitwise compression of scale data.
local UAnimCompress = {}

