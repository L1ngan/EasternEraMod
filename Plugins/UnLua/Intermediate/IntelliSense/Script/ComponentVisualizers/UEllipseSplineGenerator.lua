---@class UEllipseSplineGenerator : USplineGeneratorBase
---@field public NumberOfPoints integer
---@field public Length number
---@field public Width number
---@field public bReverseDir boolean @If enabled, will reverse the direction of the arc
---@field public bKeepFirstKeyTangent boolean @If enabled, will start the shape tangent to the current path
---@field public bBranchRight boolean @If enabled, will switch the shape's center to the right of the curve
local UEllipseSplineGenerator = {}

