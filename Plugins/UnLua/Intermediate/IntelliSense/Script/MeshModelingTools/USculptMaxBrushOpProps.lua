---@class USculptMaxBrushOpProps : UMeshSculptBrushOpProps
---@field public Strength number @Strength of the Brush
---@field public Falloff number @Amount of falloff to apply
---@field public MaxHeight number @Maximum height as fraction of brush size
---@field public bUseFixedHeight boolean @If true, maximum height is defined using the FixedHeight constant instead of brush-relative size
---@field public FixedHeight number @Maximum height in world-space dimension
local USculptMaxBrushOpProps = {}

