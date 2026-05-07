---Data Interface allowing sampling of skeletal meshes.
---@class UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
---@field public SourceMode ENDISkeletalMesh_SourceMode @Controls how to retrieve the Skeletal Mesh Component to attach to.
---@field public PreviewMesh TSoftObjectPtr<USkeletalMesh> @Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds.
---@field public DefaultMesh USkeletalMesh @Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds.
---@field protected SoftSourceActor TSoftObjectPtr<AActor> @The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world.
---@field protected ComponentTags TArray<string> @If defined, the supplied tags will be used to identify a valid component
---@field protected SourceComponent USkeletalMeshComponent @The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints.
---@field public MeshUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public SkinningMode ENDISkeletalMesh_SkinningMode @Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information.
---@field public SamplingRegions TArray<string> @Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh.
---@field public WholeMeshLOD integer @If no regions are specified, we'll sample the whole mesh at this LODIndex. -1 will use the lowest quality LOD available, i.e. Number of LODs - 1.
---@field public FilteredBones TArray<string> @Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone.
---@field public FilteredSockets TArray<string> @Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket.
---@field public ExcludeBoneName string @Optionally remove a single bone from Random / Random Unfiltered access. You can still include this bone in filtered list and access using the direct index functionality.
---@field public bExcludeBone boolean
---@field public UvSetIndex integer
---@field public bRequireCurrentFrameData boolean @When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly       reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.
---@field public bReadDeformedGeometry boolean @Overrides the project setting and allows you to opt out of reading from deformed geometry. These is not performance gain from doing this, the branches will still exist in the generated code.
local UNiagaraDataInterfaceSkeletalMesh = {}

---@param InSource AActor
---@param Reason integer
function UNiagaraDataInterfaceSkeletalMesh:OnSourceEndPlay(InSource, Reason) end

