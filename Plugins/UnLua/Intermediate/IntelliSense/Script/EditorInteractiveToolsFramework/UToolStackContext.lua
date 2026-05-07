---Context needed to support tool stacks, add this to your ContextObjectStore if you want to use tool stacks
---@class UToolStackContext : UObject
---@field public EdMode TWeakObjectPtr<UEdMode> @EdMode owning the tools referenced by this stack
---@field protected ToolStacks TMap<string, FInteractiveToolStack> @Current set of named ToolStacks
local UToolStackContext = {}

