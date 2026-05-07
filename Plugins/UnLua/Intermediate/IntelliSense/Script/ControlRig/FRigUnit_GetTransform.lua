---GetTransform is used to retrieve a single transform from a hierarchy.
---@class FRigUnit_GetTransform : FRigUnit
---@field public Item FRigElementKey @The item to retrieve the transform for
---@field public Space ERigVMTransformSpace @Defines if the transform should be retrieved in local or global space
---@field public bInitial boolean @Defines if the transform should be retrieved as current (false) or initial (true). Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.
---@field public Transform FTransform @The current transform of the given item - or identity in case it wasn't found.
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_GetTransform = {}
