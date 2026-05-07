---Settings for Linear Patterns in the Pattern Tool
---@class UPatternTool_LinearSettings : UInteractiveToolPropertySet
---@field public SpacingMode EPatternToolAxisSpacingMode @Spacing Technique used to distribute Pattern Elements
---@field public Count integer @Number of Pattern Elements to place
---@field public StepSize number @Fixed Increment used to place Pattern Elements
---@field public Extent number @Length of Pattern along the Axis
---@field public bCentered boolean @If true, Pattern is centered at the Origin, otherwise Pattern starts at the Origin
local UPatternTool_LinearSettings = {}

