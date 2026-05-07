---@class UCircleSplineGenerator : USplineGeneratorBase
---@field public NumberOfPoints integer @Number of points making up shape
---@field public Radius number @Radius of circle
---@field public bReverseDir boolean @If enabled, will reverse the direction of the circle
---@field public bKeepFirstKeyTangent boolean @If enabled, will start the shape tangent to the current path
---@field public bBranchRight boolean @If enabled, will switch the circle's center to the right of the curve
local UCircleSplineGenerator = {}

