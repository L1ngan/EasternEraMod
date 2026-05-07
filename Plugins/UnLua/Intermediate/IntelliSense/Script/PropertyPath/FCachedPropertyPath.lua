---Base class for cached property paths
---@class FCachedPropertyPath
---@field private Segments TArray<FPropertyPathSegment> @Path segments for this path
---@field private CachedFunction UFunction @Cached function for function-terminated paths
local FCachedPropertyPath = {}
