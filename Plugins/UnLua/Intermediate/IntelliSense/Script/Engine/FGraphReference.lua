---@class FGraphReference
---@field protected MacroGraph UEdGraph @Reference to the actual graph
---@field protected GraphBlueprint UBlueprint @The blueprint the graph is contained within
---@field protected GraphGuid FGuid @The graph GUID so we can refind it if it has been renamed
local FGraphReference = {}
