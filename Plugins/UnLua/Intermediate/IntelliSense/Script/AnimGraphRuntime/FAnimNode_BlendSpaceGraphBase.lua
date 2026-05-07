---Allows multiple animations to be blended between based on input parameters
---@class FAnimNode_BlendSpaceGraphBase : FAnimNode_Base
---@field protected X number @The X coordinate to sample in the blendspace
---@field protected Y number @The Y coordinate to sample in the blendspace
---@field protected GroupName string @The group name that we synchronize with (NAME_None if it is not part of any group). Note that this is the name of the group used to sync the output of this node - it will not force syncing of animations contained by it. Animations inside this Blend Space have their own options for syncing.
---@field protected GroupRole integer @The role this Blend Space can assume within the group (ignored if GroupName is not set). Note that this is the role of the output of this node, not of animations contained by it.
---@field protected BlendSpace UBlendSpace @The internal blendspace asset to play
---@field protected SamplePoseLinks TArray<FPoseLink> @Pose links for each sample in the blendspace
local FAnimNode_BlendSpaceGraphBase = {}
