---An integral curve, which holds the key time and the key value
---@class FIntegralCurve : FIndexedCurve
---@field private Keys TArray<FIntegralKey> @The keys, ordered by time
---@field private DefaultValue integer @Default value
---@field private bUseDefaultValueBeforeFirstKey boolean
local FIntegralCurve = {}
