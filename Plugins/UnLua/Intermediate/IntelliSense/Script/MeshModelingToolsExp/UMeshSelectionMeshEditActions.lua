---@class UMeshSelectionMeshEditActions : UMeshSelectionToolActionPropertySet
local UMeshSelectionMeshEditActions = {}

---Smooth the selection border
function UMeshSelectionMeshEditActions:SmoothBorder() end

---Delete the selected triangles from the active Mesh Object and create a new Mesh Object containing those triangles
function UMeshSelectionMeshEditActions:Separate() end

---Flip the normals of the selected triangles. This will create hard normals at selection borders.
function UMeshSelectionMeshEditActions:FlipNormals() end

---Create a new Mesh Object containing the selected triangles
function UMeshSelectionMeshEditActions:Duplicate() end

---Disconnected the selected triangles from their neighbours, to create mesh boundaries along the selection borders
function UMeshSelectionMeshEditActions:Disconnect() end

---Delete the selected triangles
function UMeshSelectionMeshEditActions:Delete() end

---Assign a new unique Polygroup index to the selected triangles
function UMeshSelectionMeshEditActions:CreatePolygroup() end

