---Uses the open source Animation Compression Library with default settings suitable for general purpose animations.
---@class UAnimBoneCompressionCodec_ACL : UAnimBoneCompressionCodec_ACLBase
---@field public OptimizationTargets TArray<USkeletalMesh> @The skeletal meshes used to estimate the skinning deformation during compression.
---@field public KeyframeStrippingProportion FPerPlatformFloat @The minimum proportion of keyframes that should be stripped.
---@field public KeyframeStrippingThreshold FPerPlatformFloat @The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped.
local UAnimBoneCompressionCodec_ACL = {}

