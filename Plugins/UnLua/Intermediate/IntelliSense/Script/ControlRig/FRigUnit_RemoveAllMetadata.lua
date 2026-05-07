---Removes an existing metadata filed from an item
---@class FRigUnit_RemoveAllMetadata : FRigUnitMutable
---@field public Item FRigElementKey @The item to remove the metadata from
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Removed boolean @True if any metadata has been removed
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_RemoveAllMetadata = {}
