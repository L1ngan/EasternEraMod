---A helper struct for copying a Blueprint Function to the clipboard
---@class FBPGraphClipboardData
---@field private GraphName string @Name of the Graph
---@field private GraphType integer @The type of graph
---@field private OriginalBlueprint TWeakObjectPtr<UBlueprint> @The original Blueprint that this function was copied from. Used to determine if nodes need to be created as functions or custom events
---@field private NodesString string @A string containing the exported text for the nodes in this function
local FBPGraphClipboardData = {}
