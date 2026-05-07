---@class UEditMeshPolygonsToolEdgeActions : UEditMeshPolygonsToolActionPropertySet
local UEditMeshPolygonsToolEdgeActions = {}

---Merge selected boundary edges, centering the result
function UEditMeshPolygonsToolEdgeActions:WeldCentered() end

---Merge selected boundary edges, moving the first edge to the second
function UEditMeshPolygonsToolEdgeActions:Weld() end

---Make each selected polygroup edge follow a straight path between its endpoints
function UEditMeshPolygonsToolEdgeActions:Straighten() end

---Simplify the underlying triangulation along the selected edges, when doing so won't change the shape or UVs, or make low-quality triangles
function UEditMeshPolygonsToolEdgeActions:Simplify() end

---Fill the adjacent hole for any selected boundary edges
function UEditMeshPolygonsToolEdgeActions:FillHole() end

---Duplicate and move boundary edge vertices outwards and connect them to the original boundary to create new faces.
function UEditMeshPolygonsToolEdgeActions:Extrude() end

---Delete selected edge, implicitly merging any connected faces
function UEditMeshPolygonsToolEdgeActions:DeleteEdge() end

---Collapse the selected edges, deleting the attached triangles and merging their vertices into one
function UEditMeshPolygonsToolEdgeActions:Collapse() end

---Create a new face that connects the selected edges
function UEditMeshPolygonsToolEdgeActions:Bridge() end

---Bevel the selected edges, replacing them with angled faces
function UEditMeshPolygonsToolEdgeActions:Bevel() end

