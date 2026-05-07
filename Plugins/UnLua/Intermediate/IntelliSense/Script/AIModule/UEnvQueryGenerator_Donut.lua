---@class UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
---@field public InnerRadius FAIDataProviderFloatValue @min distance between point and context
---@field public OuterRadius FAIDataProviderFloatValue @max distance between point and context
---@field public NumberOfRings FAIDataProviderIntValue @number of rings to generate
---@field public PointsPerRing FAIDataProviderIntValue @number of items to generate for each ring
---@field public ArcDirection FEnvDirection @If you generate items on a piece of circle you define direction of Arc cut here
---@field public ArcAngle FAIDataProviderFloatValue @If you generate items on a piece of circle you define angle of Arc cut here
---@field public bUseSpiralPattern boolean @If true, the rings of the wheel will be rotated in a spiral pattern.  If false, they will all be at a zero rotation, looking more like the spokes on a wheel.
---@field public Center TSubclassOf<UEnvQueryContext> @context
---@field public bDefineArc boolean
local UEnvQueryGenerator_Donut = {}

