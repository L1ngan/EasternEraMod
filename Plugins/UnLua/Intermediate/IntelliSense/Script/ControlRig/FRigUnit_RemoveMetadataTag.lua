---Removes a tag from an item
---@class FRigUnit_RemoveMetadataTag : FRigUnitMutable
---@field public Item FRigElementKey @The item to set the metadata for
---@field public Tag string @The name of the tag to set
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Removed boolean @Returns true if the removal was successful
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_RemoveMetadataTag = {}
