---@class UOptimusResourceDescription : UObject
---@field public ResourceName string
---@field public DataType FOptimusDataTypeRef @The the data type of each element of the resource
---@field public ComponentBinding TWeakObjectPtr<UOptimusComponentSourceBinding> @The component binding that this resource description is bound to
---@field public DataDomain FOptimusDataDomain @The data domain for this resource.
---@field public DataInterface UOptimusPersistentBufferDataInterface
local UOptimusResourceDescription = {}

