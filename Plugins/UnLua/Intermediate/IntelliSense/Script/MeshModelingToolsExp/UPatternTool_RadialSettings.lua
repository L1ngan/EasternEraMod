---Settings for Radial Patterns in the Pattern Tool
---@class UPatternTool_RadialSettings : UInteractiveToolPropertySet
---@field public SpacingMode EPatternToolAxisSpacingMode @Spacing Technique used to distribute Pattern Elements around the Circle/Arc
---@field public Count integer @Number of  Pattern Elements to place
---@field public StepSize number @Fixed Increment (in Degrees) used to position Pattern Elements around the Circle/Arc
---@field public Radius number @Radius of the Circle/Arc
---@field public StartAngle number @Start angle of the Circle/Arc
---@field public EndAngle number @End angle of the Circle/Arc
---@field public AngleShift number @Fixed offset added to Start/End Angles
---@field public bOriented boolean @If true, Pattern elements are rotated to align with the Circle tangent
local UPatternTool_RadialSettings = {}

