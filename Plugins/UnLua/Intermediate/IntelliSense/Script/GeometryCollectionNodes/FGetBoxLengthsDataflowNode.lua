---Create an array of lengths of bounding boxes (measured along an axis, diagonal, or the max/min axes) from an array of bounding boxes
---@class FGetBoxLengthsDataflowNode : FDataflowNode
---@field public Boxes TArray<FBox>
---@field public Lengths TArray<number>
---@field public MeasurementMethod EBoxLengthMeasurementMethod
local FGetBoxLengthsDataflowNode = {}
