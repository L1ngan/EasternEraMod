---A particle emitter.
---@class UParticleSystemComponent : UFXSystemComponent
---@field public Template UParticleSystem
---@field public EmitterMaterials TArray<UMaterialInterface>
---@field public SkelMeshComponents TArray<USkeletalMeshComponent> @The skeletal mesh components used with the socket location module. This is to prevent them from being garbage collected.
---@field public bResetOnDetach boolean
---@field public bUpdateOnDedicatedServer boolean @whether to update the particle system on dedicated servers
---@field public bAllowRecycling boolean @If true, this Particle System will be available for recycling after it has completed. Auto-destroyed systems cannot be recycled. Some systems (currently particle trail effects) can recycle components to avoid respawning them to play new effects. This is only an optimization and does not change particle system behavior, aside from not triggering normal component initialization events more than once.
---@field public bAutoManageAttachment boolean @True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed. This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null). When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored. This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.
---@field public bAutoAttachWeldSimulatedBodies boolean @Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public bWarmingUp boolean
---@field public bOverrideLODMethod boolean @indicates that the component's LODMethod overrides the Template's
---@field public bSkipUpdateDynamicDataDuringTick boolean @Flag indicating that dynamic updating of render data should NOT occur during Tick. This is used primarily to allow for warming up and simulated effects to a certain state.
---@field public LODMethod integer @The method of LOD level determination to utilize for this particle system
---@field public RequiredSignificance EParticleSignificanceLevel @The significance this component requires of it's emitters for them to be enabled.
---@field public InstanceParameters TArray<FParticleSysParam> @Array holding name instance parameters for this ParticleSystemComponent. Parameters can be used in Cascade using DistributionFloat/VectorParticleParameters.
---@field public OnParticleSpawn MulticastDelegate
---@field public OnParticleBurst MulticastDelegate
---@field public OnParticleDeath MulticastDelegate
---@field public OnParticleCollide MulticastDelegate
---@field public bOldPositionValid boolean
---@field public OldPosition FVector
---@field public PartSysVelocity FVector
---@field public WarmupTime number
---@field public WarmupTickRate number
---@field public SecondsBeforeInactive number @Number of seconds of emitter not being rendered that need to pass before it no longer gets ticked/ becomes inactive.
---@field public MaxTimeBeforeForceUpdateTransform number @Time between forced UpdateTransforms for systems that use dynamically calculated bounds, Which is effectively how often the bounds are shrunk.
---@field public EditorLODLevel integer @INTERNAL. Used by the editor to set the LODLevel
---@field public EditorDetailMode integer @Used for applying Cascade's detail mode setting to in-level particle systems
---@field public ReplayClips TArray<UParticleSystemReplay> @Array of replay clips for this particle system component.  These are serialized to disk.  You really should never add anything to this in the editor.  It's exposed so that you can delete clips if you need to, but be careful when doing so!
---@field public CustomTimeDilation number @Scales DeltaTime in UParticleSystemComponent::Tick(...)
---@field public AutoAttachParent TWeakObjectPtr<USceneComponent> @Component we automatically attach to when activated, if bAutoManageAttachment is true. If null during registration, we assign the existing AttachParent and defer attachment until we activate.
---@field public AutoAttachSocketName string @Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true. If no auto attach socket name is set during registration, the current attach socket will be assigned to AutoAttachSocketName and used when activated.
---@field public AutoAttachLocationRule EAttachmentRule @Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public AutoAttachRotationRule EAttachmentRule @Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public AutoAttachScaleRule EAttachmentRule @Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public OnSystemFinished MulticastDelegate @Called when the particle system is done
local UParticleSystemComponent = {}

---Sets the defining data for all trails in this component.
---@param InFirstSocketName string
---@param InSecondSocketName string
---@param InWidthMode integer
---@param InWidth number
function UParticleSystemComponent:SetTrailSourceData(InFirstSocketName, InSecondSocketName, InWidthMode, InWidth) end

---Change the ParticleSystem used by this ParticleSystemComponent
---@param NewTemplate UParticleSystem
function UParticleSystemComponent:SetTemplate(NewTemplate) end

---Set a named material instance parameter on this ParticleSystemComponent.
---Updates the parameter if it already exists, or creates a new entry if not.
---@param ParameterName string
---@param Param UMaterialInterface
function UParticleSystemComponent:SetMaterialParameter(ParameterName, Param) end

---Set the beam target tangent
---@param EmitterIndex integer
---@param NewTangentPoint FVector
---@param TargetIndex integer
function UParticleSystemComponent:SetBeamTargetTangent(EmitterIndex, NewTangentPoint, TargetIndex) end

---Set the beam target strength
---@param EmitterIndex integer
---@param NewTargetStrength number
---@param TargetIndex integer
function UParticleSystemComponent:SetBeamTargetStrength(EmitterIndex, NewTargetStrength, TargetIndex) end

---Set the beam target point
---@param EmitterIndex integer
---@param NewTargetPoint FVector
---@param TargetIndex integer
function UParticleSystemComponent:SetBeamTargetPoint(EmitterIndex, NewTargetPoint, TargetIndex) end

---Set the beam source tangent
---@param EmitterIndex integer
---@param NewTangentPoint FVector
---@param SourceIndex integer
function UParticleSystemComponent:SetBeamSourceTangent(EmitterIndex, NewTangentPoint, SourceIndex) end

---Set the beam source strength
---@param EmitterIndex integer
---@param NewSourceStrength number
---@param SourceIndex integer
function UParticleSystemComponent:SetBeamSourceStrength(EmitterIndex, NewSourceStrength, SourceIndex) end

---Set the beam source point
---@param EmitterIndex integer
---@param NewSourcePoint FVector
---@param SourceIndex integer
function UParticleSystemComponent:SetBeamSourcePoint(EmitterIndex, NewSourcePoint, SourceIndex) end

---Set the beam end point
---@param EmitterIndex integer
---@param NewEndPoint FVector
function UParticleSystemComponent:SetBeamEndPoint(EmitterIndex, NewEndPoint) end

---DEPRECATED: Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.
---@param Parent USceneComponent
---@param SocketName string @[opt] 
---@param LocationType integer @[opt] 
function UParticleSystemComponent:SetAutoAttachParams(Parent, SocketName, LocationType) end

---Get the current number of active particles in this system
---@return integer
function UParticleSystemComponent:GetNumActiveParticles() end

---Returns a named material. If this named material is not found, returns NULL.
---@param InName string
---@return UMaterialInterface
function UParticleSystemComponent:GetNamedMaterial(InName) end

---Get the beam target tangent
---                false           EmitterIndex or TargetIndex is invalid - OutTangentPoint is invalid
---@param EmitterIndex integer
---@param TargetIndex integer
---@param OutTangentPoint FVector @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamTargetTangent(EmitterIndex, TargetIndex, OutTangentPoint) end

---Get the beam target strength
---                false           EmitterIndex or TargetIndex is invalid - OutTargetStrength is invalid
---@param EmitterIndex integer
---@param TargetIndex integer
---@param OutTargetStrength number @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamTargetStrength(EmitterIndex, TargetIndex, OutTargetStrength) end

---Get the beam target point
---                false           EmitterIndex or TargetIndex is invalid - OutTargetPoint is invalid
---@param EmitterIndex integer
---@param TargetIndex integer
---@param OutTargetPoint FVector @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamTargetPoint(EmitterIndex, TargetIndex, OutTargetPoint) end

---Get the beam source tangent
---                false           EmitterIndex or SourceIndex is invalid - OutTangentPoint is invalid
---@param EmitterIndex integer
---@param SourceIndex integer
---@param OutTangentPoint FVector @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamSourceTangent(EmitterIndex, SourceIndex, OutTangentPoint) end

---Get the beam source strength
---                false           EmitterIndex or SourceIndex is invalid - OutSourceStrength is invalid
---@param EmitterIndex integer
---@param SourceIndex integer
---@param OutSourceStrength number @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamSourceStrength(EmitterIndex, SourceIndex, OutSourceStrength) end

---Get the beam source point
---                false           EmitterIndex or SourceIndex is invalid - OutSourcePoint is invalid
---@param EmitterIndex integer
---@param SourceIndex integer
---@param OutSourcePoint FVector @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamSourcePoint(EmitterIndex, SourceIndex, OutSourcePoint) end

---Get the beam end point
---                false           EmitterIndex invalid or End point is not set - OutEndPoint is invalid
---@param EmitterIndex integer
---@param OutEndPoint FVector @[out] 
---@return boolean
function UParticleSystemComponent:GetBeamEndPoint(EmitterIndex, OutEndPoint) end

---Record a kismet event.
---@param InEventName string
---@param InEmitterTime number
---@param InLocation FVector
---@param InDirection FVector
---@param InVelocity FVector
function UParticleSystemComponent:GenerateParticleEvent(InEventName, InEmitterTime, InLocation, InDirection, InVelocity) end

---Ends all trail emitters in this component.
function UParticleSystemComponent:EndTrails() end

---Creates a Dynamic Material Instance for the specified named material override, optionally from the supplied material.
---@param InName string
---@param SourceMaterial UMaterialInterface @[opt] 
---@return UMaterialInstanceDynamic
function UParticleSystemComponent:CreateNamedDynamicMaterialInstance(InName, SourceMaterial) end

---Begins all trail emitters in this component.
---@param InFirstSocketName string
---@param InSecondSocketName string
---@param InWidthMode integer
---@param InWidth number
function UParticleSystemComponent:BeginTrails(InFirstSocketName, InSecondSocketName, InWidthMode, InWidth) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UParticleSystemComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UParticleSystemComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UParticleSystemComponent:AddAssetUserDataOfClass(InUserDataClass) end

