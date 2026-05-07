---@class FAnimationGroupReference
---@field public Method EAnimSyncMethod @How this animation will synchronize with other animations.
---@field public GroupName string @The group name that we synchronize with (NAME_None if it is not part of any group).
---@field public GroupRole integer @The role this animation can assume within the group (ignored if GroupName is not set)
local FAnimationGroupReference = {}
