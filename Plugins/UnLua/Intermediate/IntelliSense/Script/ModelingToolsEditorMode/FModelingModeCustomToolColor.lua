---Defines a color to be used for a particular Tool Palette Tool
---@class FModelingModeCustomToolColor
---@field public ToolName string @Name of Section or Tool in Modeling Mode Tool Palette Format: SectionName        (Specifies a default color for all tools in the section.) SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)
---@field public Color FLinearColor @Custom Tool Color
local FModelingModeCustomToolColor = {}
