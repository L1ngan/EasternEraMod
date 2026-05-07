---Common settings used to configure how the GridFilter behaves
---@class UWorldLocationsConfig : UObject
---@field public MinPos FVector @All world positions will be clamped to MinPos and MaxPos.
---@field public MaxPos FVector @All world positions will be clamped to MinPos and MaxPos.
---@field public MaxNetCullDistance number @We will issue a warning if user sets a higher NetCullDistance or NetCullDistanceOverride than the MaxNetCullDistance.
local UWorldLocationsConfig = {}

