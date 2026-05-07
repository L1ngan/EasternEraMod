---GetRelativeTransform is used to retrieve a single transform from a hierarchy in the space of another transform
---@class FRigUnit_GetRelativeTransformForItem : FRigUnit
---@field public Child FRigElementKey @The child item to retrieve the transform for
---@field public bChildInitial boolean @Defines if the child's transform should be retrieved as current (false) or initial (true). Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.
---@field public Parent FRigElementKey @The parent item to use. The child transform will be retrieve in the space of the parent.
---@field public bParentInitial boolean @Defines if the parent's transform should be retrieved as current (false) or initial (true). Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.
---@field public RelativeTransform FTransform @The transform of the given child item relative to the provided parent
---@field public CachedChild FCachedRigElement @Used to cache the child internally
---@field public CachedParent FCachedRigElement @Used to cache the parent internally
local FRigUnit_GetRelativeTransformForItem = {}
