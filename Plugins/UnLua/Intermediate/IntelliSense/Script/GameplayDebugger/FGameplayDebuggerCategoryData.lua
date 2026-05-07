---@class FGameplayDebuggerCategoryData
---@field public CategoryName string
---@field public TextLines TArray<string>
---@field public Shapes TArray<FGameplayDebuggerShape>
---@field public DataPacks TArray<FGameplayDebuggerDataPackHeader> @Either replicated using the NetDeltaSerialize or alternatively as regular RPC`s
---@field public bIsEnabled boolean
local FGameplayDebuggerCategoryData = {}
