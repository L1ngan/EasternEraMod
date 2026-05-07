---Returns the metadata tags on an item
---@class FRigUnit_GetMetadataTags : FRigUnit
---@field public Item FRigElementKey @The item to check the metadata for
---@field public Tags TArray<string> @The name of the tag to check
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_GetMetadataTags = {}
