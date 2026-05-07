---ActorComponent is the base class for components that define reusable behavior that can be added to different types of Actors.
---ActorComponents that have a transform are known as SceneComponents and those that can be rendered are PrimitiveComponents.
---@class UActorComponent : UObject
---@field public PrimaryComponentTick FActorComponentTickFunction @Main tick function for the Component
---@field public ComponentTags TArray<string> @Array of tags that can be used for grouping and categorizing. Can also be accessed from scripting.
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the component
---@field protected AssetUserDataEditorOnly TArray<UAssetUserData> @Array of user data stored with the component
---@field private UCSSerializationIndex integer @Populated when the component is created and tracks the often used order of creation on a per archetype/per actor basis
---@field protected bNetAddressable boolean @Is this component safe to ID over the network by name?
---@field protected bReplicateUsingRegisteredSubObjectList boolean @When true the replication system will only replicate the registered subobjects list When false the replication system will instead call the virtual ReplicateSubObjects() function where the subobjects need to be manually replicated.
---@field private bReplicates boolean @Is this component currently replicating? Should the network code consider it for replication? Owning Actor must be replicating first!
---@field public bAutoActivate boolean @Whether the component is activated at creation or must be explicitly activated.
---@field private bIsActive boolean @Whether the component is currently active.
---@field public bEditableWhenInherited boolean @True if this component can be modified when it was inherited from a parent actor class
---@field protected bCanEverAffectNavigation boolean @Whether this component can potentially influence navigation
---@field public bIsEditorOnly boolean @If true, the component will be excluded from non-editor builds
---@field private bIsVisualizationComponent boolean @True if this component is only used for visualization, usually a sprite or text
---@field private bNeedsUCSSerializationIndexEvaluted boolean @Marks this component pending kill once PostLoad occurs. Used to clean up old native default subobjects that were removed from code
---@field public CreationMethod EComponentCreationMethod @Describes how a component instance will be created
---@field public OnComponentActivated MulticastDelegate @Called when the component has been activated, with parameter indicating if it was from a reset
---@field public OnComponentDeactivated MulticastDelegate @Called when the component has been deactivated
local UActorComponent = {}

---Toggles the active state of the component
function UActorComponent:ToggleActive() end

---Changes the ticking group for this component
---@param NewTickGroup integer
function UActorComponent:SetTickGroup(NewTickGroup) end

---Sets whether this component can tick when paused.
---@param bTickableWhenPaused boolean
function UActorComponent:SetTickableWhenPaused(bTickableWhenPaused) end

---Enable or disable replication. This is the equivalent of RemoteRole for actors (only a bool is required for components)
---@param ShouldReplicate boolean
function UActorComponent:SetIsReplicated(ShouldReplicate) end

---Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect imediately.
---@param TickInterval number
function UActorComponent:SetComponentTickIntervalAndCooldown(TickInterval) end

---Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect on next tick.
---@param TickInterval number
function UActorComponent:SetComponentTickInterval(TickInterval) end

---Set this component's tick functions to be enabled or disabled. Only has an effect if the function is registered
---@param bEnabled boolean
function UActorComponent:SetComponentTickEnabled(bEnabled) end

---Sets whether the component should be auto activate or not. Only safe during construction scripts.
---@param bNewAutoActivate boolean
function UActorComponent:SetAutoActivate(bNewAutoActivate) end

---Sets whether the component is active or not
---@param bNewActive boolean
---@param bReset boolean @[opt] 
function UActorComponent:SetActive(bNewActive, bReset) end

---Remove tick dependency on PrerequisiteComponent.
---@param PrerequisiteComponent UActorComponent
function UActorComponent:RemoveTickPrerequisiteComponent(PrerequisiteComponent) end

---Remove tick dependency on PrerequisiteActor.
---@param PrerequisiteActor AActor
function UActorComponent:RemoveTickPrerequisiteActor(PrerequisiteActor) end

---Event called every frame if tick is enabled
---@param DeltaSeconds number
function UActorComponent:ReceiveTick(DeltaSeconds) end

---Blueprint implementable event for when the component ends play, generally via destruction or its Actor's EndPlay.
---@param EndPlayReason integer
function UActorComponent:ReceiveEndPlay(EndPlayReason) end

---Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlay
---or when the component is dynamically created if the Actor has already BegunPlay.
function UActorComponent:ReceiveBeginPlay() end

---Event called every async physics tick if bAsyncPhysicsTickEnabled is true
---@param DeltaSeconds number
---@param SimSeconds number
function UActorComponent:ReceiveAsyncPhysicsTick(DeltaSeconds, SimSeconds) end

---Handles replication of active state, handles ticking by default but should be overridden as needed
function UActorComponent:OnRep_IsActive() end

---Unregister and mark for pending kill a component.  This may not be used to destroy a component that is owned by an actor unless the owning actor is calling the function.
---@param Object UObject
function UActorComponent:K2_DestroyComponent(Object) end

---Returns whether this component has tick enabled or not
---@return boolean
function UActorComponent:IsComponentTickEnabled() end

---Returns whether the component is in the process of being destroyed.
---@return boolean
function UActorComponent:IsBeingDestroyed() end

---Returns whether the component is active or not
---@return boolean
function UActorComponent:IsActive() end

---Follow the Outer chain to get the  AActor  that 'Owns' this component
---@return AActor
function UActorComponent:GetOwner() end

---Returns the tick interval for this component's primary tick function, which is the frequency in seconds at which it will be executed
---@return number
function UActorComponent:GetComponentTickInterval() end

---Deactivates the SceneComponent.
function UActorComponent:Deactivate() end

---See if this component contains the supplied tag
---@param Tag string
---@return boolean
function UActorComponent:ComponentHasTag(Tag) end

---Make this component tick after PrerequisiteComponent.
---@param PrerequisiteComponent UActorComponent
function UActorComponent:AddTickPrerequisiteComponent(PrerequisiteComponent) end

---Make this component tick after PrerequisiteActor
---@param PrerequisiteActor AActor
function UActorComponent:AddTickPrerequisiteActor(PrerequisiteActor) end

---Activates the SceneComponent, should be overridden by native child classes.
---@param bReset boolean @[opt] 
function UActorComponent:Activate(bReset) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UActorComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UActorComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UActorComponent:AddAssetUserDataOfClass(InUserDataClass) end

