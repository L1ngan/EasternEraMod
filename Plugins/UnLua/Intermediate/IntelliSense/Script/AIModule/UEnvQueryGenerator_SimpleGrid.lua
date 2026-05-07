---Simple grid, generates points in 2D square around context
---@class UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
---@field public GridSize FAIDataProviderFloatValue @half of square's extent, like a radius
---@field public SpaceBetween FAIDataProviderFloatValue @generation density
---@field public GenerateAround TSubclassOf<UEnvQueryContext> @context
local UEnvQueryGenerator_SimpleGrid = {}

