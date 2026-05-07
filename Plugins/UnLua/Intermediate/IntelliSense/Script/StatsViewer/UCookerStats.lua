---Statistics for a cooked asset.
---Note: We assume that asset files are not larger than 2GB, because the StatsViewer is still lacking int64 support.
---@class UCookerStats : UObject
---@field public Assets TArray<TWeakObjectPtr<UObject>> @The assets contained in the file.
---@field public SizeBefore number @The size of the assets before cooking.
---@field public SizeAfter number @The size of the assets after cooking.
---@field public Path string @Asset path without the name "package.[group.]"
local UCookerStats = {}

