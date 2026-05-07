---A reference object for an Optimus data type to use in UObjects and other UStruct-like things
---@class FOptimusDataTypeRef
---@field public TypeName string
---@field public TypeObject TSoftObjectPtr<UObject> @A soft pointer to the type object helps enforce asset dependency
local FOptimusDataTypeRef = {}
