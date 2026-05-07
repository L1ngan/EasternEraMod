---@class FAttributeCurve : FIndexedCurve
---@field protected Keys TArray<FAttributeKey> @The keys, ordered by time
---@field protected ScriptStructPath FSoftObjectPath @Path to UScriptStruct to be loaded
---@field protected ScriptStruct UScriptStruct @Transient UScriptStruct instance representing the underlying value type for the curve
---@field protected bShouldInterpolate boolean @Whether or not to interpolate between keys of ScripStruct type
local FAttributeCurve = {}
