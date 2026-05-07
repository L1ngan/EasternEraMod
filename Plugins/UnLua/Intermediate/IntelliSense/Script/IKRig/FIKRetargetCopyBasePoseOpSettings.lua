---@class FIKRetargetCopyBasePoseOpSettings : FIKRetargetOpSettingsBase
---@field public bCopyBasePose boolean @When true, will copy all the source bone transforms with matching names to use as a base pose. This can be useful for partial retargeting. NOTE: no retargeting is applied to the bone transforms, they are assumed to be fully compatible between source/target skeletons.
---@field public CopyBasePoseRoot string @Filters the bones to copy when using "Copy Base Pose". If specified, will only copy all children of the specified bone (inclusive).
local FIKRetargetCopyBasePoseOpSettings = {}
