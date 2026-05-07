---This component lets us store replicated information about how any particular UPrimitiveComponent
---should be attached to its parent cluster union. The benefits of using a separate components are:
---    1) It lets us avoid adding any additional overhead into the UPrimitiveComponent.
--- 2) It lets the replicated information have the same net relevancy as the actor being added to the cluster union
---    rather than having the same net relevancy as the cluster union (i.e. in the case of replicating this data in
---    an array in the ClusterUnionComponent).
--- 3) It lets us pinpoint what exactly is being added/removed (vs if all this data was stored in an array) which lets
---    us be a bit more efficient in terms of modifying the cluster union.
---@class UClusterUnionReplicatedProxyComponent : UActorComponent
---@field private ParentClusterUnion TWeakObjectPtr<UClusterUnionComponent>
---@field private ChildClusteredComponent TWeakObjectPtr<UPrimitiveComponent>
---@field private ParticleBoneIds TArray<integer>
---@field private ParticleChildToParents TArray<FTransform>
---@field private bNetUpdateParentClusterUnion boolean
---@field private bNetUpdateChildClusteredComponent boolean
---@field private bNetUpdateParticleBoneIds boolean
---@field private bNetUpdateParticleChildToParents boolean
---@field private bIsPendingDeletion boolean
local UClusterUnionReplicatedProxyComponent = {}

---@param BoneId integer
---@param ChildToParent FTransform
function UClusterUnionReplicatedProxyComponent:SetParticleChildToParent(BoneId, ChildToParent) end

---@param InIds TArray_integer_
function UClusterUnionReplicatedProxyComponent:SetParticleBoneIds(InIds) end

---@param InComponent UClusterUnionComponent
function UClusterUnionReplicatedProxyComponent:SetParentClusterUnion(InComponent) end

---@param InComponent UPrimitiveComponent
function UClusterUnionReplicatedProxyComponent:SetChildClusteredComponent(InComponent) end

function UClusterUnionReplicatedProxyComponent:OnRep_ParticleChildToParents() end

function UClusterUnionReplicatedProxyComponent:OnRep_ParticleBoneIds() end

function UClusterUnionReplicatedProxyComponent:OnRep_ParentClusterUnion() end

function UClusterUnionReplicatedProxyComponent:OnRep_ChildClusteredComponent() end

function UClusterUnionReplicatedProxyComponent:MarkPendingDeletion() end

---@return boolean
function UClusterUnionReplicatedProxyComponent:IsPendingDeletion() end

---@return TArray_integer_
function UClusterUnionReplicatedProxyComponent:GetParticleBoneIds() end

---@return UClusterUnionComponent
function UClusterUnionReplicatedProxyComponent:GetParentClusterUnionComponent() end

---@return UPrimitiveComponent
function UClusterUnionReplicatedProxyComponent:GetChildClusteredComponent() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UClusterUnionReplicatedProxyComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UClusterUnionReplicatedProxyComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UClusterUnionReplicatedProxyComponent:AddAssetUserDataOfClass(InUserDataClass) end

