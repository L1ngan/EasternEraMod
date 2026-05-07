---Uses the open source Animation Compression Library with custom settings suitable for debugging purposes.
---@class UAnimBoneCompressionCodec_ACLCustom : UAnimBoneCompressionCodec_ACLBase
---@field public RotationFormat integer @The rotation format to use.
---@field public TranslationFormat integer @The translation format to use.
---@field public ScaleFormat integer @The scale format to use.
---@field public OptimizationTargets TArray<USkeletalMesh> @The skeletal meshes used to estimate the skinning deformation during compression.
---@field public KeyframeStrippingProportion FPerPlatformFloat @The minimum proportion of keyframes that should be stripped.
---@field public KeyframeStrippingThreshold FPerPlatformFloat @The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped.
local UAnimBoneCompressionCodec_ACLCustom = {}

