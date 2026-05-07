---PropertySet for properties affecting the selective tessellation.
---@class USelectiveTessellationProperties : UInteractiveToolPropertySet
---@field public SelectionType EDisplaceMeshToolTriangleSelectionType @Optionally, restrict tessellation to a subset of the triangles.
---@field public ActiveMaterial string @Name of the selected material.
---@field public MaterialIDList TArray<string>
local USelectiveTessellationProperties = {}

---@return TArray_string_
function USelectiveTessellationProperties:GetMaterialIDsFunc() end

