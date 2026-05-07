---Struct describing a path segment in FPropertyBindingPath.
---@class FPropertyBindingPathSegment
---@field private Name string @Name of the property
---@field private ArrayIndex integer @Array index if the property is dynamic or static array.
---@field private InstanceStruct UStruct @Type of the instanced struct or object reference by the property at the segment. This allows the path to be resolved when it points to a specific instance.
---@field private InstancedStructAccessType EPropertyBindingPropertyAccessType
---@field private PropertyGuid FGuid @Guid of the property for Blueprint classes, User Defined Structs, or Property Bags.
local FPropertyBindingPathSegment = {}
