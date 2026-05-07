---@class UGroomCreateBindingOptions : UObject
---@field public GroomAsset TWeakObjectPtr<UGroomAsset> @Groom asset
---@field public GroomBindingType EGroomBindingMeshType @Type of mesh to create groom binding for
---@field public SourceSkeletalMesh USkeletalMesh @Skeletal mesh on which the groom has been authored. This is optional, and used only if the hair               binding is done a different mesh than the one which it has been authored, i.e., only if the curves               roots and the surface geometry don't aligned and need to be wrapped/transformed.
---@field public TargetSkeletalMesh USkeletalMesh @Skeletal mesh on which the groom is attached to.
---@field public SourceGeometryCache UGeometryCache @GeometryCache on which the groom has been authored
---@field public TargetGeometryCache UGeometryCache @GeometryCache on which the groom is attached to.
---@field public NumInterpolationPoints integer @Number of points used for the rbf interpolation
---@field public MatchingSection integer @Section to pick to transfer the position
---@field public TargetBindingAttribute string @Optional mesh attribute used to filter triangles to bind groom to
local UGroomCreateBindingOptions = {}

