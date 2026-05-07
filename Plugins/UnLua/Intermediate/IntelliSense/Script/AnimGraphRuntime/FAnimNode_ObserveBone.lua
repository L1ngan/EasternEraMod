---Debugging node that displays the current value of a bone in a specific space.
---@class FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
---@field public BoneToObserve FBoneReference @Name of bone to observe.
---@field public DisplaySpace integer @Reference frame to display the bone transform in.
---@field public bRelativeToRefPose boolean @Show the difference from the reference pose?
---@field public Translation FVector @Translation of the bone being observed.
---@field public Rotation FRotator @Rotation of the bone being observed.
---@field public Scale FVector @Scale of the bone being observed.
local FAnimNode_ObserveBone = {}
