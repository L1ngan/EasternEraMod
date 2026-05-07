---Returns true if a given item in the hierarchy has all of the provided tags
---@class FRigUnit_HasMetadataTagArray : FRigUnit
---@field public Item FRigElementKey @The item to check the metadata for
---@field public Tags TArray<string> @The name of the tag to check
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Found boolean @True if the item has the metadata
---@field public CachedIndex FCachedRigElement @Used to cache the internally used index
local FRigUnit_HasMetadataTagArray = {}
