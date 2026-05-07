---A library of property paths used within a specific context (e.g. a class)
---@class FPropertyAccessLibrary
---@field private PathSegments TArray<FPropertyAccessSegment> @All path segments in this library.
---@field private SrcPaths TArray<FPropertyAccessPath> @All source paths
---@field private DestPaths TArray<FPropertyAccessPath> @All destination paths
---@field private CopyBatchArray TArray<FPropertyAccessCopyBatch> @All copy operations
local FPropertyAccessLibrary = {}
