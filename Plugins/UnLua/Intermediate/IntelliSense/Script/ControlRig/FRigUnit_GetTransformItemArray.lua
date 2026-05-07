---GetTransformArray is used to retrieve an array of transforms from the hierarchy.
---@class FRigUnit_GetTransformItemArray : FRigUnit
---@field public Items TArray<FRigElementKey> @The items to retrieve the transforms for
---@field public Space ERigVMTransformSpace @Defines if the transforms should be retrieved in local or global space
---@field public bInitial boolean @Defines if the transforms should be retrieved as current (false) or initial (true). Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.
---@field public Transforms TArray<FTransform> @The current transform of the given item - or identity in case it wasn't found.
---@field public CachedIndex TArray<FCachedRigElement> @Used to cache the internally used index
local FRigUnit_GetTransformItemArray = {}
