---@class UEditMeshPolygonsToolEdgeActions_Triangles : UEditMeshPolygonsToolActionPropertySet
local UEditMeshPolygonsToolEdgeActions_Triangles = {}

---Merge selected boundary edges, centering the result
function UEditMeshPolygonsToolEdgeActions_Triangles:WeldCentered() end

---Merge selected boundary edges, moving the first edge to the second
function UEditMeshPolygonsToolEdgeActions_Triangles:Weld() end

---Split the selected edges, inserting a new vertex at each edge midpoint
function UEditMeshPolygonsToolEdgeActions_Triangles:Split() end

---Flip the selected (non-border, non-seam) edges, replacing them with new edges in the crossing direction
function UEditMeshPolygonsToolEdgeActions_Triangles:Flip() end

---Fill the adjacent hole for any selected boundary edges
function UEditMeshPolygonsToolEdgeActions_Triangles:FillHole() end

---Duplicate and move boundary vertices outwards and connect them to the original boundary to create new faces.
function UEditMeshPolygonsToolEdgeActions_Triangles:Extrude() end

---Collapse the selected edges, deleting the attached triangles and merging its two vertices into one
function UEditMeshPolygonsToolEdgeActions_Triangles:Collapse() end

---Create a new face that connects the selected edges
function UEditMeshPolygonsToolEdgeActions_Triangles:Bridge() end

