---PolyEdit Actions
---@class UEditMeshPolygonsToolActions : UEditMeshPolygonsToolActionPropertySet
local UEditMeshPolygonsToolActions = {}

---Simplify every polygon group by removing vertices on shared straight edges and retriangulating
function UEditMeshPolygonsToolActions:SimplifyByGroups() end

---Retriangulate each of the selected faces
function UEditMeshPolygonsToolActions:Retriangulate() end

---Recalculate normals for the current set of selected faces
function UEditMeshPolygonsToolActions:RecalcNormals() end

---Like Extrude/Offset, but performed in a boolean way, meaning that the faces can cut away the mesh or bridge mesh parts.
function UEditMeshPolygonsToolActions:PushPull() end

---Outset the current set of selected faces. Click in viewport to confirm outset distance.
---(An Outset operation stitches in a larger version of selected faces inside the existing ones)
function UEditMeshPolygonsToolActions:Outset() end

---Like Extrude, but defaults to moving verts along vertex normals instead of a single direction.
function UEditMeshPolygonsToolActions:Offset() end

---Merge the current set of selected faces into a single face
function UEditMeshPolygonsToolActions:Merge() end

---Inset the current set of selected faces. Click in viewport to confirm inset distance.
---(An Inset operation stitches in a smaller version of selected faces inside the existing ones)
function UEditMeshPolygonsToolActions:Inset() end

---Insert a chain of edges across quads (faces with four edges) in the mesh. Due to ambiguity, edges will not be inserted on non-quad faces.
function UEditMeshPolygonsToolActions:InsertEdgeLoop() end

---Insert a new edge connecting existing edges or vertices on a single face
function UEditMeshPolygonsToolActions:InsertEdge() end

---Flip normals and face orientation for the current set of selected faces
function UEditMeshPolygonsToolActions:Flip() end

---Extrude the current set of selected faces by moving and stitching them.
function UEditMeshPolygonsToolActions:Extrude() end

---Duplicate the selected faces at their borders
function UEditMeshPolygonsToolActions:Duplicate() end

---Separate the selected faces at their borders
function UEditMeshPolygonsToolActions:Disconnect() end

---Delete the current set of selected faces
function UEditMeshPolygonsToolActions:Delete() end

---Split each of the selected faces into a separate polygon for each triangle
function UEditMeshPolygonsToolActions:Decompose() end

---Cut the current set of selected faces. Click twice in viewport to set cut line.
function UEditMeshPolygonsToolActions:CutFaces() end

---Bevel the edge loops around the selected faces, inserting edge-aligned faces that interpolate the normals of the selected faces
function UEditMeshPolygonsToolActions:Bevel() end

