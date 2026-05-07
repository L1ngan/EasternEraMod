---@class FAnimNode_Sync : FAnimNode_Base
---@field private Source FPoseLink
---@field private GroupName string @The group name that we synchronize with (NAME_None if it is not part of any group).
---@field private GroupRole integer @The role this animation can assume within the group (ignored if GroupName is not set)
local FAnimNode_Sync = {}
