---This does the bulk of the work exposing a physics cluster union to the game thread.
---This component needs to be a primitive component primarily because of how physics
---proxies need to be registered with the solver with an association with a primitive component.
---This component can be used as part of AClusterUnionActor or on its own as its list of
---clustered components/actors can be specified dynamically at runtime and/or statically
---on asset creation.
---The cluster union component needs to not only maintain a game thread representation of what's happening on the
---physics thread but it also needs to make sure this data gets replicated to every client. A general model of how
---the data flow happens is as follows:
--- [Server GT Command] -> [Server PT Command] -> [Server Modifies PT Data] -> [Server Sync PT Data back to GT Data].
---This enables GT control over what happens to the cluster union BUT ALSO maintains a physics-first approach
---to the cluster union where a physics event can possibly cause the cluster union to break.
---The GT data is replicated from the server to the clients either via the FClusterUnionReplicatedData on the cluster union component
---or per-child component data is replicated via the UClusterUnionReplicatedProxyComponent. Generally, the same flow is
---replicated on the client. The only exception is for replicating the X/R/V/W properties on the cluster union particle which does
---a GT -> PT data sync. There's no particula reason this happens...it just mirrors the single particle physics proxy here.
---@class UClusterUnionComponent : UPrimitiveComponent
---@field public bEnableDamageFromCollision boolean @Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture.
---@field public OnComponentAddedEvent MulticastDelegate
---@field public OnComponentRemovedEvent MulticastDelegate
---@field public OnComponentBoundsChangedEvent MulticastDelegate
---@field private ClusteredComponentsReferences TArray<FComponentReference> @These are the statically clustered components. These should be specified in the editor and never change.
---@field private GravityGroupIndexOverride integer @If set to a value not equal to -1, will manually set the cluster union's gravity group instead of automatically inheriting it from its children particles.
---@field private ReplicatedRigidState FClusterUnionReplicatedData @Data that can be changed at runtime to keep state about the cluster union consistent between the server and client.
local UClusterUnionComponent = {}

---@param bIsAnchored boolean
function UClusterUnionComponent:SetIsAnchored(bIsAnchored) end

---@param bValue boolean
function UClusterUnionComponent:SetEnableDamageFromCollision(bValue) end

---@param InComponent UPrimitiveComponent
function UClusterUnionComponent:RemoveComponentFromCluster(InComponent) end

---@param InComponent UPrimitiveComponent
---@param BoneIds TArray_integer_
function UClusterUnionComponent:RemoveComponentBonesFromCluster(InComponent, BoneIds) end

---Handles changes to ReplicatedRigidState. Note that this function does not handle replication of X/R since we make use
---of the scene component's default replication for that.
function UClusterUnionComponent:OnRep_RigidState() end

---@param Component UPrimitiveComponent
---@return boolean
function UClusterUnionComponent:IsComponentAdded(Component) end

---Whether or not this code is running on the server.
---@return boolean
function UClusterUnionComponent:IsAuthority() end

---Once in the cluster union, if the component's physics state is destroyed, we should remove it from the cluster union.
---@param ChangedComponent UPrimitiveComponent
---@param StateChange EComponentPhysicsStateChange
function UClusterUnionComponent:HandleComponentPhysicsStateChangePostAddIntoClusterUnion(ChangedComponent, StateChange) end

---Need to handle the fact that this component may or may not be initialized prior to the components referenced in
---ClusteredComponentsReferences. This function lets us listen to OnComponentPhysicsStateChanged on the incoming
---primitive component so that once the physics state is properly created we can begin the process of adding it.
---@param ChangedComponent UPrimitiveComponent
---@param StateChange EComponentPhysicsStateChange
function UClusterUnionComponent:HandleComponentPhysicsStateChange(ChangedComponent, StateChange) end

---@return TArray_UPrimitiveComponent_
function UClusterUnionComponent:GetPrimitiveComponents() end

---@return TArray_AActor_
function UClusterUnionComponent:GetActors() end

---This should only be called on the client when replication happens.
---@param InComponent UPrimitiveComponent
---@param BoneIds TArray_integer_
---@param ChildToParent TArray_FTransform_
function UClusterUnionComponent:ForceSetChildToParent(InComponent, BoneIds, ChildToParent) end

---@param InComponent UPrimitiveComponent
---@param BoneIds TArray_integer_
---@param bRebuildGeometry boolean @[opt] 
function UClusterUnionComponent:AddComponentToCluster(InComponent, BoneIds, bRebuildGeometry) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UClusterUnionComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UClusterUnionComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UClusterUnionComponent:AddAssetUserDataOfClass(InUserDataClass) end

