---Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Weight Maps)
---@class UWeightMapSetProperties : UInteractiveToolPropertySet
---@field public WeightMap string @Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity.
---@field public WeightMapsList TArray<string> @internal list used to implement above
---@field public bInvertWeightMap boolean
local UWeightMapSetProperties = {}

---this function is called provide set of available weight maps
---@return TArray_string_
function UWeightMapSetProperties:GetWeightMapsFunc() end

