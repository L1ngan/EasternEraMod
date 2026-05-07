---Struct used to send the DataPackPackets as RPC`s instead of using the CustomDeltaNetSerializer.
---@class FGameplayDebuggerDataPackRPCParams
---@field public CategoryName string
---@field public DataPackIdx integer
---@field public Header FGameplayDebuggerDataPackHeader
---@field public Data TArray<integer>
local FGameplayDebuggerDataPackRPCParams = {}
