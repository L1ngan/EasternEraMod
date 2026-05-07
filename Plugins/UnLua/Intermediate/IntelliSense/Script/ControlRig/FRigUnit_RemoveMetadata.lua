---Removes an existing metadata filed from an item
---@class FRigUnit_RemoveMetadata : FRigUnitMutable
---@field public Item FRigElementKey @The item to remove the metadata from
---@field public Name string @The name of the metadata to remove
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Removed boolean @True if the metadata has been removed
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_RemoveMetadata = {}
