---Describes the result of the attempted snap operation.
---Note that this differs to FSceneSnapQueryResult in that it only
---indicates the success or failure of the snap, not the resulting data.
---@class ESceneSnapQueryTargetResult
---@field public NotSnapped integer
---@field public Snapped integer
---@field public Disabled integer
---@field public Unsupported integer
---@field public ESceneSnapQueryTargetResult_MAX integer
local ESceneSnapQueryTargetResult = {}
