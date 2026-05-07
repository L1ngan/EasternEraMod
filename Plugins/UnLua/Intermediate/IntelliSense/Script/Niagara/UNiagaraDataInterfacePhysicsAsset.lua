---Data Interface for interacting with PhysicsAssets
---@class UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface
---@field public DefaultSource UPhysicsAsset @Skeletal Mesh from which the Physics Asset will be found.
---@field public SoftSourceActor TSoftObjectPtr<AActor> @The source actor from which to sample
---@field public MeshUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
local UNiagaraDataInterfacePhysicsAsset = {}

