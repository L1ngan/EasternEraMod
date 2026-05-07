---GeometryCollectionComponent
---@class UGeometryCollectionComponent : UMeshComponent
---@field public ChaosSolverActor AChaosSolverActor @Chaos RBD Solver override. Will use the world's default solver actor if null.
---@field public RestCollection UGeometryCollection
---@field public InitializationFields TArray<AFieldSystemActor>
---@field public ObjectType EObjectStateTypeEnum @ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic.
---@field public GravityGroupIndex integer
---@field public OneWayInteractionLevel integer @All bodies with a level greater than or equal to this will have One-Way Interaction enabled and act like debris (will not apply forces to non-debris bodies) Set to -1 to disable (no bodies will have One-Way Interaction enabled)
---@field public bDensityFromPhysicsMaterial boolean @when true, density will be used to compute mass using the assigned physics material
---@field public bForceMotionBlur boolean @If ForceMotionBlur is on, motion blur will always be active, even if the GeometryCollection is at rest.
---@field public EnableClustering boolean
---@field public ClusterGroupIndex integer @Cluster group index - Geometry Collections using the same index will simulate as one single cluster.
---@field public MaxClusterLevel integer @Maximum level for cluster breaks.
---@field public MaxSimulatedLevel integer @The maximum level to create rigid bodies that could be simulated.       Example: If we have a Geometry Collection with 2 levels, where:       0 = Root       1 = Clusters       2 = Leaf Nodes       A setting of '1' would only generate a physics representation of the Root transform and Level 1 clusters.       The leaf nodes on Level 2 would never be created on the solver, and would therefore never be considered as part of the simulation.
---@field public DamageModel EDamageModelTypeEnum @Damage model to use for evaluating destruction.
---@field public DamageThreshold TArray<number>
---@field public bUseSizeSpecificDamageThreshold boolean @Damage threshold for clusters at different levels.
---@field public bUseMaterialDamageModifiers boolean @When on , use the modifiers on the material to adjust the user defined damage threshold values
---@field public DamagePropagationData FGeometryCollectionDamagePropagationData @Data about how damage propagation shoudl behave.
---@field public bEnableDamageFromCollision boolean @Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture.
---@field public bAllowRemovalOnSleep boolean @Allow removal on sleep for the instance if the rest collection has it enabled
---@field public bAllowRemovalOnBreak boolean @Allow removal on break for the instance if the rest collection has it enabled
---@field public bForceUpdateActiveTransforms boolean @Update transforms of active particles even when they are not moving. Has performance implications. Use only when GC is a child of a moving actor, to prevent released particle 'following the actor around'
---@field public CollisionGroup integer
---@field public CollisionSampleFraction number @Fraction of collision sample particles to keep
---@field public InitialVelocityType EInitialVelocityTypeEnum
---@field public InitialLinearVelocity FVector
---@field public InitialAngularVelocity FVector
---@field public CacheParameters FGeomComponentCacheParameters
---@field public RestTransforms TArray<FTransform> @Optional transforms to initialize scene proxy if difference from the RestCollection.
---@field public NotifyGeometryCollectionPhysicsStateChange MulticastDelegate
---@field public NotifyGeometryCollectionPhysicsLoadingStateChange MulticastDelegate
---@field public OnChaosBreakEvent MulticastDelegate
---@field public OnChaosRemovalEvent MulticastDelegate
---@field public OnChaosCrumblingEvent MulticastDelegate
---@field public DesiredCacheTime number
---@field public CachePlayback boolean
---@field public OnChaosPhysicsCollision MulticastDelegate
---@field public bNotifyBreaks boolean @If true, this component will generate breaking events that other systems may subscribe to.
---@field public bNotifyCollisions boolean @If true, this component will generate collision events that other systems may subscribe to.
---@field public bNotifyTrailing boolean @If true, this component will generate trailing events that other systems may subscribe to.
---@field public bNotifyRemovals boolean @If true, this component will generate removal events that other systems may subscribe to.
---@field public bNotifyCrumblings boolean @If true, this component will generate crumbling events that other systems may subscribe to.
---@field public bCrumblingEventIncludesChildren boolean @If this and bNotifyCrumblings are true, the crumbling events will contain released children indices.
---@field public bNotifyGlobalBreaks boolean @If true, this component will generate breaking events that will be listened by the global event relay.
---@field public bNotifyGlobalCollisions boolean @If true, this component will generate collision events  that will be listened by the global event relay.
---@field public bNotifyGlobalRemovals boolean @If true, this component will generate removal events  that will be listened by the global event relay.
---@field public bNotifyGlobalCrumblings boolean @If true, this component will generate crumbling events  that will be listened by the global event relay.
---@field public bGlobalCrumblingEventIncludesChildren boolean @If this and bNotifyGlobalCrumblings are true, the crumbling events will contain released children indices.
---@field public bStoreVelocities boolean @If true, this component will save linear and angular velocities on its DynamicCollection.
---@field public bIsCurrentlyNavigationRelevant boolean
---@field protected bShowBoneColors boolean @Display Bone Colors instead of assigned materials
---@field protected bUpdateComponentTransformToRootBone boolean @Relocate the component so that the original offset to the root bone is maintained This only works when the root bone is moving whole being dynamically simulated Note: Once the root element is broken, the component will no longer update its position
---@field protected bUseRootProxyForNavigation boolean
---@field protected bUpdateNavigationInTick boolean
---@field protected bEnableRunTimeDataCollection boolean
---@field protected RunTimeDataCollectionGuid FGuid
---@field protected bEnableReplication boolean @Per-instance override to enable/disable replication for the geometry collection
---@field protected bEnableAbandonAfterLevel boolean @Enables use of ReplicationAbandonAfterLevel to stop providing network updates to clients when the updated particle is of a level higher then specified.
---@field protected AbandonedCollisionProfileName string @Whether abandoned particles on the client should continue to have collision (i.e. still be in the external/internal acceleration structure).
---@field protected CustomRendererType TSubclassOf<UObject> @Custom class type that will be used to render the geometry collection instead of using the native rendering.
---@field protected bOverrideCustomRenderer boolean @If true, CustomRendererType will be used. If false, CustomRendererType comes from the RestCollection.
---@field protected bUseStaticMeshCollisionForTraces boolean @todo(chaos): Remove the ability to change this at runtime, as we'll want to use this at cook time instead
---@field protected CustomRenderer TScriptInterface<UGeometryCollectionExternalRenderInterface> @A custom renderer object created from CustomRenderType.
---@field protected CollisionProfilePerLevel TArray<string> @A per-level collision profile name. If the name is set to NONE or an invalid collision profile, nothing will be changed. If the there are more levels than elements in this array, then each level will use the index that best matches it. For example, if the particle is level 2, and there is only 1 element in the array, then the particle will use the 0th collision profile. AbandonedCollisionProfileName will override this on the client when relevant.
---@field protected ReplicationAbandonAfterLevel integer @If replicating - the cluster level after which replication will not happen
---@field protected ReplicationMaxPositionAndVelocityCorrectionLevel integer @If replicating - the maximum level where clusters will have their position and velocity send over to the client for tracking and correcting When breaking, client will only receive the initial break velocity This helps save bandwidth where only the destruction state of the GC is to be replicated but the falling pieces do not need to be tracked precisely
---@field protected RepData FGeometryCollectionRepData
---@field protected RepStateData FGeometryCollectionRepStateData
---@field protected RepDynamicData FGeometryCollectionRepDynamicData
---@field private SelectedBones TArray<integer>
---@field private HighlightedBones TArray<integer>
---@field private DummyBodySetup UBodySetup @Temporary storage for body setup in order to initialise a dummy body instance
---@field private EditorActor AActor @Tracked editor actor that owns the original component so we can write back recorded caches from PIE.
---@field private EventDispatcher UChaosGameplayEventDispatcher @Event dispatcher for break, crumble, removal and collision events
---@field private EmbeddedGeometryComponents TArray<UInstancedStaticMeshComponent> @The information of all the embedded instanced static meshes
local UGeometryCollectionComponent = {}

---todo(chaos): Remove this and move to a cook time approach of the SM data based on the GC property
---@param bInUseStaticMeshCollisionForTraces boolean
function UGeometryCollectionComponent:SetUseStaticMeshCollisionForTraces(bInUseStaticMeshCollisionForTraces) end

---@param bInUseMaterialDamageModifiers boolean
function UGeometryCollectionComponent:SetUseMaterialDamageModifiers(bInUseMaterialDamageModifiers) end

---BP internal function to set the solver actor
---@param InSolverActor AChaosSolverActor
function UGeometryCollectionComponent:SetSolverActor(InSolverActor) end

---blueprint function to set a specific root proxy local transform
---warning: when called from C++ and calling it on multiple root proxies it is recommended to use SetRootProxyLocalTransform instead and then call RefreshCustomRenderer
---to avoid the cost of refreshing the renderer each time
---@param Index integer
---@param RootProxyTransform FTransform
function UGeometryCollectionComponent:SetRootProxyComponentSpaceTransform(Index, RootProxyTransform) end

---RestCollection
---@param RestCollectionIn UGeometryCollection
---@param bApplyAssetDefaults boolean @[opt] 
function UGeometryCollectionComponent:SetRestCollection(RestCollectionIn, bApplyAssetDefaults) end

---@param BoneIds TArray_integer_
---@param ProfileName string
function UGeometryCollectionComponent:SetPerParticleCollisionProfileName(BoneIds, ProfileName) end

---@param ProfileNames TArray_string_
function UGeometryCollectionComponent:SetPerLevelCollisionProfileNames(ProfileNames) end

---@param InOneWayInteractionLevel integer
function UGeometryCollectionComponent:SetOneWayInteractionLevel(InOneWayInteractionLevel) end

---Changes whether or not this component will get future removal notifications.
---@param bNewNotifyRemovals boolean
function UGeometryCollectionComponent:SetNotifyRemovals(bNewNotifyRemovals) end

---Changes whether or not this component will get future global removal notifications.
---@param bNewNotifyGlobalRemovals boolean
function UGeometryCollectionComponent:SetNotifyGlobalRemovals(bNewNotifyGlobalRemovals) end

---Changes whether or not this component will get future global crumbling notifications.
---@param bNewNotifyGlobalCrumblings boolean
---@param bGlobalNewCrumblingEventIncludesChildren boolean
function UGeometryCollectionComponent:SetNotifyGlobalCrumblings(bNewNotifyGlobalCrumblings, bGlobalNewCrumblingEventIncludesChildren) end

---Changes whether or not this component will get future global collision notifications.
---@param bNewNotifyGlobalCollisions boolean
function UGeometryCollectionComponent:SetNotifyGlobalCollision(bNewNotifyGlobalCollisions) end

---Changes whether or not this component will get future global break notifications.
---@param bNewNotifyGlobalBreaks boolean
function UGeometryCollectionComponent:SetNotifyGlobalBreaks(bNewNotifyGlobalBreaks) end

---Changes whether or not this component will get future crumbling notifications.
---@param bNewNotifyCrumblings boolean
---@param bNewCrumblingEventIncludesChildren boolean @[opt] 
function UGeometryCollectionComponent:SetNotifyCrumblings(bNewNotifyCrumblings, bNewCrumblingEventIncludesChildren) end

---Changes whether or not this component will get future break notifications.
---@param bNewNotifyBreaks boolean
function UGeometryCollectionComponent:SetNotifyBreaks(bNewNotifyBreaks) end

---Set the local rest transform, this may be different from the rest collection
---If the geometry collection is already simulating those matrices will be overriden by the physics state updates
---@param Transforms TArray_FTransform_
---@param bOnlyLeaves boolean
function UGeometryCollectionComponent:SetLocalRestTransforms(Transforms, bOnlyLeaves) end

---@param InGravityGroupIndex integer
function UGeometryCollectionComponent:SetGravityGroupIndex(InGravityGroupIndex) end

---@param bValue boolean
function UGeometryCollectionComponent:SetEnableDamageFromCollision(bValue) end

---@param bInDensityFromPhysicsMaterial boolean
function UGeometryCollectionComponent:SetDensityFromPhysicsMaterial(bInDensityFromPhysicsMaterial) end

---@param InDamageThreshold TArray_number_
function UGeometryCollectionComponent:SetDamageThreshold(InDamageThreshold) end

---@param InDamagePropagationData FGeometryCollectionDamagePropagationData
function UGeometryCollectionComponent:SetDamagePropagationData(InDamagePropagationData) end

---@param InDamageModel EDamageModelTypeEnum
function UGeometryCollectionComponent:SetDamageModel(InDamageModel) end

---Set all pieces within a world transformed bounding box to be anchored or not
---@param Box FBox
---@param Transform FTransform
---@param bAnchored boolean
---@param MaxLevel integer @[opt] 
function UGeometryCollectionComponent:SetAnchoredByTransformedBox(Box, Transform, bAnchored, MaxLevel) end

---Set a piece or cluster to be anchored or not
---@param Index integer
---@param bAnchored boolean
function UGeometryCollectionComponent:SetAnchoredByIndex(Index, bAnchored) end

---Set all pieces within a world space bounding box to be anchored or not
---@param WorldSpaceBox FBox
---@param bAnchored boolean
---@param MaxLevel integer @[opt] 
function UGeometryCollectionComponent:SetAnchoredByBox(WorldSpaceBox, bAnchored, MaxLevel) end

---@param CollisionProfile string
function UGeometryCollectionComponent:SetAbandonedParticleCollisionProfileName(CollisionProfile) end

---this will remove anchors on all the pieces ( including the static and kinematic initial states ones ) of the geometry colection
function UGeometryCollectionComponent:RemoveAllAnchors() end

---@param CollisionInfo FChaosPhysicsCollisionInfo
function UGeometryCollectionComponent:ReceivePhysicsCollision(CollisionInfo) end

function UGeometryCollectionComponent:OnRep_RepStateData() end

function UGeometryCollectionComponent:OnRep_RepDynamicData() end

---Called post solve to allow authoritative components to update their replication data
function UGeometryCollectionComponent:OnRep_RepData() end

---Blueprint event
---@param FracturedComponent UGeometryCollectionComponent
function UGeometryCollectionComponent:NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(FracturedComponent) end

---@param FracturedComponent UGeometryCollectionComponent
function UGeometryCollectionComponent:NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(FracturedComponent) end

---return true if the root cluster is not longer active at runtime
---@return boolean
function UGeometryCollectionComponent:IsRootBroken() end

---todo(chaos): Remove this and move to a cook time approach of the SM data based on the GC property
---@return boolean
function UGeometryCollectionComponent:GetUseStaticMeshCollisionForTraces() end

---BP internal function to get the solver actor
---@return AChaosSolverActor
function UGeometryCollectionComponent:GetSolverActor() end

---Get the root item initial transform in world space
---@return FTransform
function UGeometryCollectionComponent:GetRootInitialTransform() end

---Get the root item index of the hierarchy
---@return integer
function UGeometryCollectionComponent:GetRootIndex() end

---Get the root item current world transform
---@return FTransform
function UGeometryCollectionComponent:GetRootCurrentTransform() end

---Get mass and extent of a specific piece
---@param ItemIndex integer
---@param OutMass number @[out] 
---@param OutExtents FBox @[out] 
function UGeometryCollectionComponent:GetMassAndExtents(ItemIndex, OutMass, OutExtents) end

---Get the rest transforms in component (local) space  space,
---if none have been set by SetLocalRestTransforms or if RestTransform property is empty , then the initial ones are returned
---@param bInitialTransforms boolean @[opt] 
---@return TArray_FTransform_
function UGeometryCollectionComponent:GetLocalRestTransforms(bInitialTransforms) end

---Get local bounds of the geometry collection
---@return FBox
function UGeometryCollectionComponent:GetLocalBounds() end

---Get the initial rest transforms in component (local) space  space,
---they are the transforms as defined in the rest collection asset
---@return TArray_FTransform_
function UGeometryCollectionComponent:GetInitialLocalRestTransforms() end

---Get the initial level of a specific piece
---Initial level means the level as it is in the unbroken state
---@param ItemIndex integer
---@return integer
function UGeometryCollectionComponent:GetInitialLevel(ItemIndex) end

---RestCollection
---@return string
function UGeometryCollectionComponent:GetDebugInfo() end

---@return TArray_number_
function UGeometryCollectionComponent:GetDamageThreshold() end

---Force any custom renderer to render using the broken/decayed path. This can be set at runtime
---@param bForceBroken boolean
function UGeometryCollectionComponent:ForceBrokenForCustomRenderer(bForceBroken) end

---@param bEnable boolean
function UGeometryCollectionComponent:EnableRootProxyForCustomRenderer(bEnable) end

---Crumbe a cluster into all its pieces
---@param ItemIndex integer
function UGeometryCollectionComponent:CrumbleCluster(ItemIndex) end

---Crumbe active clusters for this entire geometry collection
---this will apply to internal and regular clusters
function UGeometryCollectionComponent:CrumbleActiveClusters() end

---AddPhysicsField
---  This function will dispatch a command to the physics thread to apply
---  a generic evaluation of a user defined transient field network. See documentation,
---  for examples of how to recreate variations of the above generic
---  fields using field networks
---      @@param Enabled Is this force enabled for evaluation.
---  @@param Target Type of field supported by the solver.
---  @@param MetaData Meta data used to assist in evaluation
---  @@param Field Base evaluation node for the field network.
---@param Enabled boolean
---@param Target EGeometryCollectionPhysicsTypeEnum
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UGeometryCollectionComponent:ApplyPhysicsField(Enabled, Target, MetaData, Field) end

---Apply linear velocity on specific piece
---@param ItemIndex integer
---@param LinearVelocity FVector
function UGeometryCollectionComponent:ApplyLinearVelocity(ItemIndex, LinearVelocity) end

---SetDynamicState
---  This function will dispatch a command to the physics thread to apply
---  a kinematic to dynamic state change for the geo collection particles within the field.
---      @@param Radius Radial influence from the position
---  @@param Position The location of the command
---@param Radius number
---@param Position FVector
function UGeometryCollectionComponent:ApplyKinematicField(Radius, Position) end

---Apply an internal strain to specific piece of the geometry collection
---@param ItemIndex integer
---@param Location FVector
---@param Radius number @[opt] 
---@param PropagationDepth integer @[opt] 
---@param PropagationFactor number @[opt] 
---@param Strain number @[opt] 
function UGeometryCollectionComponent:ApplyInternalStrain(ItemIndex, Location, Radius, PropagationDepth, PropagationFactor, Strain) end

---Apply an external strain to specific piece of the geometry collection
---@param ItemIndex integer
---@param Location FVector
---@param Radius number @[opt] 
---@param PropagationDepth integer @[opt] 
---@param PropagationFactor number @[opt] 
---@param Strain number @[opt] 
function UGeometryCollectionComponent:ApplyExternalStrain(ItemIndex, Location, Radius, PropagationDepth, PropagationFactor, Strain) end

---Apply linear velocity on breaking pieces for a specific cluster
---If ItemIndex does not represent a cluster this will do nothing
---@param ItemIndex integer
---@param LinearVelocity FVector
function UGeometryCollectionComponent:ApplyBreakingLinearVelocity(ItemIndex, LinearVelocity) end

---Apply linear velocity on breaking pieces for a specific cluster
---If ItemIndex does not represent a cluster this will do nothing
---@param ItemIndex integer
---@param AngularVelocity FVector
function UGeometryCollectionComponent:ApplyBreakingAngularVelocity(ItemIndex, AngularVelocity) end

---Apply default values from asset ( damage related data and physics material )
function UGeometryCollectionComponent:ApplyAssetDefaults() end

---Apply angular velocity on specific piece
---@param ItemIndex integer
---@param AngularVelocity FVector
function UGeometryCollectionComponent:ApplyAngularVelocity(ItemIndex, AngularVelocity) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCollectionComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGeometryCollectionComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCollectionComponent:AddAssetUserDataOfClass(InUserDataClass) end

