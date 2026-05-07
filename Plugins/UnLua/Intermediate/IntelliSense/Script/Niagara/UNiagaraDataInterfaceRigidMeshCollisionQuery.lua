---Data Interface used to collide against static meshes - whether it is the mesh distance field or a physics asset's collision primitive
---@class UNiagaraDataInterfaceRigidMeshCollisionQuery : UNiagaraDataInterface
---@field public ActorTags TArray<string> @Set of tags used to match against actors when searching for RigidBody providers.  Empty tags will be ignored, and only a single               tag is required for an actor to be matched.
---@field public ComponentTags TArray<string> @Set of tags used to match against components when searching for RigidBody providers.  Empty tags will be ignored, and only a               single tag is required for a component to be matched.
---@field public SourceActors TArray<TSoftObjectPtr<AActor>> @Hardcoded references to actors that will be used as RigidBody providers.
---@field public OnlyUseMoveable boolean @If enabled only actors that are considered moveable will be searched for RigidBodies.
---@field public UseComplexCollisions boolean @If enabled, complex collisions will be searched for.
---@field public bFilterByObjectType boolean @If enabled, FindActors will use filtering based on ObjectType instead of Channel.
---@field public GlobalSearchAllowed boolean
---@field public GlobalSearchForced boolean
---@field public GlobalSearchFallback_Unscripted boolean
---@field public MaxNumPrimitives integer @Maximum number of RigidBody represented by this DataInterface.
local UNiagaraDataInterfaceRigidMeshCollisionQuery = {}

