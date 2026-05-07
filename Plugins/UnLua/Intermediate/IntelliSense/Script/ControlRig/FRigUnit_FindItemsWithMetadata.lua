---Returns all items containing a specific set of metadata
---@class FRigUnit_FindItemsWithMetadata : FRigUnit
---@field public Name string @The name of the metadata to find
---@field public Type ERigMetadataType @The type of metadata to find
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Items TArray<FRigElementKey> @The items containing the metadata
local FRigUnit_FindItemsWithMetadata = {}
