---Class containing definition of a navigation query filter
---@class UNavigationQueryFilter : UObject
---@field public Areas TArray<FNavigationFilterArea> @list of overrides for navigation areas
---@field public IncludeFlags FNavigationFilterFlags @required flags of navigation nodes
---@field public ExcludeFlags FNavigationFilterFlags @forbidden flags of navigation nodes
local UNavigationQueryFilter = {}

