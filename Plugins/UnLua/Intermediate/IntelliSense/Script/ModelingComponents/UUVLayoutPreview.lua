---UUVLayoutPreview is a utility object that creates and manages a 3D plane on which a UV layout
---for a 3D mesh is rendered. The UV layout
---@class UUVLayoutPreview : UObject
---@field public Settings UUVLayoutPreviewProperties @Visualization settings
---@field public PreviewMesh UPreviewMesh @PreviewMesh is initialized with a copy of an input mesh with UVs mapped to position, ie such that (X,Y,Z) = (U,V,0)
---@field public MeshElementsVisualizer UMeshElementsVisualizer @MeshElementsVisualizer references the PreviewMesh to handle drawing the wireframes for UVs
---@field public TriangleComponent UTriangleSetComponent @Set of additional triangles to draw, eg for backing rectangle, etc
---@field public bShowBackingRectangle boolean @Configure whether the backing rectangle should be shown
---@field public BackingRectangleMaterial UMaterialInterface @Configure the backing rectangle material
local UUVLayoutPreview = {}

