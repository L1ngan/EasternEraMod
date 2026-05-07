---@class UFractureModeCustomizationSettings : UDeveloperSettings
---@field public ToolSectionOrder TArray<string> @Add the names of Fracture Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below.
---@field public ToolFavorites TArray<string> @Tool Names listed in the array below will appear in a Favorites section at the top of the Fracture Mode Tool Palette
---@field public SectionColors TArray<FFractureModeCustomSectionColor> @Custom Section Header Colors for listed Sections in the Fracture Mode Tool Palette
---@field public ToolColors TArray<FFractureModeCustomToolColor> @Custom Tool Colors for listed Tools in the Fracture Mode Tool Palette. Format: SectionName        (Specifies a default color for all tools in the section.) SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)
local UFractureModeCustomizationSettings = {}

