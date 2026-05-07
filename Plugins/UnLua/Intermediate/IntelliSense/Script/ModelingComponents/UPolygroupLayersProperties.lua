---Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Polygroup Layers)
---@class UPolygroupLayersProperties : UInteractiveToolPropertySet
---@field public ActiveGroupLayer string @Select PolyGroup layer to use.
---@field public GroupLayersList TArray<string> @internal list used to implement above
local UPolygroupLayersProperties = {}

---Provides set of available group layers
---@return TArray_string_
function UPolygroupLayersProperties:GetGroupLayersFunc() end

