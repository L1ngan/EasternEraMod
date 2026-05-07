---Describes access to referenced property.
---@class FStateTreePropertyAccess
---@field public SourceIndirection FPropertyBindingPropertyIndirection @Source property access.
---@field public SourceStructType UStruct @Type of the source data, used for validation.
---@field public SourceDataHandle FStateTreeDataHandle @Describes how to get the source data pointer.
local FStateTreePropertyAccess = {}
