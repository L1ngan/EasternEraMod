---@class FGameplayDebuggerDataPackHeader
---@field public DataVersion integer @version, increased every time new Data is requested
---@field public SyncCounter integer @debug actor sync counter
---@field public DataSize integer @size of Data array
---@field public DataOffset integer @offset to currently replicated portion of data
---@field public bIsCompressed boolean @is data compressed?
local FGameplayDebuggerDataPackHeader = {}
