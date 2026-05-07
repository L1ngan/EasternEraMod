---The dataflow editor mode is the mode used in the cloth asset editor. It holds most of the inter-tool state.
---We put things in a mode instead of directly into the asset editor in case we want to someday use the mode
---in multiple asset editors.
---@class UDataflowEditorMode : UBaseCharacterFXEditorMode
---@field private ActiveToolsContext UEditorInteractiveToolsContext
local UDataflowEditorMode = {}

