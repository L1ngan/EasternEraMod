---This is the context for GetContextMenuActions and GetNodeContextMenuActions calls.
---@class UGraphNodeContextMenuContext : UObject
---@field public Blueprint UBlueprint @The blueprint associated with this context; may be NULL for non-Kismet related graphs.
---@field public Graph UEdGraph @The graph associated with this context.
---@field public Node UEdGraphNode @The node associated with this context.
---@field public bIsDebugging boolean @Whether the graph editor is currently part of a debugging session (any non-debugging commands should be disabled).
local UGraphNodeContextMenuContext = {}

