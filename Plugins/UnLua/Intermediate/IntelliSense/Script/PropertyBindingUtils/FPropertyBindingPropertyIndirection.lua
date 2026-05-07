---Used internally.
---Property indirection is a resolved property path segment, used for accessing properties in structs.
---@class FPropertyBindingPropertyIndirection
---@field public ArrayIndex FPropertyBindingIndex16 @Index in the array the property points at.
---@field public Offset integer @Cached offset of the property
---@field public NextIndex FPropertyBindingIndex16 @Cached offset of the property
---@field public Type EPropertyBindingPropertyAccessType @Type of access/indirection.
---@field public InstanceStruct UStruct @Type of the struct or object instance in case the segment is pointing into an instanced data.
local FPropertyBindingPropertyIndirection = {}
