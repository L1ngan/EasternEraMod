---Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools
---@class UFractureToolSelection : UFractureToolCutterBase
---@field protected SelectionBehaviorSet UInputBehaviorSet
---@field protected SelectionBehaviorSource ULocalInputBehaviorSource
---@field protected RectangleMarqueeManager URectangleMarqueeManager
---@field protected UsedToolsContext UInteractiveToolsContext @the tools context responsible for the selection input router
---@field private SelectionSettings UFractureSelectionSettings
local UFractureToolSelection = {}

