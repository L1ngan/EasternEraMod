---Actor is the base class for an Object that can be placed or spawned in a level.
---Actors may contain a collection of ActorComponents, which can be used to control how actors move, how they are rendered, etc.
---The other main function of an Actor is the replication of properties and function calls across the network during play.
---Actor initialization has multiple steps, here's the order of important virtual functions that get called:
---- UObject::PostLoad: For actors statically placed in a level, the normal UObject PostLoad gets called both in the editor and during gameplay.
---                     This is not called for newly spawned actors.
---- UActorComponent::OnComponentCreated: When an actor is spawned in the editor or during gameplay, this gets called for any native components.
---                                       For blueprint-created components, this gets called during construction for that component.
---                                       This is not called for components loaded from a level.
---- AActor::PreRegisterAllComponents: For statically placed actors and spawned actors that have native root components, this gets called now.
---                                    For blueprint actors without a native root component, these registration functions get called later during construction.
---- UActorComponent::RegisterComponent: All components are registered in editor and at runtime, this creates their physical/visual representation.
---                                      These calls may be distributed over multiple frames, but are always after PreRegisterAllComponents.
---                                      This may also get called later on after an UnregisterComponent call removes it from the world.
---- AActor::PostRegisterAllComponents: Called for all actors both in the editor and in gameplay, this is the last function that is called in all cases.
---- AActor::PostActorCreated: When an actor is created in the editor or during gameplay, this gets called right before construction.
---                            This is not called for components loaded from a level.
---- AActor::UserConstructionScript: Called for blueprints that implement a construction script.
---- AActor::OnConstruction: Called at the end of ExecuteConstruction, which calls the blueprint construction script.
---                          This is called after all blueprint-created components are fully created and registered.
---                          This is only called during gameplay for spawned actors, and may get rerun in the editor when changing blueprints.
---- AActor::PreInitializeComponents: Called before InitializeComponent is called on the actor's components.
---                                   This is only called during gameplay and in certain editor preview windows.
---- UActorComponent::Activate: This will be called only if the component has bAutoActivate set.
---                             It will also got called later on if a component is manually activated.
---- UActorComponent::InitializeComponent: This will be called only if the component has bWantsInitializeComponentSet.
---                                        This only happens once per gameplay session.
---- AActor::PostInitializeComponents: Called after the actor's components have been initialized, only during gameplay and some editor previews.
---- AActor::BeginPlay: Called when the level starts ticking, only during actual gameplay.
---                     This normally happens right after PostInitializeComponents but can be delayed for networked or child actors.
---@class AActor : UObject
---@field public PrimaryActorTick FActorTickFunction @Primary Actor tick function, which calls TickActor(). Tick functions can be configured to control whether ticking is enabled, at what time during a frame the update occurs, and to set up tick dependencies.
---@field public bNetTemporary boolean @If true, when the actor is spawned it will be sent to the client but receive no further replication updates from the server afterwards.
---@field public bOnlyRelevantToOwner boolean @If true, this actor is only relevant to its owner. If this flag is changed during play, all non-owner channels would need to be explicitly closed.
---@field public bAlwaysRelevant boolean @Always relevant for network (overrides bOnlyRelevantToOwner).
---@field private bReplicateMovement boolean @If true, replicate movement/location related properties. Actor must also be set to replicate.
---@field private bCallPreReplication boolean
---@field private bCallPreReplicationForReplay boolean
---@field private bHidden boolean @Allows us to only see this Actor in the Editor, and not in the actual game.
---@field private bTearOff boolean
---@field private bForceNetAddressable boolean @When set, indicates that external guarantees ensure that this actor's name is deterministic between server and client, and as such can be addressed by its full path
---@field private LevelInstanceType ELevelInstanceType @Whether this actor belongs to a level instance or not and what type of level instance.
---@field private LevelInstanceFlags ELevelInstanceFlags @Flags related to level instances for this actor.
---@field public bIsMainWorldOnly boolean @If checked, this Actor will only get loaded in a main world (persistent level), it will not be loaded through Level Instances.
---@field public bIgnoreInPIE boolean @Experimental: this will force this actor to be ignored in PIE, will not work if the actor has references to other actors without the flag set, use with care.
---@field public bExchangedRoles boolean @Whether we have already exchanged Role/RemoteRole on the client, as when removing then re-adding a streaming level. Causes all initialization to be performed again even though the actor may not have actually been reloaded.
---@field public bNetLoadOnClient boolean @This actor will be loaded on network clients during map load
---@field public bNetUseOwnerRelevancy boolean @If actor has valid Owner, call Owner's IsNetRelevantFor and GetNetPriority
---@field public bRelevantForNetworkReplays boolean @If true, this actor will be replicated to network replays (default is true)
---@field public bRelevantForLevelBounds boolean @If true, this actor's component's bounds will be included in the level's bounding box unless the Actor's class has overridden IsLevelBoundsRelevant
---@field public bReplayRewindable boolean @If true, this actor will only be destroyed during scrubbing if the replay is set to a time before the actor existed. Otherwise, RewindForReplay will be called if we detect the actor needs to be reset. Note, this Actor must not be destroyed by gamecode, and RollbackViaDeletion may not be used.
---@field public bAllowTickBeforeBeginPlay boolean @Whether we allow this Actor to tick before it receives the BeginPlay event. Normally we don't tick actors until after BeginPlay; this setting allows this behavior to be overridden. This Actor must be able to tick for this setting to be relevant.
---@field private bAutoDestroyWhenFinished boolean @If true then destroy self when "finished", meaning all relevant components report that they are done and no timelines or timers are in flight.
---@field private bCanBeDamaged boolean @Whether this actor can take damage. Must be true for damage events (e.g. ReceiveDamage()) to be called.
---@field public bBlockInput boolean @If true, all input on the stack below this actor will not be considered
---@field public bCollideWhenPlacing boolean @This actor collides with the world when placing in the editor, even if RootComponent collision is disabled. Does not affect spawning, @@see SpawnCollisionHandlingMethod
---@field public bFindCameraComponentWhenViewTarget boolean @If true, this actor should search for an owned camera component to view through when used as a view target.
---@field public bGenerateOverlapEventsDuringLevelStreaming boolean @If true, this actor will generate overlap Begin/End events when spawned as part of level streaming, which includes initial level load. You might enable this is in the case where a streaming level loads around an actor and you want Begin/End overlap events to trigger.
---@field public bIgnoresOriginShifting boolean @Whether this actor should not be affected by world origin shifting.
---@field public bEnableAutoLODGeneration boolean @Whether this actor should be considered or not during HLOD generation.
---@field public bIsEditorOnlyActor boolean @Whether this actor is editor-only. Use with care, as if this actor is referenced by anything else that reference will be NULL in cooked builds
---@field protected bReplicates boolean @If true, this actor will replicate to remote machines
---@field protected bCanBeInCluster boolean @If true, this actor can be put inside of a GC Cluster to improve Garbage Collection performance
---@field protected bAllowReceiveTickEventOnDedicatedServer boolean @If false, the Blueprint ReceiveTick() event will be disabled on dedicated servers.
---@field protected bReplicateUsingRegisteredSubObjectList boolean @When true the replication system will only replicate the registered subobjects and the replicated actor components list When false the replication system will instead call the virtual ReplicateSubobjects() function where the subobjects and actor components need to be manually replicated.
---@field private bActorEnableCollision boolean @Enables any collision on this actor.
---@field private bActorIsBeingDestroyed boolean @Set when actor is about to be deleted. Needs to be a FProperty so it is included in transactions.
---@field protected bAsyncPhysicsTickEnabled boolean @Whether to use use the async physics tick with this actor.
---@field protected UpdateOverlapsMethodDuringLevelStreaming EActorUpdateOverlapsMethod @Condition for calling UpdateOverlaps() to initialize overlap state when loaded in during level streaming. If set to 'UseConfigDefault', the default specified in ini (displayed in 'DefaultUpdateOverlapsMethodDuringLevelStreaming') will be used. If overlaps are not initialized, this actor and attached components will not have an initial state of what objects are touching it, and overlap events may only come in once one of those objects update overlaps themselves (for example when moving). However if an object touching it *does* initialize state, both objects will know about their touching state with each other. This can be a potentially large performance savings during level loading and streaming, and is safe if the object and others initially overlapping it do not need the overlap state because they will not trigger overlap notifications. Note that if 'bGenerateOverlapEventsDuringLevelStreaming' is true, overlaps are always updated in this case, but that flag determines whether the Begin/End overlap events are triggered.
---@field private DefaultUpdateOverlapsMethodDuringLevelStreaming EActorUpdateOverlapsMethod @Default value taken from config file for this class when 'UseConfigDefault' is chosen for 'UpdateOverlapsMethodDuringLevelStreaming'. This allows a default to be chosen per class in the matching config. For example, for Actor it could be specified in DefaultEngine.ini as: [/Script/Engine.Actor] DefaultUpdateOverlapsMethodDuringLevelStreaming = OnlyUpdateMovable Another subclass could set their default to something different, such as: [/Script/Engine.BlockingVolume] DefaultUpdateOverlapsMethodDuringLevelStreaming = NeverUpdate
---@field private RemoteRole integer @Describes how much control the remote machine has over the actor.
---@field public InitialLifeSpan number @How long this Actor lives before dying, 0=forever. Note this is the INITIAL value and should not be modified once play has begun.
---@field public CustomTimeDilation number @Allow each actor to run at a different time speed. The DeltaTime for a frame is multiplied by the global TimeDilation (in WorldSettings) and this CustomTimeDilation for this actor's tick.
---@field private RayTracingGroupId integer @The RayTracingGroupId this actor and its components belong to. (For components that did not specify any)
---@field protected RuntimeGrid string @Determine in which partition grid this actor will be placed in the partition (if the world is partitioned). If None, the decision will be left to the partition.
---@field protected AttachmentReplication FRepAttachment @Used for replicating attachment of this actor's RootComponent to another actor. This is filled in via GatherCurrentMovement() when the RootComponent has an AttachParent.
---@field private ReplicatedMovement FRepMovement @Used for replication of our RootComponent's position and velocity
---@field public Owner AActor @Owner of this Actor, used primarily for replication (bNetUseOwnerRelevancy & bOnlyRelevantToOwner) and visibility (PrimitiveComponent bOwnerNoSee and bOnlyOwnerSee)
---@field protected NetDriverName string @Used to specify the net driver to replicate on (NAME_None || NAME_GameNetDriver is the default net driver)
---@field private Role integer @Describes how much control the local machine has over the actor.
---@field public NetDormancy integer @Dormancy setting for actor to take itself off of the replication list without being destroyed on clients.
---@field public SpawnCollisionHandlingMethod ESpawnActorCollisionHandlingMethod @Controls how to handle spawning this actor in a situation where it's colliding with something else. "Default" means AlwaysSpawn here.
---@field public AutoReceiveInput integer @Automatically registers this actor to receive input from a player.
---@field public InputPriority integer @The priority of this input component when pushed in to the stack.
---@field public InputComponent UInputComponent @Component that handles input for this actor, if input is enabled.
---@field public NetTag integer @Internal - used by UNetDriver
---@field public NetCullDistanceSquared number
---@field public NetUpdateFrequency number
---@field public MinNetUpdateFrequency number
---@field public NetPriority number @Priority for this actor when checking for replication in a low bandwidth or saturated situation, higher priority means it is more likely to replicate
---@field private PhysicsReplicationMode EPhysicsReplicationMode @Which mode to replicate physics through for this actor. Only relevant if the actor replicates movement and has a component that simulate physics.
---@field private Instigator APawn @Pawn responsible for damage and other gameplay events caused by this actor.
---@field public Children TArray<AActor> @Array of all Actors whose Owner is this actor, these are not necessarily spawned by UChildActorComponent
---@field protected RootComponent USceneComponent @The component that defines the transform (location, rotation, scale) of this Actor in the world, all other components must be attached to this one somehow
---@field protected PivotOffset FVector @Local space pivot offset for the actor, only used in the editor
---@field private HLODLayer UHLODLayer @The UHLODLayer in which this actor should be included.
---@field private ObjectsDetachedFromExternalPackage TArray<UObject> @Temporary list of objects that were outered to this actor's external package. Used when detaching/attaching external actor packages during cook.
---@field public Layers TArray<string> @Layers the actor belongs to.  This is outside of the editoronly data to allow hiding of LD-specified layers at runtime for profiling.
---@field private ParentComponent TWeakObjectPtr<UChildActorComponent> @The UChildActorComponent that owns this Actor.
---@field protected ActorGuid FGuid @The GUID for this actor; this guid will be the same for actors from instanced streaming levels.                      See FActorDetails::AddActorCategory and EditorUtilities::CopySingleProperty for details.
---@field protected ActorInstanceGuid FGuid @The instance GUID for this actor; this guid will be unique for actors from instanced streaming levels.
---@field protected ContentBundleGuid FGuid @The GUID for this actor's content bundle.
---@field protected DataLayers TArray<FActorDataLayer> @DataLayers the actor belongs to.
---@field protected DataLayerAssets TArray<TSoftObjectPtr<UDataLayerAsset>> @DataLayers assets the actor belongs to.
---@field protected ExternalDataLayerAsset UExternalDataLayerAsset
---@field public GroupActor AActor @The editor-only group this actor is a part of.
---@field public SpriteScale number @The scale to apply to any billboard components in editor builds (happens in any WITH_EDITOR build, including non-cooked games).
---@field public HiddenEditorViews integer @Bitflag to represent which views this actor is hidden in, via per-view layer visibility.
---@field private ActorLabel string @The friendly name for this actor, displayed in the editor.  You should always use AActor::GetActorLabel() to access the actual label to display, and call AActor::SetActorLabel() or FActorLabelUtilities::SetActorLabelUnique() to change the label.  Never set the label directly.
---@field private FolderPath string @The folder path of this actor in the world. If the actor's level uses the actor folder objects feature, the path is computed using FolderGuid. If not, it contains the actual path (empty=root, / separated).
---@field private FolderGuid FGuid @If the actor's level uses the actor folder objects feature, contains the actor folder unique identifier (invalid=root).
---@field public bHiddenEd boolean @Whether this actor is hidden within the editor viewport.
---@field public bIsEditorPreviewActor boolean @True if this actor is the preview actor dragged out of the content browser
---@field public bHiddenEdLayer boolean @Whether this actor is hidden by the layer browser.
---@field public bHiddenEdLevel boolean @Whether this actor is hidden by the level browser.
---@field protected bLockLocation boolean @If true, prevents the actor from being moved in the editor viewport.
---@field protected bActorLabelEditable boolean @Is the actor label editable by the user?
---@field protected bEditable boolean @Whether the actor can be manipulated by editor operations.
---@field protected bListedInSceneOutliner boolean @Whether this actor should be listed in the scene outliner.
---@field protected bOptimizeBPComponentData boolean @Whether to cook additional data to speed up spawn events at runtime for any Blueprint classes based on this Actor. This option may slightly increase memory usage in a cooked build.
---@field protected bCanPlayFromHere boolean @Whether the actor can be used as a PlayFromHere origin (OnPlayFromHere() will be called on that actor)
---@field protected bIsSpatiallyLoaded boolean @Determine if this actor is spatially loaded when placed in a partitioned world.      If true, this actor will be loaded when in the range of any streaming sources and if (1) in no data layers, or (2) one or more of its data layers are enabled.      If false, this actor will be loaded if (1) in no data layers, or (2) one or more of its data layers are enabled.
---@field private bHiddenEdTemporary boolean @Whether this actor is temporarily hidden within the editor; used for show/hide/etc functionality w/o dirtying the actor.
---@field private bForceExternalActorLevelReferenceForPIE boolean
---@field public Tags TArray<string> @Array of tags that can be used for grouping and categorizing.
---@field public OnTakeAnyDamage MulticastDelegate @Called when the actor is damaged in any way.
---@field public OnTakePointDamage MulticastDelegate @Called when the actor is damaged by point damage.
---@field public OnTakeRadialDamage MulticastDelegate @Called when the actor is damaged by radial damage.
---@field public OnActorBeginOverlap MulticastDelegate @Called when another actor begins to overlap this actor, for example a player walking into a trigger. For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
---@field public OnActorEndOverlap MulticastDelegate @Called when another actor stops overlapping this actor.
---@field public OnBeginCursorOver MulticastDelegate @Called when the mouse cursor is moved over this actor if mouse over events are enabled in the player controller.
---@field public OnEndCursorOver MulticastDelegate @Called when the mouse cursor is moved off this actor if mouse over events are enabled in the player controller.
---@field public OnClicked MulticastDelegate @Called when the left mouse button is clicked while the mouse is over this actor and click events are enabled in the player controller.
---@field public OnReleased MulticastDelegate @Called when the left mouse button is released while the mouse is over this actor and click events are enabled in the player controller.
---@field public OnInputTouchBegin MulticastDelegate @Called when a touch input is received over this actor when touch events are enabled in the player controller.
---@field public OnInputTouchEnd MulticastDelegate @Called when a touch input is received over this component when touch events are enabled in the player controller.
---@field public OnInputTouchEnter MulticastDelegate @Called when a finger is moved over this actor when touch over events are enabled in the player controller.
---@field public OnInputTouchLeave MulticastDelegate @Called when a finger is moved off this actor when touch over events are enabled in the player controller.
---@field public OnActorHit MulticastDelegate @Called when this Actor hits (or is hit by) something solid. This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation. For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.
---@field public OnDestroyed MulticastDelegate @Event triggered when the actor has been explicitly destroyed.
---@field public OnEndPlay MulticastDelegate @Event triggered when the actor is being deleted or removed from a level.
---@field private InstanceComponents TArray<UActorComponent> @Array of ActorComponents that have been added by the user on a per-instance basis.
---@field public BlueprintCreatedComponents TArray<UActorComponent> @Array of ActorComponents that are created by blueprints and serialized per-instance.
local AActor = {}

---Returns true if this actor has been rendered "recently", with a tolerance in seconds to define what "recent" means.
---e.g.: If a tolerance of 0.1 is used, this function will return true only if the actor was rendered in the last 0.1 seconds of game time.
---@param Tolerance number @[opt] 
---@return boolean
function AActor:WasRecentlyRendered(Tolerance) end

---Construction script, the place to spawn components and do other setup.
function AActor:UserConstructionScript() end

---Unregister this actors root components physics object from being a focal particle in Physics Repliocation LOD
function AActor:UnregisterAsFocalPointInPhysicsReplicationLOD() end

---Networking - Server - TearOff this actor to stop replication to clients. Will set bTearOff to true.
function AActor:TearOff() end

---Sets the ticking group for this actor.
---@param NewTickGroup integer
function AActor:SetTickGroup(NewTickGroup) end

---Sets whether this actor can tick when paused.
---@param bTickableWhenPaused boolean
function AActor:SetTickableWhenPaused(bTickableWhenPaused) end

---Set whether this actor replicates to network clients. When this actor is spawned on the server it will be sent to clients as well.
---Properties flagged for replication will update on clients if they change on the server.
---Internally changes the RemoteRole property and handles the cases where the actor needs to be added to the network actor list.
---@param bInReplicates boolean
function AActor:SetReplicates(bInReplicates) end

---Set whether this actor's movement replicates to network clients.
---@param bInReplicateMovement boolean
function AActor:SetReplicateMovement(bInReplicateMovement) end

---Specify a RayTracingGroupId for this actors. Components with invalid RayTracingGroupId will inherit the actors.
---@param InRaytracingGroupId integer
function AActor:SetRayTracingGroupId(InRaytracingGroupId) end

---Set the physics replication mode of this body, via EPhysicsReplicationMode
---@param ReplicationMode EPhysicsReplicationMode
function AActor:SetPhysicsReplicationMode(ReplicationMode) end

---Set the owner of this Actor, used primarily for network replication.
---@param NewOwner AActor
function AActor:SetOwner(NewOwner) end

---Set the frequency at which this object will be considered for replication.
---@param Frequency number
function AActor:SetNetUpdateFrequency(Frequency) end

---Puts actor in dormant networking state
---@param NewDormancy integer
function AActor:SetNetDormancy(NewDormancy) end

---Set the square of the max distance from the client's viewpoint that this actor is relevant and will be replicated.
---@param DistanceSq number
function AActor:SetNetCullDistanceSquared(DistanceSq) end

---Set the frequency to throttle down to when replicated properties are changing infrequently.
---@param MinFrequency number
function AActor:SetMinNetUpdateFrequency(MinFrequency) end

---Set the lifespan of this actor. When it expires the object will be destroyed. If requested lifespan is 0, the timer is cleared and the actor will not be destroyed.
---@param InLifespan number
function AActor:SetLifeSpan(InLifespan) end

---Explicitly sets whether or not this actor is hidden in the editor for the duration of the current editor session
---@param bIsHidden boolean
function AActor:SetIsTemporarilyHiddenInEditor(bIsHidden) end

---Assigns a new folder to this actor. Actor folder paths are only available in development builds.
---@param NewFolderPath string
function AActor:SetFolderPath(NewFolderPath) end

---@param bVal boolean
function AActor:SetAutoDestroyWhenFinished(bVal) end

---Sets the tick interval of this actor's primary tick function. Will not enable a disabled tick function. Takes effect on next tick.
---@param TickInterval number
function AActor:SetActorTickInterval(TickInterval) end

---Set this actor's tick functions to be enabled or disabled. Only has an effect if the function is registered
---This only modifies the tick function on actor itself
---@param bEnabled boolean
function AActor:SetActorTickEnabled(bEnabled) end

---Set the Actor's world-space scale.
---@param NewScale3D FVector
function AActor:SetActorScale3D(NewScale3D) end

---Set the actor's RootComponent to the specified relative scale 3d
---@param NewRelativeScale FVector
function AActor:SetActorRelativeScale3D(NewRelativeScale) end

---Assigns a new label to this actor.  Actor labels are only available in development builds.
---@param NewActorLabel string
---@param bMarkDirty boolean @[opt] 
function AActor:SetActorLabel(NewActorLabel, bMarkDirty) end

---Sets the actor to be hidden in the game
---@param bNewHidden boolean
function AActor:SetActorHiddenInGame(bNewHidden) end

---Allows enabling/disabling collision for the whole actor
---@param bNewActorEnableCollision boolean
function AActor:SetActorEnableCollision(bNewActorEnableCollision) end

---Remove tick dependency on PrerequisiteComponent.
---@param PrerequisiteComponent UActorComponent
function AActor:RemoveTickPrerequisiteComponent(PrerequisiteComponent) end

---Remove tick dependency on PrerequisiteActor.
---@param PrerequisiteActor AActor
function AActor:RemoveTickPrerequisiteActor(PrerequisiteActor) end

---Register this actors root components physics object as a focal particle in Physics Repliocation LOD
function AActor:RegisterAsFocalPointInPhysicsReplicationLOD() end

---Event called every frame, if ticking is enabled
---@param DeltaSeconds number
function AActor:ReceiveTick(DeltaSeconds) end

---Event when this actor takes RADIAL damage
---@param DamageReceived number
---@param DamageType UDamageType
---@param Origin FVector
---@param HitInfo FHitResult
---@param InstigatedBy AController
---@param DamageCauser AActor
function AActor:ReceiveRadialDamage(DamageReceived, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser) end

---Event when this actor takes POINT damage
---@param Damage number
---@param DamageType UDamageType
---@param HitLocation FVector
---@param HitNormal FVector
---@param HitComponent UPrimitiveComponent
---@param BoneName string
---@param ShotFromDirection FVector
---@param InstigatedBy AController
---@param DamageCauser AActor
---@param HitInfo FHitResult
function AActor:ReceivePointDamage(Damage, DamageType, HitLocation, HitNormal, HitComponent, BoneName, ShotFromDirection, InstigatedBy, DamageCauser, HitInfo) end

---Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.
---This could happen due to things like Character movement, using Set Location with 'sweep' enabled, or physics simulation.
---For events when objects overlap (e.g. walking into a trigger) see the 'Overlap' event.
---will be adjusted to indicate force from the other object against this object.
---@param MyComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param bSelfMoved boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param NormalImpulse FVector
---@param Hit FHitResult
function AActor:ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit) end

---Event to notify blueprints this actor is being deleted or removed from a level.
---@param EndPlayReason integer
function AActor:ReceiveEndPlay(EndPlayReason) end

---Called when the actor has been explicitly destroyed.
function AActor:ReceiveDestroyed() end

---Event when play begins for this actor.
function AActor:ReceiveBeginPlay() end

---Event called every physics tick if bAsyncPhysicsTickEnabled is true
---@param DeltaSeconds number
---@param SimSeconds number
function AActor:ReceiveAsyncPhysicsTick(DeltaSeconds, SimSeconds) end

---Event when this actor takes ANY damage
---@param Damage number
---@param DamageType UDamageType
---@param InstigatedBy AController
---@param DamageCauser AActor
function AActor:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser) end

---Event when this actor is under the mouse when left mouse button is released while using the clickable interface.
---@param ButtonReleased FKey
function AActor:ReceiveActorOnReleased(ButtonReleased) end

---Event when this actor has a finger moved off of it with the clickable interface.
---@param FingerIndex integer
function AActor:ReceiveActorOnInputTouchLeave(FingerIndex) end

---Event when this actor has a finger moved over it with the clickable interface.
---@param FingerIndex integer
function AActor:ReceiveActorOnInputTouchEnter(FingerIndex) end

---Event when this actor is under the finger when untouched when click events are enabled.
---@param FingerIndex integer
function AActor:ReceiveActorOnInputTouchEnd(FingerIndex) end

---Event when this actor is touched when click events are enabled.
---@param FingerIndex integer
function AActor:ReceiveActorOnInputTouchBegin(FingerIndex) end

---Event when this actor is clicked by the mouse when using the clickable interface.
---@param ButtonPressed FKey
function AActor:ReceiveActorOnClicked(ButtonPressed) end

---Event when an actor no longer overlaps another actor, and they have separated.
---@param OtherActor AActor
function AActor:ReceiveActorEndOverlap(OtherActor) end

---Event when this actor has the mouse moved off of it with the clickable interface.
function AActor:ReceiveActorEndCursorOver() end

---Event when this actor overlaps another actor, for example a player walking into a trigger.
---For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
---@param OtherActor AActor
function AActor:ReceiveActorBeginOverlap(OtherActor) end

---Event when this actor has the mouse moved over it with the clickable interface.
function AActor:ReceiveActorBeginCursorOver() end

---Calls PrestreamTextures() for all the actor's meshcomponents.
---@param Seconds number
---@param bEnableStreaming boolean
---@param CinematicTextureGroups integer @[opt] 
function AActor:PrestreamTextures(Seconds, bEnableStreaming, CinematicTextureGroups) end

---Called on client when updated bReplicateMovement value is received for this actor.
function AActor:OnRep_ReplicateMovement() end

---ReplicatedMovement struct replication event
function AActor:OnRep_ReplicatedMovement() end

---Called when owner changes, does nothing by default but can be overridden
function AActor:OnRep_Owner() end

---Called on clients when Instigator is replicated.
function AActor:OnRep_Instigator() end

---Called on client when updated AttachmentReplication value is received for this actor.
function AActor:OnRep_AttachmentReplication() end

---Trigger a noise caused by a given Pawn, at a given location.
---Note that the NoiseInstigator Pawn MUST have a PawnNoiseEmitterComponent for the noise to be detected by a PawnSensingComponent.
---Senders of MakeNoise should have an Instigator if they are not pawns, or pass a NoiseInstigator.
---@param Loudness number @[opt] 
---@param NoiseInstigator APawn @[opt] 
---@param NoiseLocation FVector
---@param MaxRange number @[opt] 
---@param Tag string @[opt] 
function AActor:MakeNoise(Loudness, NoiseInstigator, NoiseLocation, MaxRange, Tag) end

---Teleport this actor to a new location. If the actor doesn't fit exactly at the location specified, tries to slightly move it out of walls and such.
---@param DestLocation FVector
---@param DestRotation FRotator
---@return boolean
function AActor:K2_TeleportTo(DestLocation, DestRotation) end

---Set the Actors transform to the specified one.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the transform without teleporting will not update the transform of simulated child/attached components.
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
---@return boolean
function AActor:K2_SetActorTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end

---Set the Actor's rotation instantly to the specified rotation.
---                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---         Setting the rotation without teleporting will not update the rotation of simulated child/attached components.
---@param NewRotation FRotator
---@param bTeleportPhysics boolean
---@return boolean
function AActor:K2_SetActorRotation(NewRotation, bTeleportPhysics) end

---Set the actor's RootComponent to the specified relative transform
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the transform without teleporting will not update the transform of simulated child/attached components.
---@param NewRelativeTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_SetActorRelativeTransform(NewRelativeTransform, bSweep, SweepHitResult, bTeleport) end

---Set the actor's RootComponent to the specified relative rotation
---                                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                             Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                             Setting the rotation without teleporting will not update the rotation of simulated child/attached components.
---@param NewRelativeRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_SetActorRelativeRotation(NewRelativeRotation, bSweep, SweepHitResult, bTeleport) end

---Set the actor's RootComponent to the specified relative location.
---                                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                             Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                             Setting the location without teleporting will not update the location of simulated child/attached components.
---@param NewRelativeLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_SetActorRelativeLocation(NewRelativeLocation, bSweep, SweepHitResult, bTeleport) end

---Move the actor instantly to the specified location and rotation.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the location without teleporting will not update the location of simulated child/attached components.
---@param NewLocation FVector
---@param NewRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
---@return boolean
function AActor:K2_SetActorLocationAndRotation(NewLocation, NewRotation, bSweep, SweepHitResult, bTeleport) end

---Move the Actor to the specified location.
---                                             Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                             If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                             If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                             If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                     Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                     Setting the location without teleporting will not update the location of simulated child/attached components.
---@param NewLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
---@return boolean
function AActor:K2_SetActorLocation(NewLocation, bSweep, SweepHitResult, bTeleport) end

---Event called when this Actor is reset to its initial state - used when restarting level without reloading.
function AActor:K2_OnReset() end

---Event called when this Actor is no longer the view target for the given PlayerController.
---@param PC APlayerController
function AActor:K2_OnEndViewTarget(PC) end

---Event called when this Actor becomes the view target for the given PlayerController.
---@param PC APlayerController
function AActor:K2_OnBecomeViewTarget(PC) end

---Returns the RootComponent of this Actor
---@return USceneComponent
function AActor:K2_GetRootComponent() end

---Gets all the components that inherit from the given class.
---Currently returns an array of UActorComponent which must be cast to the correct type.
---This intended to only be used by blueprints. Use GetComponents() in C++.
---@param ComponentClass TSubclassOf_UActorComponent_
---@return TArray_UActorComponent_
function AActor:K2_GetComponentsByClass(ComponentClass) end

---Returns rotation of the RootComponent of this Actor.
---@return FRotator
function AActor:K2_GetActorRotation() end

---Returns the location of the RootComponent of this Actor
---@return FVector
function AActor:K2_GetActorLocation() end

---Detaches the RootComponent of this Actor from any SceneComponent it is currently attached to.
---@param LocationRule EDetachmentRule @[opt] 
---@param RotationRule EDetachmentRule @[opt] 
---@param ScaleRule EDetachmentRule @[opt] 
function AActor:K2_DetachFromActor(LocationRule, RotationRule, ScaleRule) end

---Destroy the actor
function AActor:K2_DestroyActor() end

---Attaches the RootComponent of this Actor to the supplied component, optionally at a named socket. It is not valid to call this on components that are not Registered.
---@param Parent USceneComponent
---@param SocketName string
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
---@param bWeldSimulatedBodies boolean
---@return boolean
function AActor:K2_AttachToComponent(Parent, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies) end

---Attaches the RootComponent of this Actor to the supplied actor, optionally at a named socket.
---@param ParentActor AActor
---@param SocketName string
---@param LocationRule EAttachmentRule
---@param RotationRule EAttachmentRule
---@param ScaleRule EAttachmentRule
---@param bWeldSimulatedBodies boolean
---@return boolean
function AActor:K2_AttachToActor(ParentActor, SocketName, LocationRule, RotationRule, ScaleRule, bWeldSimulatedBodies) end

---@param InParentActor AActor
---@param InSocketName string @[opt] 
---@param AttachLocationType integer @[opt] 
---@param bWeldSimulatedBodies boolean @[opt] 
function AActor:K2_AttachRootComponentToActor(InParentActor, InSocketName, AttachLocationType, bWeldSimulatedBodies) end

---@param InParent USceneComponent
---@param InSocketName string @[opt] 
---@param AttachLocationType integer @[opt] 
---@param bWeldSimulatedBodies boolean @[opt] 
function AActor:K2_AttachRootComponentTo(InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies) end

---Adds a delta to the transform of this actor in world space. Scale is unchanged.
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorWorldTransformKeepScale(DeltaTransform, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the transform of this actor in world space. Ignores scale and sets it to (1,1,1).
---@param DeltaTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorWorldTransform(DeltaTransform, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the rotation of this actor in world space.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the rotation without teleporting will not update the rotation of simulated child/attached components.
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorWorldRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the location of this actor in world space.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the location without teleporting will not update the location of simulated child/attached components.
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorWorldOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the transform of this component in its local reference frame
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the transform without teleporting will not update the transform of simulated child/attached components.
---@param NewTransform FTransform
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorLocalTransform(NewTransform, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the rotation of this component in its local reference frame
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the rotation without teleporting will not update the rotation of simulated child/attached components.
---@param DeltaRotation FRotator
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorLocalRotation(DeltaRotation, bSweep, SweepHitResult, bTeleport) end

---Adds a delta to the location of this component in its local reference frame.
---                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.
---                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).
---                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).
---                                                     If CCD is on and not teleporting, this will affect objects along the entire swept volume.
---                         Note that when teleporting, any child/attached components will be teleported too, maintaining their current offset even if they are being simulated.
---                         Setting the location without teleporting will not update the location of simulated child/attached components.
---@param DeltaLocation FVector
---@param bSweep boolean
---@param SweepHitResult FHitResult @[out] 
---@param bTeleport boolean
function AActor:K2_AddActorLocalOffset(DeltaLocation, bSweep, SweepHitResult, bTeleport) end

---Returns whether or not this actor was explicitly hidden in the editor for the duration of the current editor session
---@param bIncludeParent boolean @[opt] 
---@return boolean
function AActor:IsTemporarilyHiddenInEditor(bIncludeParent) end

---Returns true if this actor can EVER be selected in a level in the editor.  Can be overridden by specific actors to make them unselectable.
---@return boolean
function AActor:IsSelectable() end

---Check whether any component of this Actor is overlapping any component of another Actor.
---@param Other AActor
---@return boolean
function AActor:IsOverlappingActor(Other) end

---Returns true if the actor is hidden upon editor startup/by default, false if it is not
---@return boolean
function AActor:IsHiddenEdAtStartup() end

---Returns true if this actor is hidden in the editor viewports, also checking temporary flags.
---@return boolean
function AActor:IsHiddenEd() end

---Returns true if this actor is allowed to be displayed, selected and manipulated by the editor.
---@return boolean
function AActor:IsEditable() end

---Returns whether this Actor was spawned by a child actor component
---@return boolean
function AActor:IsChildActor() end

---Returns whether this actor has tick enabled or not
---@return boolean
function AActor:IsActorTickEnabled() end

---Returns true if this actor is currently being destroyed, some gameplay events may be unsafe
---@return boolean
function AActor:IsActorBeingDestroyed() end

---Returns whether this actor has network authority
---@return boolean
function AActor:HasAuthority() end

---Returns the distance from this Actor to OtherActor, ignoring XY.
---@param OtherActor AActor
---@return number
function AActor:GetVerticalDistanceTo(OtherActor) end

---Returns velocity (in cm/s (Unreal Units/second) of the rootcomponent if it is either using physics or has an associated MovementComponent
---@return FVector
function AActor:GetVelocity() end

---Get the actor-to-world transform.
---@return FTransform
function AActor:GetTransform() end

---Gets whether this actor can tick when paused.
---@return boolean
function AActor:GetTickableWhenPaused() end

---Returns the squared distance from this Actor to OtherActor, ignoring Z.
---@param OtherActor AActor
---@return number
function AActor:GetSquaredHorizontalDistanceTo(OtherActor) end

---Returns the squared distance from this Actor to OtherActor.
---@param OtherActor AActor
---@return number
function AActor:GetSquaredDistanceTo(OtherActor) end

---Get the error threshold in centimeters before this object should enforce a resimulation to trigger.
---@return number
function AActor:GetResimulationThreshold() end

---Returns how much control the remote machine has over this actor.
---@return integer
function AActor:GetRemoteRole() end

---Return the RayTracingGroupId for this actor.
---@return integer
function AActor:GetRayTracingGroupId() end

---Get the physics replication mode of this body, via EPhysicsReplicationMode
---@return EPhysicsReplicationMode
function AActor:GetPhysicsReplicationMode() end

---If this Actor was created by a Child Actor Component returns that Child Actor Component
---@return UChildActorComponent
function AActor:GetParentComponent() end

---If this Actor was created by a Child Actor Component returns the Actor that owns that Child Actor Component
---@return AActor
function AActor:GetParentActor() end

---Get the owner of this Actor, used primarily for network replication.
---@return AActor
function AActor:GetOwner() end

---Returns list of components this actor is overlapping.
---@param OverlappingComponents TArray_UPrimitiveComponent_ @[out] 
function AActor:GetOverlappingComponents(OverlappingComponents) end

---Returns list of actors this actor is overlapping (any component overlapping any component). Does not return itself.
---@param OverlappingActors TArray_AActor_ @[out] 
---@param ClassFilter TSubclassOf_AActor_ @[opt] 
function AActor:GetOverlappingActors(OverlappingActors, ClassFilter) end

---Get the current frequency at which this object will be considered for replication.
---@return number
function AActor:GetNetUpdateFrequency() end

---Get the square of the max distance from the client's viewpoint that this actor is relevant and will be replicated.
---@return number
function AActor:GetNetCullDistanceSquared() end

---Get the frequency to throttle down to when replicated properties are changing infrequently.
---@return number
function AActor:GetMinNetUpdateFrequency() end

---Returns how much control the local machine has over this actor.
---@return integer
function AActor:GetLocalRole() end

---Get the remaining lifespan of this actor. If zero is returned the actor lives forever.
---@return number
function AActor:GetLifeSpan() end

---Return the FTransform of the level this actor is a part of.
---@return FTransform
function AActor:GetLevelTransform() end

---Return the ULevel that this Actor is part of.
---@return ULevel
function AActor:GetLevel() end

---Returns the instigator's controller for this actor, or nullptr if there is none.
---@return AController
function AActor:GetInstigatorController() end

---Returns the instigator for this actor, or nullptr if there is none.
---@return APawn
function AActor:GetInstigator() end

---Gets the value of the input axis key if input is enabled for this actor.
---@param InputAxisKey FKey
---@return FVector
function AActor:GetInputVectorAxisValue(InputAxisKey) end

---Gets the value of the input axis if input is enabled for this actor.
---@param InputAxisName string
---@return number
function AActor:GetInputAxisValue(InputAxisName) end

---Gets the value of the input axis key if input is enabled for this actor.
---@param InputAxisKey FKey
---@return number
function AActor:GetInputAxisKeyValue(InputAxisKey) end

---Returns the dot product from this Actor to OtherActor, ignoring Z. Returns -2.0 on failure. Returns 0.0 for coincidental actors.
---@param OtherActor AActor
---@return number
function AActor:GetHorizontalDotProductTo(OtherActor) end

---Returns the distance from this Actor to OtherActor, ignoring Z.
---@param OtherActor AActor
---@return number
function AActor:GetHorizontalDistanceTo(OtherActor) end

---The number of seconds (in game time) since this Actor was created, relative to Get Game Time In Seconds.
---@return number
function AActor:GetGameTimeSinceCreation() end

---Returns this actor's folder path. Actor folder paths are only available in development builds.
---@return string
function AActor:GetFolderPath() end

---Returns the dot product from this Actor to OtherActor. Returns -2.0 on failure. Returns 0.0 for coincidental actors.
---@param OtherActor AActor
---@return number
function AActor:GetDotProductTo(OtherActor) end

---Returns the distance from this Actor to OtherActor.
---@param OtherActor AActor
---@return number
function AActor:GetDistanceTo(OtherActor) end

---Returns this actor's default label (does not include any numeric suffix).  Actor labels are only available in development builds.
---@return string
function AActor:GetDefaultActorLabel() end

---Gets all the components that inherit from the given class with a given tag.
---@param ComponentClass TSubclassOf_UActorComponent_
---@param Tag string
---@return TArray_UActorComponent_
function AActor:GetComponentsByTag(ComponentClass, Tag) end

---Gets all the components that implements the given interface.
---@param Interface TSubclassOf_UInterface_
---@return TArray_UActorComponent_
function AActor:GetComponentsByInterface(Interface) end

---Searches components array and returns first encountered component of the specified class
---@param ComponentClass TSubclassOf_UActorComponent_
---@return UActorComponent
function AActor:GetComponentByClass(ComponentClass) end

---Walk up the attachment chain from RootComponent until we encounter a different actor, and return the socket name in the component. If we are not attached to a component in a different actor, returns NAME_None
---@return string
function AActor:GetAttachParentSocketName() end

---Walk up the attachment chain from RootComponent until we encounter a different actor, and return it. If we are not attached to a component in a different actor, returns nullptr
---@return AActor
function AActor:GetAttachParentActor() end

---Find all Actors which are attached directly to a component in this actor
---@param OutActors TArray_AActor_ @[out] 
---@param bResetArray boolean @[opt] 
---@param bRecursivelyIncludeAttachedActors boolean @[opt] 
function AActor:GetAttachedActors(OutActors, bResetArray, bRecursivelyIncludeAttachedActors) end

---Returns a list of all actors spawned by our Child Actor Components, including children of children.
---This does not return the contents of the Children array
---@param ChildActors TArray_AActor_ @[out] 
---@param bIncludeDescendants boolean @[opt] 
function AActor:GetAllChildActors(ChildActors, bIncludeDescendants) end

---Get the up (Z) vector (length 1.0) from this Actor, in world space.
---@return FVector
function AActor:GetActorUpVector() end

---Get ActorTimeDilation - this can be used for input control or speed control for slomo.
---We don't want to scale input globally because input can be used for UI, which do not care for TimeDilation.
---@return number
function AActor:GetActorTimeDilation() end

---Returns the tick interval of this actor's primary tick function
---@return number
function AActor:GetActorTickInterval() end

---Returns the Actor's world-space scale.
---@return FVector
function AActor:GetActorScale3D() end

---Get the right (Y) vector (length 1.0) from this Actor, in world space.
---@return FVector
function AActor:GetActorRightVector() end

---Return the actor's relative scale 3d
---@return FVector
function AActor:GetActorRelativeScale3D() end

---Returns this actor's current label.  Actor labels are only available in development builds.
---@param bCreateIfNone boolean @[opt] 
---@return string
function AActor:GetActorLabel(bCreateIfNone) end

---Get the forward (X) vector (length 1.0) from this Actor, in world space.
---@return FVector
function AActor:GetActorForwardVector() end

---Returns the point of view of the actor.
---Note that this doesn't mean the camera, but the 'eyes' of the actor.
---For example, for a Pawn, this would define the eye height location,
---and view rotation (which is different from the pawn rotation which has a zeroed pitch component).
---A camera first person view will typically use this view point. Most traces (weapon, AI) will be done from this view point.
---@param OutLocation FVector @[out] 
---@param OutRotation FRotator @[out] 
function AActor:GetActorEyesViewPoint(OutLocation, OutRotation) end

---Get current state of collision for the whole actor
---@return boolean
function AActor:GetActorEnableCollision() end

---Returns the bounding box of all components that make up this Actor (excluding ChildActorComponents).
---@param bOnlyCollidingComponents boolean
---@param Origin FVector @[out] 
---@param BoxExtent FVector @[out] 
---@param bIncludeFromChildActors boolean @[opt] 
function AActor:GetActorBounds(bOnlyCollidingComponents, Origin, BoxExtent, bIncludeFromChildActors) end

---Force actor to be updated to clients/demo net drivers
function AActor:ForceNetUpdate() end

---Forces dormant actor to replicate but doesn't change NetDormancy state (i.e., they will go dormant again if left dormant)
function AActor:FlushNetDormancy() end

---Completes the creation of a new actor component. Called either from blueprint after
---expose on spawn properties are set, or directly from AddComponent
---@param Component UActorComponent
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
function AActor:FinishAddComponent(Component, bManualAttachment, RelativeTransform) end

---Searches components array and returns first encountered component with a given tag.
---@param ComponentClass TSubclassOf_UActorComponent_
---@param Tag string
---@return UActorComponent
function AActor:FindComponentByTag(ComponentClass, Tag) end

---Pushes this actor on to the stack of input being handled by a PlayerController.
---@param PlayerController APlayerController
function AActor:EnableInput(PlayerController) end

---Removes this actor from the stack of input being handled by a PlayerController.
---@param PlayerController APlayerController
function AActor:DisableInput(PlayerController) end

---@param bMaintainWorldPosition boolean @[opt] 
function AActor:DetachRootComponentFromParent(bMaintainWorldPosition) end

---Creates an input component from the input component passed in
---@param InputComponentToCreate TSubclassOf_UInputComponent_
function AActor:CreateInputComponent(InputComponentToCreate) end

---Can this body trigger a resimulation when Physics Prediction is enabled
---@return boolean
function AActor:CanTriggerResimulation() end

---Make this actor tick after PrerequisiteComponent. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired.
---@param PrerequisiteComponent UActorComponent
function AActor:AddTickPrerequisiteComponent(PrerequisiteComponent) end

---Make this actor tick after PrerequisiteActor. This only applies to this actor's tick function; dependencies for owned components must be set up separately if desired.
---@param PrerequisiteActor AActor
function AActor:AddTickPrerequisiteActor(PrerequisiteActor) end

---Creates a new component and assigns ownership to the Actor this is
---called for. Automatic attachment causes the first component created to
---become the root, and all subsequent components to be attached under that
---root. When bManualAttachment is set, automatic attachment is
---skipped and it is up to the user to attach the resulting component (or
---set it up as the root) themselves.
---@param Class TSubclassOf_UActorComponent_
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@param bDeferredFinish boolean
---@return UActorComponent
function AActor:AddComponentByClass(Class, bManualAttachment, RelativeTransform, bDeferredFinish) end

---Creates a new component and assigns ownership to the Actor this is
---called for. Automatic attachment causes the first component created to
---become the root, and all subsequent components to be attached under that
---root. When bManualAttachment is set, automatic attachment is
---skipped and it is up to the user to attach the resulting component (or
---set it up as the root) themselves.
---@param TemplateName string
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@param ComponentTemplateContext UObject
---@param bDeferredFinish boolean @[opt] 
---@return UActorComponent
function AActor:AddComponent(TemplateName, bManualAttachment, RelativeTransform, ComponentTemplateContext, bDeferredFinish) end

---See if this actor's Tags array contains the supplied name tag
---@param Tag string
---@return boolean
function AActor:ActorHasTag(Tag) end

