---@class UMeshSelectionEditActions : UMeshSelectionToolActionPropertySet
local UMeshSelectionEditActions = {}

---Shrink the active triangle selection by removing any triangles touching a vertex on the selection boundary
function UMeshSelectionEditActions:Shrink() end

---Select all triangles in the mesh
function UMeshSelectionEditActions:SelectAll() end

---Optimize the selection border by removing "fin" triangles and including "ear" triangles
function UMeshSelectionEditActions:OptimizeBorder() end

---Select the largest connected mesh component by triangle count
function UMeshSelectionEditActions:LargestTriCountPart() end

---Select the largest connected mesh component by mesh area
function UMeshSelectionEditActions:LargestAreaPart() end

---Invert the active triangle selection
function UMeshSelectionEditActions:Invert() end

---Grow the active triangle selection to include any triangles touching a vertex on the selection boundary
function UMeshSelectionEditActions:Grow() end

---Grow the active selection to include any triangle connected via shared edges (ie flood-fill)
function UMeshSelectionEditActions:FloodFill() end

---Expand the selection to include all triangles with Materials matching the Materials on the currently selected triangles
function UMeshSelectionEditActions:ExpandToMaterials() end

---Clear the active triangle selection
function UMeshSelectionEditActions:Clear() end

