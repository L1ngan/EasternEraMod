---@class UAttributeEditorModifyAttributeActions : UAttributeEditorActionPropertySet
---@field public Attribute string
---@field public AttributeNamesList TArray<string>
local UAttributeEditorModifyAttributeActions = {}

---@return TArray_string_
function UAttributeEditorModifyAttributeActions:GetAttributeNamesFunc() end

---Remove the selected Attribute Name from the mesh
function UAttributeEditorModifyAttributeActions:DeleteSelected() end

