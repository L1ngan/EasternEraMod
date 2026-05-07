---Adds custom attribute to Collection
---@class FAddCustomCollectionAttributeDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection for the custom attribute
---@field public GroupName EStandardGroupNameEnum @Standard group names
---@field public CustomGroupName string @User specified group name
---@field public AttrName string @Attribute name
---@field public CustomAttributeType ECustomAttributeTypeEnum @Attribute type
---@field public NumElements integer @Number of elements for the attribute
local FAddCustomCollectionAttributeDataflowNode = {}
