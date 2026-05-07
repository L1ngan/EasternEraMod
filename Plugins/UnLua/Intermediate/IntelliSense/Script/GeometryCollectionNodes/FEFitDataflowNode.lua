---Fits a value from one range to another
---Takes the value num from the range (oldmin, oldmax) and shifts it to the corresponding value in the new range (newmin, newmax). Unlike fit, this function does not clamp values in the given range.
---@class FEFitDataflowNode : FDataflowNode
---@field public Float number
---@field public OldMin number
---@field public OldMax number
---@field public NewMin number
---@field public NewMax number
---@field public ReturnValue number
local FEFitDataflowNode = {}
