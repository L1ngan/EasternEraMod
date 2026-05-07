---Returns true if a given item in the hierarchy has a specific set of metadata
---@class FRigUnit_HasMetadata : FRigUnit
---@field public Item FRigElementKey @The item to check the metadata for
---@field public Name string @The name of the metadata to check
---@field public Type ERigMetadataType @The type of metadata to check for
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Found boolean @True if the item has the metadata
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_HasMetadata = {}
