---Statistics page for lighting.
---@class ULightingBuildInfo : UObject
---@field public Object TWeakObjectPtr<UObject> @The actor and/or object that is related to this info.
---@field public LightingTime number @The lighting time this object took.
---@field public UnmappedTexelsPercentage number @The percentage of unmapped texels for this object.
---@field public UnmappedTexelsMemory number @The memory consumed by unmapped texels for this object, in KB
---@field public TotalTexelMemory number @The memory consumed by all texels for this object, in KB
---@field public LevelName string @The name of the level this object resides in
local ULightingBuildInfo = {}

