---Settings for Grid Patterns in the Pattern Tool
---TODO: maybe we can just re-use UPatternTool_LinearSettings for this??
---@class UPatternTool_GridSettings : UInteractiveToolPropertySet
---@field public SpacingX EPatternToolAxisSpacingMode @Spacing Technique used to distribute Pattern Elements along the Main axis
---@field public CountX integer @Number of Pattern Elements to place along the Main axis
---@field public StepSizeX number @Fixed Increment used to place Pattern Elements along the Main axis
---@field public ExtentX number @Length/Extent of Pattern falong the Main Axis
---@field public bCenteredX boolean @If true, Pattern is centered at the Origin along the Main axis, otherwise Pattern starts at the Origin
---@field public SpacingY EPatternToolAxisSpacingMode @Spacing Technique used to distribute Pattern Elements along the Secondary axis
---@field public CountY integer @Number of  Pattern Elements to place along the Secondary axis
---@field public StepSizeY number @Fixed Increment used to place Pattern Elements along the Secondary axis
---@field public ExtentY number @Length/Extent of Pattern falong the Secondary Axis
---@field public bCenteredY boolean @If true, Pattern is centered at the Origin along the Secondary axis, otherwise Pattern starts at the Origin
local UPatternTool_GridSettings = {}

