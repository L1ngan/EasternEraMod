---@class UMeshInspectorProperties : UInteractiveToolPropertySet
---@field public bWireframe boolean @Toggle visibility of all mesh edges
---@field public bBoundaryEdges boolean @Toggle visibility of open boundary edges
---@field public bBowtieVertices boolean @Toggle visibility of bowtie vertices
---@field public bPolygonBorders boolean @Toggle visibility of polygon borders
---@field public bUVSeams boolean @Toggle visibility of UV seam edges
---@field public bUVBowties boolean @Toggle visibility of UV bowtie vertices
---@field public bMissingUVs boolean @Toggle visibility of triangles with missing UVs
---@field public bNormalSeams boolean @Toggle visibility of Normal seam edges
---@field public bTangentSeams boolean @Toggle visibility of Tangent seam edges
---@field public bNormalVectors boolean @Toggle visibility of normal vectors
---@field public bTangentVectors boolean @Toggle visibility of tangent vectors
---@field public bDrawHiddenEdgesAndSeams boolean @Toggle visibility of occluded boundary edges and seams
---@field public NormalLength number @Length of line segments representing normal vectors
---@field public TangentLength number @Length of line segments representing tangent vectors
---@field public ShowIndices EMeshInspectorToolDrawIndexMode @Draw the mesh indices of the selected type. A maximum of 500 visible indices will be rendered.
local UMeshInspectorProperties = {}

