---Struct describing a Color, its display name and a unique identifier to get an instance via UStateTreeEditorData::FindColor
---@class FStateTreeEditorColor
---@field public ColorRef FStateTreeEditorColorRef @ID unique per State Tree Color Entry. Marked as struct export transient so that copy-pasting this entry does not result in the same repeating ID
---@field public DisplayName string
---@field public Color FLinearColor
local FStateTreeEditorColor = {}
