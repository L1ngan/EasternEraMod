---Used during asset renaming/duplication to specify class-specific package/group targets.
---@class FClassMoveInfo
---@field public ClassName string @The type of asset this MoveInfo applies to.
---@field public PackageName string @The target package info which assets of this type are moved/duplicated.
---@field public GroupName string @The target group info which assets of this type are moved/duplicated.
---@field public bActive boolean @If true, this info is applied when moving/duplicating assets.
local FClassMoveInfo = {}
