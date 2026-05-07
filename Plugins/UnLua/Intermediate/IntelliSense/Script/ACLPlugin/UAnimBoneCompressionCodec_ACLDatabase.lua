---Uses the open source Animation Compression Library with default settings and database support.
---The referenced database can be used to strip the least important keyframes on a per platform basis
---or they can be streamed in/out on demand through Blueprint or C++.
---@class UAnimBoneCompressionCodec_ACLDatabase : UAnimBoneCompressionCodec_ACLBase
---@field public DatabaseAsset UAnimationCompressionLibraryDatabase @The database asset that will hold the compressed animation data.
---@field public OptimizationTargets TArray<USkeletalMesh> @The skeletal meshes used to estimate the skinning deformation during compression.
local UAnimBoneCompressionCodec_ACLDatabase = {}

