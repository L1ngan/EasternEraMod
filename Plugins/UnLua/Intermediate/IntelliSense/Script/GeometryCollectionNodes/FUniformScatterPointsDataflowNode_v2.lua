---@class FUniformScatterPointsDataflowNode_v2 : FDataflowNode
---@field public MinNumberOfPoints integer @Minimum for the random range
---@field public MaxNumberOfPoints integer @Maximum for the random range
---@field public RandomSeed integer @Seed for random
---@field public BoundingBox FBox @BoundingBox to generate points inside of
---@field public Points TArray<FVector> @Generated points
local FUniformScatterPointsDataflowNode_v2 = {}
