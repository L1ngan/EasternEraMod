---@class ACullDistanceVolume : AVolume
---@field public CullDistances TArray<FCullDistanceSizePair> @Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best fit in this array to determine which cull distance to use.
---@field public bEnabled boolean @Whether the volume is currently enabled or not.
local ACullDistanceVolume = {}

