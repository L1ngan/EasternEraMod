---@class UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
---@field protected AlignedPointsDistance FAIDataProviderFloatValue @Distance between each point of the same angle
---@field protected ConeDegrees FAIDataProviderFloatValue @Maximum degrees of the generated cone
---@field protected AngleStep FAIDataProviderFloatValue @The step of the angle increase. Angle step must be >=1 Smaller values generate less items
---@field protected Range FAIDataProviderFloatValue @Generation distance
---@field protected CenterActor TSubclassOf<UEnvQueryContext> @The actor (or actors) that will generate a cone in their facing direction
---@field protected bIncludeContextLocation boolean @Whether to include CenterActors' locations when generating items.     Note that this option skips the MinAngledPointsDistance parameter.
local UEnvQueryGenerator_Cone = {}

