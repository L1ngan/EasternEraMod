---@class UDeformMeshPolygonsTransformProperties : UInteractiveToolPropertySet
---@field public DeformationStrategy EGroupTopologyDeformationStrategy @Type of deformation used.
---@field public TransformMode EQuickTransformerMode @Type of transformation used.
---@field public bSelectFaces boolean @Allow for faces (PolyGroups) to be selected.
---@field public bSelectEdges boolean @Allow for edges to be selected.
---@field public bSelectVertices boolean @Allow for vertices to be selected.
---@field public bShowWireframe boolean @If true, overlays preview with wireframe.
---@field public SelectedWeightScheme EWeightScheme @Laplacian Deformation Options, currently not exposed.
---@field public HandleWeight number
---@field public bPostFixHandles boolean
local UDeformMeshPolygonsTransformProperties = {}

