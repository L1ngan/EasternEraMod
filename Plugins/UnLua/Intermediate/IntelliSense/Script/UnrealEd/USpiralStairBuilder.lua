---@class USpiralStairBuilder : UEditorBrushBuilder
---@field public InnerRadius integer @The radius of the inner curve of the stair
---@field public StepWidth integer @The width of each step
---@field public StepHeight integer @The height of each step
---@field public StepThickness integer @The thickness of each step
---@field public NumStepsPer360 integer @The number of steps in one whole spiral rotation
---@field public NumSteps integer @The total number of steps
---@field public GroupName string
---@field public SlopedCeiling boolean @Whether the underside of the spiral is sloped or stepped
---@field public SlopedFloor boolean @Whether the surface of the spiral is sloped or stepped
---@field public CounterClockwise boolean @Whether the stair curves clockwise or counter-clockwise
local USpiralStairBuilder = {}

