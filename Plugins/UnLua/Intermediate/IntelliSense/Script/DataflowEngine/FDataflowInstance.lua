---This structure is to be embedded in any asset that need generation from a dataflow
---@class FDataflowInstance
---@field private DataflowAsset UDataflow @Dataflow asset to use
---@field private DataflowTerminal string @name of the terminal node to use when generating the asset
---@field private VariableOverrides FDataflowVariableOverrides @Variables to override
---@field private Owner UObject @Owning Object
local FDataflowInstance = {}
