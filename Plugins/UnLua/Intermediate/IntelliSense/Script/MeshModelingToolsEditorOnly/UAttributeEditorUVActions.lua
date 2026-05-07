---@class UAttributeEditorUVActions : UAttributeEditorActionPropertySet
---@field public UVLayer string
---@field public UVLayerNamesList TArray<string>
local UAttributeEditorUVActions = {}

---@return TArray_string_
function UAttributeEditorUVActions:GetUVLayerNamesFunc() end

---Duplicate the selected UV layers
function UAttributeEditorUVActions:DuplicateSelected() end

---Clear the selected UV layers, setting all UV values to (0,0)
function UAttributeEditorUVActions:DeleteSelected() end

---Clear all UV layers, setting all UV values to (0,0)
function UAttributeEditorUVActions:ClearAll() end

---Add a new UV layer
function UAttributeEditorUVActions:AddNew() end

