---@class UAttributeEditorNormalsActions : UAttributeEditorActionPropertySet
local UAttributeEditorNormalsActions = {}

---Remove any hard edges / split normals, setting all normals to a single averaged vertex normal
function UAttributeEditorNormalsActions:ResetHardNormals() end

---Clear Tangents from the mesh
function UAttributeEditorNormalsActions:DiscardTangents() end

