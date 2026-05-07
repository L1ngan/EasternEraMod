---@class UMeshToVolumeToolProperties : UInteractiveToolPropertySet
---@field public ConversionMode EMeshToVolumeMode @Method for converting the input mesh to a set of Planar Polygonal Faces in the output Volume.
---@field public bPreserveGroupBoundaries boolean @When true, adjacent coplanar groups will not be merged together into single faces. Not relevant if conversion mode is set to emit all triangles separately.
---@field public bAutoSimplify boolean @Determines whether mesh gets auto simplified when its triangle count is too high.
---@field public SimplifyMaxTriangles integer @Target triangle count for auto simplification when Auto Simplify is true.
---@field public NewVolumeType TSubclassOf<AVolume> @Type of new Volume to create on Accept
---@field public TargetVolume TLazyObjectPtr<AVolume> @If set, the target Volume will be updated, rather than creating a new Volume.
local UMeshToVolumeToolProperties = {}

