---Uses the open source Animation Compression Library with default settings suitable for general purpose animation curves.
---@class UAnimCurveCompressionCodec_ACL : UAnimCurveCompressionCodec
---@field public CurvePrecision number @The curve precision to target when compressing the animation curves.
---@field public MorphTargetPositionPrecision number @The mesh deformation precision to target when compressing morph target animation curves.
---@field public MorphTargetSource USkeletalMesh @The skeletal mesh used to estimate the morph target deformation during compression.
local UAnimCurveCompressionCodec_ACL = {}

