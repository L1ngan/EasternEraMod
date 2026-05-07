---@class UOptimusNode_DataInterface : UOptimusNode
---@field protected DataInterfaceClass TSubclassOf<UObject> @The class of the data interface that this node represents. We call the CDO to interrogate display names and pin definitions. This may change in the future once data interfaces get tied closer to the objects they proxy.
---@field protected DataInterfaceData UOptimusComputeDataInterface @Editable copy of the DataInterface for storing properties that will customize behavior on on the data interface.
local UOptimusNode_DataInterface = {}

