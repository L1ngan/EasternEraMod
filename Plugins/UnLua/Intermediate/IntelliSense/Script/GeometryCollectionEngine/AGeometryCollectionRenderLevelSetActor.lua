---AGeometryCollectionRenderLevelSetActor
---An actor representing the collection of data necessary to
---render volumes.  This references a ray marching material, which
---is used internally by a post process component blendable.  This
---is a workflow that can be improved with a deeper implementation
---in the future if we decide to.  Note that behavior with multiple
---render level set actors isn't currently supported very well,
---but could be improved in the future
---@class AGeometryCollectionRenderLevelSetActor : AActor
---@field public TargetVolumeTexture UVolumeTexture @Volume texture to fill
---@field public RayMarchMaterial UMaterial @Material that performs ray marching.  Note this must have certain parameters in order to work correctly
---@field public SurfaceTolerance number @Surface tolerance used for rendering.  When surface reconstruction is noisy, try tweaking this value
---@field public Isovalue number @Isovalue of the level set to use for surface reconstruction.  Generally you want this to be zero, but it can be useful for exploring the distance values to make this negative to see the interior structure of the levelset
---@field public Enabled boolean @Enable or disable rendering
---@field public RenderVolumeBoundingBox boolean @Enable or disable rendering
local AGeometryCollectionRenderLevelSetActor = {}

