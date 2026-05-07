---@class UBakeInputMeshProperties : UInteractiveToolPropertySet
---@field public TargetStaticMesh UStaticMesh @Target mesh to sample to
---@field public TargetSkeletalMesh USkeletalMesh @Target mesh to sample to
---@field public TargetDynamicMesh AActor @Target mesh to sample to
---@field public TargetUVLayer string @UV channel to use for the target mesh
---@field public bHasTargetUVLayer boolean @If true, expose the TargetUVLayer property
---@field public SourceStaticMesh UStaticMesh @Source mesh to sample from
---@field public SourceSkeletalMesh USkeletalMesh @Source mesh to sample from
---@field public SourceDynamicMesh AActor @Source mesh to sample from
---@field public bHideSourceMesh boolean @If true, hide the source mesh
---@field public SourceNormalMap UTexture2D @Source mesh normal map; if empty, the geometric normals will be used
---@field public SourceNormalMapUVLayer string @UV channel to use for the source mesh normal map; only relevant if a source normal map is set
---@field public SourceNormalSpace EBakeNormalSpace @Normal space of the source mesh normal map.
---@field public bHasSourceNormalMap boolean @If true, expose the SourceNormalMap and SourceNormalMapUVLayer properties
---@field public ProjectionDistance number @Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid. This is only relevant if a separate source mesh is provided.
---@field public bProjectionInWorldSpace boolean @If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions. This is only relevant if a separate source mesh is provided.
---@field public TargetUVLayerNamesList TArray<string>
---@field public SourceUVLayerNamesList TArray<string>
local UBakeInputMeshProperties = {}

---@return TArray_string_
function UBakeInputMeshProperties:GetTargetUVLayerNamesFunc() end

---@return TArray_string_
function UBakeInputMeshProperties:GetSourceUVLayerNamesFunc() end

