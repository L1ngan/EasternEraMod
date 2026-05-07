---@class UCurvedStairBuilder : UEditorBrushBuilder
---@field public InnerRadius integer @The radius of the inner curve of the stair
---@field public StepHeight integer @The height of each step
---@field public StepWidth integer @The width of each step
---@field public AngleOfCurve integer @The angle of the total arc described by this stair
---@field public NumSteps integer @The number of steps
---@field public AddToFirstStep integer @The distance below the first step
---@field public GroupName string
---@field public CounterClockwise boolean @Whether the stair curves clockwise or counter-clockwise
local UCurvedStairBuilder = {}

