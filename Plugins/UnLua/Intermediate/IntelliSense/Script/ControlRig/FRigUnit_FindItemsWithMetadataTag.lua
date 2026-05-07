---Returns all items with a specific tag
---@class FRigUnit_FindItemsWithMetadataTag : FRigUnit
---@field public Tag string @The name of the tag to find
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Items TArray<FRigElementKey> @The items containing the metadata
local FRigUnit_FindItemsWithMetadataTag = {}
