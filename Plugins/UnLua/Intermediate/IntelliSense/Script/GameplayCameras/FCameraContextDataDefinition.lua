---Definition for one entry in a camera rig's context data registry.
---@class FCameraContextDataDefinition
---@field public DataID FCameraContextDataID @The ID of data.
---@field public DataType ECameraContextDataType @The type of the data.
---@field public DataContainerType ECameraContextDataContainerType @The type of container for the data.
---@field public DataTypeObject UObject @An extra type object for the data.
---@field public bAutoReset boolean @Whether the data should auto-reset to an "unset" state after every evaluation.
---@field public DataName string @The name of the data, for debugging purposes.
local FCameraContextDataDefinition = {}
