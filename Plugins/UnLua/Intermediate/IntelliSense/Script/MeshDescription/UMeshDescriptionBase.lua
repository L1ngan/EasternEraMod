---@class UMeshDescriptionBase : UObject
local UMeshDescriptionBase = {}

---Sets a vertex position
---@param VertexID FVertexID
---@param Position FVector
function UMeshDescriptionBase:SetVertexPosition(VertexID, Position) end

---Set the vertex instance at the given index around the polygon to the new value
---@param PolygonID FPolygonID
---@param VertexInstanceIDs TArray_FVertexInstanceID_
function UMeshDescriptionBase:SetPolygonVertexInstances(PolygonID, VertexInstanceIDs) end

---Sets the polygon group associated with a polygon
---@param PolygonID FPolygonID
---@param PolygonGroupID FPolygonGroupID
function UMeshDescriptionBase:SetPolygonPolygonGroup(PolygonID, PolygonGroupID) end

---Reverse the winding order of the vertices of this polygon
---@param PolygonID FPolygonID
function UMeshDescriptionBase:ReversePolygonFacing(PolygonID) end

---Reserves space for this number of new vertices
---@param NumberOfNewVertices integer
function UMeshDescriptionBase:ReserveNewVertices(NumberOfNewVertices) end

---Reserves space for this number of new vertex instances
---@param NumberOfNewVertexInstances integer
function UMeshDescriptionBase:ReserveNewVertexInstances(NumberOfNewVertexInstances) end

---Reserves space for this number of new triangles
---@param NumberOfNewTriangles integer
function UMeshDescriptionBase:ReserveNewTriangles(NumberOfNewTriangles) end

---Reserves space for this number of new polygons
---@param NumberOfNewPolygons integer
function UMeshDescriptionBase:ReserveNewPolygons(NumberOfNewPolygons) end

---Reserves space for this number of new polygon groups
---@param NumberOfNewPolygonGroups integer
function UMeshDescriptionBase:ReserveNewPolygonGroups(NumberOfNewPolygonGroups) end

---Reserves space for this number of new edges
---@param NumberOfNewEdges integer
function UMeshDescriptionBase:ReserveNewEdges(NumberOfNewEdges) end

---Returns whether the passed vertex ID is valid
---@param VertexID FVertexID
---@return boolean
function UMeshDescriptionBase:IsVertexValid(VertexID) end

---Returns whether a given vertex is orphaned, i.e. it doesn't form part of any polygon
---@param VertexID FVertexID
---@return boolean
function UMeshDescriptionBase:IsVertexOrphaned(VertexID) end

---Returns whether the passed vertex instance ID is valid
---@param VertexInstanceID FVertexInstanceID
---@return boolean
function UMeshDescriptionBase:IsVertexInstanceValid(VertexInstanceID) end

---Returns whether the passed triangle ID is valid
---@param TriangleID FTriangleID
---@return boolean
function UMeshDescriptionBase:IsTriangleValid(TriangleID) end

---Determines if this triangle is part of an n-gon
---@param TriangleID FTriangleID
---@return boolean
function UMeshDescriptionBase:IsTrianglePartOfNgon(TriangleID) end

---Returns whether the passed polygon ID is valid
---@param PolygonID FPolygonID
---@return boolean
function UMeshDescriptionBase:IsPolygonValid(PolygonID) end

---Returns whether the passed polygon group ID is valid
---@param PolygonGroupID FPolygonGroupID
---@return boolean
function UMeshDescriptionBase:IsPolygonGroupValid(PolygonGroupID) end

---Return whether the mesh description is empty
---@return boolean
function UMeshDescriptionBase:IsEmpty() end

---Returns whether the passed edge ID is valid
---@param EdgeID FEdgeID
---@return boolean
function UMeshDescriptionBase:IsEdgeValid(EdgeID) end

---Determine whether a given edge is an internal edge between triangles of a specific polygon
---@param EdgeID FEdgeID
---@param PolygonID FPolygonID
---@return boolean
function UMeshDescriptionBase:IsEdgeInternalToPolygon(EdgeID, PolygonID) end

---Determine whether a given edge is an internal edge between triangles of a polygon
---@param EdgeID FEdgeID
---@return boolean
function UMeshDescriptionBase:IsEdgeInternal(EdgeID) end

---Returns reference to an array of VertexInstance IDs instanced from this vertex
---@param VertexID FVertexID
---@param OutVertexInstanceIDs TArray_FVertexInstanceID_ @[out] 
function UMeshDescriptionBase:GetVertexVertexInstances(VertexID, OutVertexInstanceIDs) end

---Gets a vertex position
---@param VertexID FVertexID
---@return FVector
function UMeshDescriptionBase:GetVertexPosition(VertexID) end

---Returns the edge ID defined by the two given vertex IDs, if there is one; otherwise INDEX_NONE
---@param VertexID0 FVertexID
---@param VertexID1 FVertexID
---@return FEdgeID
function UMeshDescriptionBase:GetVertexPairEdge(VertexID0, VertexID1) end

---Returns the vertex ID associated with the given vertex instance
---@param VertexInstanceID FVertexInstanceID
---@return FVertexID
function UMeshDescriptionBase:GetVertexInstanceVertex(VertexInstanceID) end

---Returns the edge ID defined by the two given vertex instance IDs, if there is one; otherwise INDEX_NONE
---@param VertexInstanceID0 FVertexInstanceID
---@param VertexInstanceID1 FVertexInstanceID
---@return FEdgeID
function UMeshDescriptionBase:GetVertexInstancePairEdge(VertexInstanceID0, VertexInstanceID1) end

---Return the vertex instance which corresponds to the given vertex on the given triangle, or INDEX_NONE
---@param TriangleID FTriangleID
---@param VertexID FVertexID
---@return FVertexInstanceID
function UMeshDescriptionBase:GetVertexInstanceForTriangleVertex(TriangleID, VertexID) end

---Return the vertex instance which corresponds to the given vertex on the given polygon, or INDEX_NONE
---@param PolygonID FPolygonID
---@param VertexID FVertexID
---@return FVertexInstanceID
function UMeshDescriptionBase:GetVertexInstanceForPolygonVertex(PolygonID, VertexID) end

---Returns the number of vertex instances
---@return integer
function UMeshDescriptionBase:GetVertexInstanceCount() end

---Returns reference to an array of Triangle IDs connected to this vertex instance
---@param VertexInstanceID FVertexInstanceID
---@param OutConnectedTriangleIDs TArray_FTriangleID_ @[out] 
function UMeshDescriptionBase:GetVertexInstanceConnectedTriangles(VertexInstanceID, OutConnectedTriangleIDs) end

---Returns the polygons connected to this vertex instance
---@param VertexInstanceID FVertexInstanceID
---@param OutConnectedPolygonIDs TArray_FPolygonID_ @[out] 
function UMeshDescriptionBase:GetVertexInstanceConnectedPolygons(VertexInstanceID, OutConnectedPolygonIDs) end

---Returns the number of vertices
---@return integer
function UMeshDescriptionBase:GetVertexCount() end

---Returns the triangles connected to this vertex
---@param VertexID FVertexID
---@param OutConnectedTriangleIDs TArray_FTriangleID_ @[out] 
function UMeshDescriptionBase:GetVertexConnectedTriangles(VertexID, OutConnectedTriangleIDs) end

---Returns the polygons connected to this vertex
---@param VertexID FVertexID
---@param OutConnectedPolygonIDs TArray_FPolygonID_ @[out] 
function UMeshDescriptionBase:GetVertexConnectedPolygons(VertexID, OutConnectedPolygonIDs) end

---Returns reference to an array of Edge IDs connected to this vertex
---@param VertexID FVertexID
---@param OutEdgeIDs TArray_FEdgeID_ @[out] 
function UMeshDescriptionBase:GetVertexConnectedEdges(VertexID, OutEdgeIDs) end

---Returns the vertices adjacent to this vertex
---@param VertexID FVertexID
---@param OutAdjacentVertexIDs TArray_FVertexID_ @[out] 
function UMeshDescriptionBase:GetVertexAdjacentVertices(VertexID, OutAdjacentVertexIDs) end

---Returns the vertices which define this triangle
---@param TriangleID FTriangleID
---@param OutVertexIDs TArray_FVertexID_ @[out] 
function UMeshDescriptionBase:GetTriangleVertices(TriangleID, OutVertexIDs) end

---Get the vertex instances which define this triangle
---@param TriangleID FTriangleID
---@param OutVertexInstanceIDs TArray_FVertexInstanceID_ @[out] 
function UMeshDescriptionBase:GetTriangleVertexInstances(TriangleID, OutVertexInstanceIDs) end

---Get the specified vertex instance by index
---@param TriangleID FTriangleID
---@param Index integer
---@return FVertexInstanceID
function UMeshDescriptionBase:GetTriangleVertexInstance(TriangleID, Index) end

---Get the polygon group which contains this triangle
---@param TriangleID FTriangleID
---@return FPolygonGroupID
function UMeshDescriptionBase:GetTrianglePolygonGroup(TriangleID) end

---Get the polygon which contains this triangle
---@param TriangleID FTriangleID
---@return FPolygonID
function UMeshDescriptionBase:GetTrianglePolygon(TriangleID) end

---Returns the edges which define this triangle
---@param TriangleID FTriangleID
---@param OutEdgeIDs TArray_FEdgeID_ @[out] 
function UMeshDescriptionBase:GetTriangleEdges(TriangleID, OutEdgeIDs) end

---Returns the number of triangles
---@return integer
function UMeshDescriptionBase:GetTriangleCount() end

---Returns the adjacent triangles to this triangle
---@param TriangleID FTriangleID
---@param OutTriangleIDs TArray_FTriangleID_ @[out] 
function UMeshDescriptionBase:GetTriangleAdjacentTriangles(TriangleID, OutTriangleIDs) end

---Returns the vertices which form the polygon perimeter
---@param PolygonID FPolygonID
---@param OutVertexIDs TArray_FVertexID_ @[out] 
function UMeshDescriptionBase:GetPolygonVertices(PolygonID, OutVertexIDs) end

---Returns reference to an array of VertexInstance IDs forming the perimeter of this polygon
---@param PolygonID FPolygonID
---@param OutVertexInstanceIDs TArray_FVertexInstanceID_ @[out] 
function UMeshDescriptionBase:GetPolygonVertexInstances(PolygonID, OutVertexInstanceIDs) end

---Return reference to an array of triangle IDs which comprise this polygon
---@param PolygonID FPolygonID
---@param OutTriangleIDs TArray_FTriangleID_ @[out] 
function UMeshDescriptionBase:GetPolygonTriangles(PolygonID, OutTriangleIDs) end

---Return the polygon group associated with a polygon
---@param PolygonID FPolygonID
---@return FPolygonGroupID
function UMeshDescriptionBase:GetPolygonPolygonGroup(PolygonID) end

---Returns the edges which form the polygon perimeter
---@param PolygonID FPolygonID
---@param OutEdgeIDs TArray_FEdgeID_ @[out] 
function UMeshDescriptionBase:GetPolygonPerimeterEdges(PolygonID, OutEdgeIDs) end

---Populate the provided array with a list of edges which are internal to the polygon, i.e. those which separate
---          constituent triangles.
---@param PolygonID FPolygonID
---@param OutEdgeIDs TArray_FEdgeID_ @[out] 
function UMeshDescriptionBase:GetPolygonInternalEdges(PolygonID, OutEdgeIDs) end

---Returns the polygons associated with the given polygon group
---@param PolygonGroupID FPolygonGroupID
---@param OutPolygonIDs TArray_FPolygonID_ @[out] 
function UMeshDescriptionBase:GetPolygonGroupPolygons(PolygonGroupID, OutPolygonIDs) end

---Returns the number of polygon groups
---@return integer
function UMeshDescriptionBase:GetPolygonGroupCount() end

---Returns the number of polygons
---@return integer
function UMeshDescriptionBase:GetPolygonCount() end

---Populates the passed array with adjacent polygons
---@param PolygonID FPolygonID
---@param OutPolygonIDs TArray_FPolygonID_ @[out] 
function UMeshDescriptionBase:GetPolygonAdjacentPolygons(PolygonID, OutPolygonIDs) end

---Returns number of vertex instances created from this vertex
---@param VertexID FVertexID
---@return integer
function UMeshDescriptionBase:GetNumVertexVertexInstances(VertexID) end

---Returns the number of triangles connected to this vertex instance
---@param VertexInstanceID FVertexInstanceID
---@return integer
function UMeshDescriptionBase:GetNumVertexInstanceConnectedTriangles(VertexInstanceID) end

---Returns the number of polygons connected to this vertex instance.
---@param VertexInstanceID FVertexInstanceID
---@return integer
function UMeshDescriptionBase:GetNumVertexInstanceConnectedPolygons(VertexInstanceID) end

---Returns number of triangles connected to this vertex
---@param VertexID FVertexID
---@return integer
function UMeshDescriptionBase:GetNumVertexConnectedTriangles(VertexID) end

---Returns the number of polygons connected to this vertex
---@param VertexID FVertexID
---@return integer
function UMeshDescriptionBase:GetNumVertexConnectedPolygons(VertexID) end

---Returns number of edges connected to this vertex
---@param VertexID FVertexID
---@return integer
function UMeshDescriptionBase:GetNumVertexConnectedEdges(VertexID) end

---Returns the number of vertices this polygon has
---@param PolygonID FPolygonID
---@return integer
function UMeshDescriptionBase:GetNumPolygonVertices(PolygonID) end

---Return the number of triangles which comprise this polygon
---@param PolygonID FPolygonID
---@return integer
function UMeshDescriptionBase:GetNumPolygonTriangles(PolygonID) end

---Return the number of internal edges in this polygon
---@param PolygonID FPolygonID
---@return integer
function UMeshDescriptionBase:GetNumPolygonInternalEdges(PolygonID) end

---Returns the number of polygons in this polygon group
---@param PolygonGroupID FPolygonGroupID
---@return integer
function UMeshDescriptionBase:GetNumPolygonGroupPolygons(PolygonGroupID) end

---Returns the number of triangles connected to this edge
---@param EdgeID FEdgeID
---@return integer
function UMeshDescriptionBase:GetNumEdgeConnectedTriangles(EdgeID) end

---Returns the number of polygons connected to this edge
---@param EdgeID FEdgeID
---@return integer
function UMeshDescriptionBase:GetNumEdgeConnectedPolygons(EdgeID) end

---Returns a pair of vertex IDs defining the edge
---@param EdgeID FEdgeID
---@param OutVertexIDs TArray_FVertexID_ @[out] 
function UMeshDescriptionBase:GetEdgeVertices(EdgeID, OutVertexIDs) end

---Returns the vertex ID corresponding to one of the edge endpoints
---@param EdgeID FEdgeID
---@param VertexNumber integer
---@return FVertexID
function UMeshDescriptionBase:GetEdgeVertex(EdgeID, VertexNumber) end

---Returns the number of edges
---@return integer
function UMeshDescriptionBase:GetEdgeCount() end

---Returns reference to an array of triangle IDs connected to this edge
---@param EdgeID FEdgeID
---@param OutConnectedTriangleIDs TArray_FTriangleID_ @[out] 
function UMeshDescriptionBase:GetEdgeConnectedTriangles(EdgeID, OutConnectedTriangleIDs) end

---Returns the polygons connected to this edge
---@param EdgeID FEdgeID
---@param OutConnectedPolygonIDs TArray_FPolygonID_ @[out] 
function UMeshDescriptionBase:GetEdgeConnectedPolygons(EdgeID, OutConnectedPolygonIDs) end

---Empty the mesh description
function UMeshDescriptionBase:Empty() end

---Deletes a vertex instance from a mesh
---@param VertexInstanceID FVertexInstanceID
---@param OrphanedVertices TArray_FVertexID_ @[out] 
function UMeshDescriptionBase:DeleteVertexInstance(VertexInstanceID, OrphanedVertices) end

---Deletes a vertex from the mesh
---@param VertexID FVertexID
function UMeshDescriptionBase:DeleteVertex(VertexID) end

---Deletes a triangle from the mesh
---@param TriangleID FTriangleID
---@param OrphanedEdges TArray_FEdgeID_ @[out] 
---@param OrphanedVertexInstances TArray_FVertexInstanceID_ @[out] 
---@param OrphanedPolygonGroupsPtr TArray_FPolygonGroupID_ @[out] 
function UMeshDescriptionBase:DeleteTriangle(TriangleID, OrphanedEdges, OrphanedVertexInstances, OrphanedPolygonGroupsPtr) end

---Deletes a polygon group from the mesh
---@param PolygonGroupID FPolygonGroupID
function UMeshDescriptionBase:DeletePolygonGroup(PolygonGroupID) end

---Deletes a polygon from the mesh
---@param PolygonID FPolygonID
---@param OrphanedEdges TArray_FEdgeID_ @[out] 
---@param OrphanedVertexInstances TArray_FVertexInstanceID_ @[out] 
---@param OrphanedPolygonGroups TArray_FPolygonGroupID_ @[out] 
function UMeshDescriptionBase:DeletePolygon(PolygonID, OrphanedEdges, OrphanedVertexInstances, OrphanedPolygonGroups) end

---Deletes an edge from a mesh
---@param EdgeID FEdgeID
---@param OrphanedVertices TArray_FVertexID_ @[out] 
function UMeshDescriptionBase:DeleteEdge(EdgeID, OrphanedVertices) end

---Adds a new vertex to the mesh with the given ID
---@param VertexID FVertexID
function UMeshDescriptionBase:CreateVertexWithID(VertexID) end

---Adds a new vertex instance to the mesh with the given ID
---@param VertexInstanceID FVertexInstanceID
---@param VertexID FVertexID
function UMeshDescriptionBase:CreateVertexInstanceWithID(VertexInstanceID, VertexID) end

---Adds a new vertex instance to the mesh and returns its ID
---@param VertexID FVertexID
---@return FVertexInstanceID
function UMeshDescriptionBase:CreateVertexInstance(VertexID) end

---Adds a new vertex to the mesh and returns its ID
---@return FVertexID
function UMeshDescriptionBase:CreateVertex() end

---Adds a new triangle to the mesh with the given ID. This will also make an encapsulating polygon, and any missing edges.
---@param TriangleID FTriangleID
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray_FVertexInstanceID_
---@param NewEdgeIDs TArray_FEdgeID_ @[out] 
function UMeshDescriptionBase:CreateTriangleWithID(TriangleID, PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end

---Adds a new triangle to the mesh and returns its ID. This will also make an encapsulating polygon, and any missing edges.
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray_FVertexInstanceID_
---@param NewEdgeIDs TArray_FEdgeID_ @[out] 
---@return FTriangleID
function UMeshDescriptionBase:CreateTriangle(PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end

---Adds a new polygon to the mesh with the given ID. This will also make any missing edges, and all constituent triangles.
---@param PolygonID FPolygonID
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray_FVertexInstanceID_ @[out] 
---@param NewEdgeIDs TArray_FEdgeID_ @[out] 
function UMeshDescriptionBase:CreatePolygonWithID(PolygonID, PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end

---Adds a new polygon group to the mesh with the given ID
---@param PolygonGroupID FPolygonGroupID
function UMeshDescriptionBase:CreatePolygonGroupWithID(PolygonGroupID) end

---Adds a new polygon group to the mesh and returns its ID
---@return FPolygonGroupID
function UMeshDescriptionBase:CreatePolygonGroup() end

---Adds a new polygon to the mesh and returns its ID. This will also make any missing edges, and all constituent triangles.
---@param PolygonGroupID FPolygonGroupID
---@param VertexInstanceIDs TArray_FVertexInstanceID_ @[out] 
---@param NewEdgeIDs TArray_FEdgeID_ @[out] 
---@return FPolygonID
function UMeshDescriptionBase:CreatePolygon(PolygonGroupID, VertexInstanceIDs, NewEdgeIDs) end

---Adds a new edge to the mesh with the given ID
---@param EdgeID FEdgeID
---@param VertexID0 FVertexID
---@param VertexID1 FVertexID
function UMeshDescriptionBase:CreateEdgeWithID(EdgeID, VertexID0, VertexID1) end

---Adds a new edge to the mesh and returns its ID
---@param VertexID0 FVertexID
---@param VertexID1 FVertexID
---@return FEdgeID
function UMeshDescriptionBase:CreateEdge(VertexID0, VertexID1) end

---Generates triangles and internal edges for the given polygon
---@param PolygonID FPolygonID
function UMeshDescriptionBase:ComputePolygonTriangulation(PolygonID) end

