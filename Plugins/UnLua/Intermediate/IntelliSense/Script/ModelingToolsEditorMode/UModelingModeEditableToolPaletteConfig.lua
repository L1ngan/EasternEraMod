---Implementation of IEditableToolPaletteConfigManager specific to ModelingMode, currently needed because we cannot have
---* one at the FModeToolkit level due to EditorConfig depending on UnrealEd which is where the mode toolkit lives
---@class UModelingModeEditableToolPaletteConfig : UEditorConfigBase
---@field public EditableToolPalettes TMap<string, FEditableToolPaletteSettings>
local UModelingModeEditableToolPaletteConfig = {}

