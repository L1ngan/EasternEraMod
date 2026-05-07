---@class UGroomComponent : UMeshComponent
---@field public GroomAsset UGroomAsset @Groom asset .
---@field public GroomCache UGroomCache
---@field public NiagaraComponents TArray<UNiagaraComponent> @Niagara components that will be attached to the system
---@field public SourceSkeletalMesh USkeletalMesh @Kept for debugging mesh transfer
---@field public BindingAsset UGroomBindingAsset @Optional binding asset for binding a groom onto a skeletal mesh. If the binding asset is not provided the projection is done at runtime, which implies a large GPU cost at startup time.
---@field public PhysicsAsset UPhysicsAsset @Physics asset to be used for hair simulation
---@field public SimulationSettings FHairSimulationSettings @Groom's simulation settings
---@field public MeshDeformer UMeshDeformer @Mesh deformer that will be applied on groom instance for deformation. Enable the groom asset deformation flags on groups to be able to set it.
---@field public MeshDeformerInstance UMeshDeformerInstance @Object containing state for the bound MeshDeformer.
---@field public MeshDeformerInstanceSettings UMeshDeformerInstanceSettings @Object containing instance settings for the bound MeshDeformer.
---@field public Strands_DebugMaterial UMaterialInterface @Reference of the default/debug materials for each geometric representation
---@field public Strands_DefaultMaterial UMaterialInterface
---@field public Cards_DefaultMaterial UMaterialInterface
---@field public Meshes_DefaultMaterial UMaterialInterface
---@field public AngularSpringsSystem UNiagaraSystem
---@field public CosseratRodsSystem UNiagaraSystem
---@field public AttachmentName string @Optional socket name, where the groom component should be attached at, when parented with a skeletal mesh
---@field public GroomGroupsDesc TArray<FHairGroupDesc> @Groom's groups info.
---@field public bUseCards boolean @Force the groom to use cards/meshes geometry instead of strands.
---@field private bRunning boolean
---@field private bLooping boolean
---@field private bManualTick boolean
---@field private ElapsedTime number
---@field private GroomAssetBeingLoaded UGroomAsset
---@field private BindingAssetBeingLoaded UGroomBindingAsset
local UGroomComponent = {}

---Accessor function for changing Groom physics asset from blueprint/sequencer
---@param InPhysicsAsset UPhysicsAsset
function UGroomComponent:SetPhysicsAsset(InPhysicsAsset) end

---Change the MeshDeformer that is used for this Component.
---@param InMeshDeformer UMeshDeformer
function UGroomComponent:SetMeshDeformer(InMeshDeformer) end

---@param bEnable boolean
function UGroomComponent:SetHairLengthScaleEnable(bEnable) end

---Accessor function for changing hair length scale from blueprint/sequencer
---@param Scale number
function UGroomComponent:SetHairLengthScale(Scale) end

---Accessor function for changing GroomCache asset from blueprint/sequencer
---@param InGroomCache UGroomCache
function UGroomComponent:SetGroomCache(InGroomCache) end

---Accessor function for changing Groom asset from blueprint/sequencer
---@param Asset UGroomAsset
function UGroomComponent:SetGroomAsset(Asset) end

---Accessor function for changing the enable simulation flag from blueprint/sequencer
---@param bInEnableSimulation boolean
function UGroomComponent:SetEnableSimulation(bInEnableSimulation) end

---Accessor function for changing Groom binding asset from blueprint/sequencer
---@param InBinding UGroomBindingAsset
function UGroomComponent:SetBindingAsset(InBinding) end

---Reset the simulation, if enabled
function UGroomComponent:ResetSimulation() end

---Reset the collision components
function UGroomComponent:ResetCollisionComponents() end

---Given the group index return the matching niagara component
---@param GroupIndex integer
---@return UNiagaraComponent
function UGroomComponent:GetNiagaraComponent(GroupIndex) end

---@return boolean
function UGroomComponent:GetIsHairLengthScaleEnabled() end

---Add a skeletal mesh to the collision components
---@param SkeletalMeshComponent USkeletalMeshComponent
function UGroomComponent:AddCollisionComponent(SkeletalMeshComponent) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGroomComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomComponent:AddAssetUserDataOfClass(InUserDataClass) end

