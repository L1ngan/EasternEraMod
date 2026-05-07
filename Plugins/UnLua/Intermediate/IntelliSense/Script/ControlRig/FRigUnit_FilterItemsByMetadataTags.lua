---Filters an item array by a list of tags
---@class FRigUnit_FilterItemsByMetadataTags : FRigUnit
---@field public Items TArray<FRigElementKey> @The items to filter
---@field public Tags TArray<string> @The tags to find
---@field public NameSpace ERigMetaDataNameSpace @Defines in which namespace the metadata will be looked up
---@field public Inclusive boolean @If set to true only items with ALL of tags will be returned, if set to false items with ANY of the tags will be removed
---@field public Result TArray<FRigElementKey> @The results of the filter
---@field public CachedIndices TArray<FCachedRigElement> @Used to cache the internally used indices
local FRigUnit_FilterItemsByMetadataTags = {}
