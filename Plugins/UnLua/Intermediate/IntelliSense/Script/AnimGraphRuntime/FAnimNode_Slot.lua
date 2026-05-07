---An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from
---game code can cause an animation to blend in and be played on the slot temporarily, overriding the
---Source input.
---@class FAnimNode_Slot : FAnimNode_Base
---@field public Source FPoseLink @The source input, passed thru to the output unless a montage or slot animation is currently playing
---@field public SlotName string @The name of this slot, exposed to gameplay code, etc...
---@field public bAlwaysUpdateSourcePose boolean @Whether we should continue to update the source pose regardless of whether it would be used.
local FAnimNode_Slot = {}
