---@class UEditMeshPolygonsToolActions_Triangles : UEditMeshPolygonsToolActionPropertySet
local UEditMeshPolygonsToolActions_Triangles = {}

---Recalculate normals for the current set of selected faces
function UEditMeshPolygonsToolActions_Triangles:RecalcNormals() end

---Like Extrude/Offset, but performed in a boolean way, meaning that the faces can cut away the mesh or bridge mesh parts.
function UEditMeshPolygonsToolActions_Triangles:PushPull() end

---Insert a new vertex at the center of each selected face
function UEditMeshPolygonsToolActions_Triangles:Poke() end

---Outset the current set of selected faces. Click in viewport to confirm outset distance.
function UEditMeshPolygonsToolActions_Triangles:Outset() end

---Like Extrude, but defaults to moving verts along vertex normals instead of a single direction.
function UEditMeshPolygonsToolActions_Triangles:Offset() end

---Inset the current set of selected faces. Click in viewport to confirm inset distance.
function UEditMeshPolygonsToolActions_Triangles:Inset() end

---Flip normals and face orientation for the current set of selected faces
function UEditMeshPolygonsToolActions_Triangles:Flip() end

---Extrude the current set of selected faces. Click in viewport to confirm extrude height.
function UEditMeshPolygonsToolActions_Triangles:Extrude() end

---Duplicate the selected faces
function UEditMeshPolygonsToolActions_Triangles:Duplicate() end

---Separate the selected faces at their borders
function UEditMeshPolygonsToolActions_Triangles:Disconnect() end

---Delete the current set of selected faces
function UEditMeshPolygonsToolActions_Triangles:Delete() end

---Cut the current set of selected faces. Click twice in viewport to set cut line.
function UEditMeshPolygonsToolActions_Triangles:CutFaces() end

