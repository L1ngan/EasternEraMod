---Helper struct that stores a connection between two sockets.
---@class FNiagaraConvertConnection
---@field public SourcePinId FGuid
---@field public SourcePath TArray<string>
---@field public DestinationPinId FGuid
---@field public DestinationPath TArray<string>
---@field public SourcePropertyId FGuid @Optional Guids for storing the property's Guid within a struct to help with determining if a rename has occurred.
---@field public DestinationPropertyId FGuid
local FNiagaraConvertConnection = {}
