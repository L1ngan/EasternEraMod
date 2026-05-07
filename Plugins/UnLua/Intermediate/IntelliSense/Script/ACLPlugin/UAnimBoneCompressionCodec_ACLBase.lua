---The base codec implementation for ACL support.
---@class UAnimBoneCompressionCodec_ACLBase : UAnimBoneCompressionCodec
---@field public CompressionLevel integer @The compression level to use. Higher levels will be slower to compress but yield a lower memory footprint.
---@field public PhantomTrackMode ACLPhantomTrackMode @How to treat phantom tracks. Phantom tracks are not mapped to a skeleton bone.
---@field public DefaultVirtualVertexDistance number @The default virtual vertex distance for normal bones.
---@field public SafeVirtualVertexDistance number @The virtual vertex distance for bones that requires extra accuracy.
---@field public ErrorThreshold number @The error threshold to use when optimizing and compressing the animation sequence.
local UAnimBoneCompressionCodec_ACLBase = {}

