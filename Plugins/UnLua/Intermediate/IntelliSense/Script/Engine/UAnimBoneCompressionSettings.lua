---* This object is used to wrap a bone compression codec. It allows a clean integration in the editor by avoiding the need
---* to create asset types and factory wrappers for every codec.
---@class UAnimBoneCompressionSettings : UObject
---@field public Codecs TArray<UAnimBoneCompressionCodec> @A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty.
---@field public ErrorThreshold number @When compressing, the best codec below this error threshold will be used.
---@field public bForceBelowThreshold boolean @Any codec (even one that increases the size) with a lower error will be used until it falls below the threshold.
local UAnimBoneCompressionSettings = {}

