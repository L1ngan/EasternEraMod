---@class UMeshTopologySelectionMechanicProperties : UInteractiveToolPropertySet
---@field public bSelectVertices boolean
---@field public bSelectEdges boolean
---@field public bSelectFaces boolean
---@field public bSelectEdgeLoops boolean @When true, will select edge loops. Edge loops are either paths through vertices with 4 edges, or boundaries of holes.
---@field public bSelectEdgeRings boolean @When set, will select rings of edges that are opposite each other across a quad face.
---@field public bHitBackFaces boolean @When set, faces that face away from the camera are ignored in selection and occlusion. Useful for working with inside-out meshes.
---@field public bEnableMarquee boolean
---@field public bMarqueeIgnoreOcclusion boolean @Determines whether vertices should be checked for occlusion in marquee select (Note: marquee select currently only works with edges and vertices)
---@field public bPreferProjectedElement boolean @Prefer to select an edge projected to a point rather than the point, or a face projected to an edge rather than the edge.
---@field public bSelectDownRay boolean @If the closest element is valid, select other elements behind it that are aligned with it.
---@field public bIgnoreOcclusion boolean @Do not check whether the closest element is occluded from the current view.
local UMeshTopologySelectionMechanicProperties = {}

---Select all elements. Depends on selection filter, where vertices are preferred to edges to faces.
function UMeshTopologySelectionMechanicProperties:SelectAll() end

---Invert current selection. If selection is empty, has same effect as Select All, and is similarly dependent on selection filter.
function UMeshTopologySelectionMechanicProperties:InvertSelection() end

