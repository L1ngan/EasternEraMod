---@class UMirrorToolProperties : UInteractiveToolPropertySet
---@field public OperationMode EMirrorOperationMode @Mode of operation.
---@field public bCropAlongMirrorPlaneFirst boolean @Cut off everything on the back side of the mirror plane before mirroring.
---@field public bSimplifyAlongCrop boolean @Whether to locally simplify new edges created when cropping along the mirror plane. Will only simplify when doing so will not change the shape, UVs or PolyGroups.
---@field public bWeldVerticesOnMirrorPlane boolean @Weld vertices that lie on the mirror plane. Vertices will not be welded if doing so would give an edge more than two faces, or if they are part of a face in the plane.
---@field public PlaneTolerance number @Distance (in unscaled mesh space) to allow a point to be from the plane and still consider it "on the mirror plane".
---@field public bAllowBowtieVertexCreation boolean @When welding, whether to allow bowtie vertices to be created, or to duplicate the vertex.
---@field public bShowPreview boolean @Whether to show the preview.
---@field public WriteTo EMirrorSaveMode @How to save the result.
local UMirrorToolProperties = {}

