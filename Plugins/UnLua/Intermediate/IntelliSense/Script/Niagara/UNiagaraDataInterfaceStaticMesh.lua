---Data Interface allowing sampling of static meshes.
---@class UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
---@field public SourceMode ENDIStaticMesh_SourceMode @Controls how to retrieve the Static Mesh Component to attach to.
---@field public PreviewMesh TSoftObjectPtr<UStaticMesh> @Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds.
---@field public DefaultMesh UStaticMesh @Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds.
---@field protected SoftSourceActor TSoftObjectPtr<AActor> @The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world.
---@field protected SourceComponent TWeakObjectPtr<UStaticMeshComponent> @The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints.
---@field public SectionFilter FNDIStaticMeshSectionFilter @Array of filters the can be used to limit sampling to certain sections of the mesh.
---@field public bCaptureTransformsPerFrame boolean @If true we capture the transforms from the mesh component each frame.
---@field public bUsePhysicsBodyVelocity boolean @If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame.
---@field public bAllowSamplingFromStreamingLODs boolean @When true, we allow this DI to sample from streaming LODs. Selectively overriding the CVar fx.Niagara.NDIStaticMesh.UseInlineLODsOnly.
---@field public LODIndex integer @Static Mesh LOD to sample. When the desired LOD is not available, the next available LOD is used. When LOD Index is negative, Desired LOD = Num LODs - LOD Index.
---@field public LODIndexUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public MeshParameterBinding FNiagaraUserParameterBinding @Mesh parameter binding can be either an Actor (in which case we find the component), static mesh component or a static mesh.
---@field public InstanceIndex integer @When attached to an Instanced Static Mesh, which instance should be read from.
---@field public FilteredSockets TArray<string> @List of filtered sockets to use.
local UNiagaraDataInterfaceStaticMesh = {}

---@param NiagaraSystem UNiagaraComponent
---@param UserParameterName string
---@param NewInstanceIndex integer
function UNiagaraDataInterfaceStaticMesh.SetNiagaraStaticMeshDIInstanceIndex(NiagaraSystem, UserParameterName, NewInstanceIndex) end

---@param InSource AActor
---@param Reason integer
function UNiagaraDataInterfaceStaticMesh:OnSourceEndPlay(InSource, Reason) end

