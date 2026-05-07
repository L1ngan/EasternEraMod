---Standard properties for a Brush-type Tool
---@class UBrushBaseProperties : UInteractiveToolPropertySet
---@field public BrushSize number @Relative size of brush
---@field public bSpecifyRadius boolean @If true, ignore relative Brush Size and use explicit world Radius
---@field public BrushRadius number @Radius of brush
---@field public BrushStrength number @Strength of the brush (0.0 - 1.0)
---@field public BrushFalloffAmount number @Amount of falloff to apply (0.0 - 1.0)
---@field public bShowStrength boolean @If false, then BrushStrength will not be shown in DetailsView panels (otherwise no effect)
---@field public bShowFalloff boolean @If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect)
local UBrushBaseProperties = {}

