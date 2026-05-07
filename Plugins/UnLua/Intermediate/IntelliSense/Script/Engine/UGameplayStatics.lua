---Static class with useful gameplay utility functions that can be called from both Blueprint and C++
---@class UGameplayStatics : UBlueprintFunctionLibrary
local UGameplayStatics = {}

---Iterate through all sound waves and releases handles to retained chunks. (If the chunk is not being played it will be up for eviction)
---@param InSoundClass USoundClass
function UGameplayStatics.UnRetainAllSoundsInSoundClass(InSoundClass) end

---Unload a streamed in level (by Object Reference)
---@param WorldContextObject UObject
---@param Level TSoftObjectPtr_UWorld_
---@param bShouldBlockOnUnload boolean
function UGameplayStatics.UnloadStreamLevelBySoftObjectPtr(WorldContextObject, Level, bShouldBlockOnUnload) end

---Unload a streamed in level (by Name)
---@param WorldContextObject UObject
---@param LevelName string
---@param bShouldBlockOnUnload boolean
function UGameplayStatics.UnloadStreamLevel(WorldContextObject, LevelName, bShouldBlockOnUnload) end

---Transforms a world space location into "first person space". This function mirrors the morphing that is applied to first person primitives
---when they are rendered on the GPU, so it can be used for spawning objects (e.g. projectiles or ejected shell casings) relative to the morphed
---first person geometry on screen.
---@param ViewInfo FMinimalViewInfo
---@param WorldPosition FVector
---@param bIgnoreFirstPersonScale boolean
---@return FVector
function UGameplayStatics.TransformWorldToFirstPerson(ViewInfo, WorldPosition, bIgnoreFirstPersonScale) end

---Returns a launch velocity need for a projectile to hit the TargetActor in TimeToTarget seconds based on the TargetActor's current velocity.
---This assumes the projectile is only accelerated by gravity (i.e. no outside forces), and that the TargetActor is moving at a constant velocity.
---@param WorldContextObject UObject
---@param OutLaunchVelocity FVector @[out] 
---@param ProjectileStartLocation FVector
---@param TargetActor AActor
---@param TargetLocationOffset FVector
---@param GravityZOverride number @[opt] 
---@param TimeToTarget number @[opt] 
---@param DrawDebugType integer @[opt] 
---@param DrawDebugTime number @[opt] 
---@param DrawDebugColor FLinearColor @[opt] 
---@return boolean
function UGameplayStatics.SuggestProjectileVelocity_MovingTarget(WorldContextObject, OutLaunchVelocity, ProjectileStartLocation, TargetActor, TargetLocationOffset, GravityZOverride, TimeToTarget, DrawDebugType, DrawDebugTime, DrawDebugColor) end

---Returns the launch velocity needed for a projectile at rest at StartPos to land on EndPos.
---Assumes a medium arc (e.g. 45 deg on level ground). Projectile velocity is variable and unconstrained.
---Does no tracing.
---@param WorldContextObject UObject
---@param OutLaunchVelocity FVector @[out] 
---@param StartPos FVector
---@param EndPos FVector
---@param OverrideGravityZ number @[opt] 
---@param ArcParam number @[opt] 
---@return boolean
function UGameplayStatics.SuggestProjectileVelocity_CustomArc(WorldContextObject, OutLaunchVelocity, StartPos, EndPos, OverrideGravityZ, ArcParam) end

---This function allows users to create and play Audio Components attached to a specific Scene Component.
---Useful for spatialized and/or distance-attenuated sounds that need to follow another object in space.
---                                     the attach component/point or an absolute world position that will be translated to a relative offset
---                                     the attach component/point or an absolute world rotation that will be translated to a relative offset
---                                                                             owner of the attach to component is destroyed.
---                                             (by completing or stopping) or whether it can be reactivated
---@param Sound USoundBase
---@param AttachToComponent USceneComponent
---@param AttachPointName string @[opt] 
---@param Location FVector
---@param Rotation FRotator
---@param LocationType integer @[opt] 
---@param bStopWhenAttachedToDestroyed boolean @[opt] 
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings USoundAttenuation @[opt] 
---@param ConcurrencySettings USoundConcurrency @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.SpawnSoundAttached(Sound, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy) end

---Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.
---                                              (by completing or stopping) or whether it can be reactivated
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings USoundAttenuation @[opt] 
---@param ConcurrencySettings USoundConcurrency @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.SpawnSoundAtLocation(WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, bAutoDestroy) end

---This function allows users to create Audio Components with settings specifically for non-spatialized,
---non-distance-attenuated sounds. Audio Components created using this function by default will not have
---Spatialization applied. Sound instances will begin playing upon spawning this Audio Component.
---* Not Replicated.
---                                              (by completing or stopping) or whether it can be reactivated
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param ConcurrencySettings USoundConcurrency @[opt] 
---@param bPersistAcrossLevelTransition boolean @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.SpawnSound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy) end

------ Create Object
---@param ObjectClass TSubclassOf_UObject_
---@param Outer UObject
---@return UObject
function UGameplayStatics.SpawnObject(ObjectClass, Outer) end

---Plays a force feedback effect attached to and following the specified component. This is a fire and forget effect. Replication is also not handled at this point.
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param AttachToComponent USceneComponent
---@param AttachPointName string @[opt] 
---@param Location FVector
---@param Rotation FRotator
---@param LocationType integer @[opt] 
---@param bStopWhenAttachedToDestroyed boolean @[opt] 
---@param bLooping boolean @[opt] 
---@param IntensityMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings UForceFeedbackAttenuation @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UForceFeedbackComponent
function UGameplayStatics.SpawnForceFeedbackAttached(ForceFeedbackEffect, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, bLooping, IntensityMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end

---Plays a force feedback effect at the given location. This is a fire and forget effect and does not travel with any actor. Replication is also not handled at this point.
---@param WorldContextObject UObject
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Location FVector
---@param Rotation FRotator
---@param bLooping boolean @[opt] 
---@param IntensityMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings UForceFeedbackAttenuation @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UForceFeedbackComponent
function UGameplayStatics.SpawnForceFeedbackAtLocation(WorldContextObject, ForceFeedbackEffect, Location, Rotation, bLooping, IntensityMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end

---Plays the specified effect attached to and following the specified component. The system will go away when the effect is complete. Does not replicate.
---@param EmitterTemplate UParticleSystem
---@param AttachToComponent USceneComponent
---@param AttachPointName string @[opt] 
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector @[opt] 
---@param LocationType integer @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@param PoolingMethod EPSCPoolMethod @[opt] 
---@param bAutoActivate boolean @[opt] 
---@return UParticleSystemComponent
function UGameplayStatics.SpawnEmitterAttached(EmitterTemplate, AttachToComponent, AttachPointName, Location, Rotation, Scale, LocationType, bAutoDestroy, PoolingMethod, bAutoActivate) end

---Plays the specified effect at the given location and rotation, fire and forget. The system will go away when the effect is complete. Does not replicate.
---@param WorldContextObject UObject
---@param EmitterTemplate UParticleSystem
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@param PoolingMethod EPSCPoolMethod @[opt] 
---@param bAutoActivateSystem boolean @[opt] 
---@return UParticleSystemComponent
function UGameplayStatics.SpawnEmitterAtLocation(WorldContextObject, EmitterTemplate, Location, Rotation, Scale, bAutoDestroy, PoolingMethod, bAutoActivateSystem) end

---Spawns a DialogueWave, a special type of Asset that requires Context data in order to resolve a specific SoundBase,
---    which is then passed on to the new Audio Component. This function allows users to create and play Audio Components
---    attached to a specific Scene Component. Useful for spatialized and/or distance-attenuated dialogue that needs to
---    follow another object in space.
---                                     attach component/point or an absolute world position that will be translated to a relative offset
---                                     attach component/point or an absolute world rotation that will be translated to a relative offset
---                                                                             to is destroyed.
---                                             (by completing or stopping) or whether it can be reactivated
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param AttachToComponent USceneComponent
---@param AttachPointName string @[opt] 
---@param Location FVector
---@param Rotation FRotator
---@param LocationType integer @[opt] 
---@param bStopWhenAttachedToDestroyed boolean @[opt] 
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings USoundAttenuation @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.SpawnDialogueAttached(Dialogue, Context, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bStopWhenAttachedToDestroyed, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end

---Spawns a DialogueWave, a special type of Asset that requires Context data in order to resolve a specific SoundBase,
---which is then passed on to the new Audio Component. This function allows users to create and play Audio Components at a
---specific World Location and Rotation. Useful for spatialized and/or distance-attenuated dialogue.
---                                             (by completing or stopping) or whether it can be reactivated
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings USoundAttenuation @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.SpawnDialogueAtLocation(WorldContextObject, Dialogue, Context, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, bAutoDestroy) end

---Spawns a DialogueWave, a special type of Asset that requires Context data in order to resolve a specific SoundBase,
---which is then passed on to the new Audio Component. Audio Components created using this function by default will not
---have Spatialization applied. Sound instances will begin playing upon spawning this Audio Component.
---* Not Replicated.
---                                              finishes (by completing or stopping) or whether it can be reactivated
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.SpawnDialogue2D(WorldContextObject, Dialogue, Context, VolumeMultiplier, PitchMultiplier, StartTime, bAutoDestroy) end

---Spawns a decal attached to and following the specified component. Does not replicate.
---@param DecalMaterial UMaterialInterface
---@param DecalSize FVector
---@param AttachToComponent USceneComponent
---@param AttachPointName string @[opt] 
---@param Location FVector
---@param Rotation FRotator
---@param LocationType integer @[opt] 
---@param LifeSpan number @[opt] 
---@return UDecalComponent
function UGameplayStatics.SpawnDecalAttached(DecalMaterial, DecalSize, AttachToComponent, AttachPointName, Location, Rotation, LocationType, LifeSpan) end

---Spawns a decal at the given location and rotation, fire and forget. Does not replicate.
---@param WorldContextObject UObject
---@param DecalMaterial UMaterialInterface
---@param DecalSize FVector
---@param Location FVector
---@param Rotation FRotator @[opt] 
---@param LifeSpan number @[opt] 
---@return UDecalComponent
function UGameplayStatics.SpawnDecalAtLocation(WorldContextObject, DecalMaterial, DecalSize, Location, Rotation, LifeSpan) end

---Requests a new location for a world origin.
---@param WorldContextObject UObject
---@param NewLocation FIntVector
function UGameplayStatics.SetWorldOriginLocation(WorldContextObject, NewLocation) end

---Sets the current viewport mouse capture mode
---@param WorldContextObject UObject
---@param MouseCaptureMode EMouseCaptureMode
function UGameplayStatics.SetViewportMouseCaptureMode(WorldContextObject, MouseCaptureMode) end

---Will set subtitles to be enabled or disabled.
---@param bEnabled boolean
function UGameplayStatics.SetSubtitlesEnabled(bEnabled) end

---Overrides the sound class adjuster in the given sound mix. If the sound class does not exist in the input sound mix,
---    the sound class adjuster will be added to the list of active sound mix modifiers.
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
---@param InSoundClass USoundClass
---@param Volume number @[opt] 
---@param Pitch number @[opt] 
---@param FadeInTime number @[opt] 
---@param bApplyToChildren boolean @[opt] 
function UGameplayStatics.SetSoundMixClassOverride(WorldContextObject, InSoundMixModifier, InSoundClass, Volume, Pitch, FadeInTime, bApplyToChildren) end

---Linearly interpolates the attenuation distance scale value from it's current attenuation distance override value
---(1.0f it not overridden) to its new attenuation distance override, over the given amount of time
---* Fire and Forget.
---* Not Replicated.
---@param WorldContextObject UObject
---@param SoundClass USoundClass
---@param DistanceAttenuationScale number
---@param TimeSec number @[opt] 
function UGameplayStatics.SetSoundClassDistanceScale(WorldContextObject, SoundClass, DistanceAttenuationScale, TimeSec) end

---Sets what platform user id a player should be using. This only works for local player controllers.
---@param PlayerController APlayerController
---@param UserId FPlatformUserId
function UGameplayStatics.SetPlayerPlatformUserId(PlayerController, UserId) end

---Sets what physical controller ID a player should be using. This only works for local player controllers.
---@param Player APlayerController
---@param ControllerId integer
function UGameplayStatics.SetPlayerControllerID(Player, ControllerId) end

---Sets the max number of voices (also known as "channels") dynamically by percentage. E.g. if you want to temporarily
---reduce voice count by 50%, use 0.50. Later, you can return to the original max voice count by using 1.0.
---@param WorldContextObject UObject
---@param MaxChannelCountScale number
function UGameplayStatics.SetMaxAudioChannelsScaled(WorldContextObject, MaxChannelCountScale) end

---Sets the global time dilation.
---@param WorldContextObject UObject
---@param TimeDilation number
function UGameplayStatics.SetGlobalTimeDilation(WorldContextObject, TimeDilation) end

---Sets a global pitch modulation scalar that will apply to all non-UI sounds
---* Fire and Forget.
---* Not Replicated.
---@param WorldContextObject UObject
---@param PitchModulation number
---@param TimeSec number
function UGameplayStatics.SetGlobalPitchModulation(WorldContextObject, PitchModulation, TimeSec) end

---Sets the global listener focus parameters, which will scale focus behavior of sounds based on their focus azimuth
---settings in their attenuation settings.
---* Fire and Forget.
---* Not Replicated.
---                                                        distance to sounds, values > 1.0 will increase perceived distance to in-focus sounds.
---                                                               perceived distance to sounds, values > 1.0 will increase perceived distance to in-focus sounds.
---                                                        the priority of in-focus sounds, values > 1.0 will increase the priority of in-focus sounds.
---                                                               reduce the priority of sounds out-of-focus sounds, values > 1.0 will increase the priority of
---                                                               out-of-focus sounds.
---@param WorldContextObject UObject
---@param FocusAzimuthScale number @[opt] 
---@param NonFocusAzimuthScale number @[opt] 
---@param FocusDistanceScale number @[opt] 
---@param NonFocusDistanceScale number @[opt] 
---@param FocusVolumeScale number @[opt] 
---@param NonFocusVolumeScale number @[opt] 
---@param FocusPriorityScale number @[opt] 
---@param NonFocusPriorityScale number @[opt] 
function UGameplayStatics.SetGlobalListenerFocusParameters(WorldContextObject, FocusAzimuthScale, NonFocusAzimuthScale, FocusDistanceScale, NonFocusDistanceScale, FocusVolumeScale, NonFocusVolumeScale, FocusPriorityScale, NonFocusPriorityScale) end

---Sets the game's paused state
---@param WorldContextObject UObject
---@param bPaused boolean
---@return boolean
function UGameplayStatics.SetGamePaused(WorldContextObject, bPaused) end

---Enables split screen
---@param WorldContextObject UObject
---@param bDisable boolean
function UGameplayStatics.SetForceDisableSplitscreen(WorldContextObject, bDisable) end

---Enabled rendering of the world
---@param WorldContextObject UObject
---@param bEnable boolean
function UGameplayStatics.SetEnableWorldRendering(WorldContextObject, bEnable) end

---Set the sound mix of the audio system for special EQing
---@param WorldContextObject UObject
---@param InSoundMix USoundMix
function UGameplayStatics.SetBaseSoundMix(WorldContextObject, InSoundMix) end

---Get list of available Audio Spatialization Plugins
---@param WorldContextObject UObject
---@param InPluginName string
---@return boolean
function UGameplayStatics.SetActiveSpatialPluginByName(WorldContextObject, InPluginName) end

---Save the contents of the SaveGameObject to a platform-specific save slot/file.
---@param SaveGameObject USaveGame
---@param SlotName string
---@param UserIndex integer
---@return boolean
function UGameplayStatics.SaveGameToSlot(SaveGameObject, SlotName, UserIndex) end

---Removes a local player from this game.
---@param Player APlayerController
---@param bDestroyPawn boolean
function UGameplayStatics.RemovePlayer(Player, bDestroyPawn) end

---Returns local location for origin based position.
---@param WorldContextObject UObject
---@param WorldLocation FVector
---@return FVector
function UGameplayStatics.RebaseZeroOriginOntoLocal(WorldContextObject, WorldLocation) end

---Returns origin based position for local world location.
---@param WorldContextObject UObject
---@param WorldLocation FVector
---@return FVector
function UGameplayStatics.RebaseLocalOriginOntoZero(WorldContextObject, WorldLocation) end

---Push a sound mix modifier onto the audio system
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
function UGameplayStatics.PushSoundMixModifier(WorldContextObject, InSoundMixModifier) end

---Transforms the given 3D world-space point into a its 2D screen space coordinate.
---@param Player APlayerController
---@param WorldPosition FVector
---@param ScreenPosition FVector2D @[out] 
---@param bPlayerViewportRelative boolean @[opt] 
---@return boolean
function UGameplayStatics.ProjectWorldToScreen(Player, WorldPosition, ScreenPosition, bPlayerViewportRelative) end

---Primes the sound, caching the first chunk of streamed audio.
---@param InSound USoundBase
function UGameplayStatics.PrimeSound(InSound) end

---Primes the sound waves in the given USoundClass, caching the first chunk of streamed audio.
---@param InSoundClass USoundClass
function UGameplayStatics.PrimeAllSoundsInSoundClass(InSoundClass) end

---Pop a sound mix modifier from the audio system
---    @@param InSoundMixModifier The Sound Mix Modifier to remove from the system
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
function UGameplayStatics.PopSoundMixModifier(WorldContextObject, InSoundMixModifier) end

---Plays an in-world camera shake that affects all nearby local players, with distance-based attenuation. Does not replicate.
---@param WorldContextObject UObject
---@param Shake TSubclassOf_UCameraShakeBase_
---@param Epicenter FVector
---@param InnerRadius number
---@param OuterRadius number
---@param Falloff number @[opt] 
---@param bOrientShakeTowardsEpicenter boolean @[opt] 
function UGameplayStatics.PlayWorldCameraShake(WorldContextObject, Shake, Epicenter, InnerRadius, OuterRadius, Falloff, bOrientShakeTowardsEpicenter) end

---Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor.
---Replication is also not handled at this point.
---                                             to do a concurrency limit per owner.
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings USoundAttenuation @[opt] 
---@param ConcurrencySettings USoundConcurrency @[opt] 
---@param OwningActor AActor @[opt] 
---@param InitialParams UInitialActiveSoundParams @[opt] 
function UGameplayStatics.PlaySoundAtLocation(WorldContextObject, Sound, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings, ConcurrencySettings, OwningActor, InitialParams) end

---Plays a sound directly with no attenuation, perfect for UI sounds.
---* Fire and Forget.
---* Not Replicated.
---                                             Allows PlaySound calls to do a concurrency limit per owner.
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param ConcurrencySettings USoundConcurrency @[opt] 
---@param OwningActor AActor @[opt] 
---@param bIsUISound boolean @[opt] 
function UGameplayStatics.PlaySound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, OwningActor, bIsUISound) end

---Plays a dialogue at the given location. This is a fire and forget sound and does not travel with any actor.
---    Replication is also not handled at this point.
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param Location FVector
---@param Rotation FRotator
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param AttenuationSettings USoundAttenuation @[opt] 
function UGameplayStatics.PlayDialogueAtLocation(WorldContextObject, Dialogue, Context, Location, Rotation, VolumeMultiplier, PitchMultiplier, StartTime, AttenuationSettings) end

---Plays a dialogue directly with no attenuation, perfect for UI.
---* Fire and Forget.
---* Not Replicated.
---@param WorldContextObject UObject
---@param Dialogue UDialogueWave
---@param Context FDialogueContext
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
function UGameplayStatics.PlayDialogue2D(WorldContextObject, Dialogue, Context, VolumeMultiplier, PitchMultiplier, StartTime) end

---Find an option in the options string and return it.
---@param Options string
---@param Key string
---@return string
function UGameplayStatics.ParseOption(Options, Key) end

---Travel to another level
---@param WorldContextObject UObject
---@param Level TSoftObjectPtr_UWorld_
---@param bAbsolute boolean @[opt] 
---@param Options string
function UGameplayStatics.OpenLevelBySoftObjectPtr(WorldContextObject, Level, bAbsolute, Options) end

---Travel to another level
---@param WorldContextObject UObject
---@param LevelName string
---@param bAbsolute boolean @[opt] 
---@param Options string
function UGameplayStatics.OpenLevel(WorldContextObject, LevelName, bAbsolute, Options) end

---Returns whether or not the object passed in is of (or inherits from) the class type.
---@param Object UObject
---@param ObjectClass TSubclassOf_UObject_
---@return boolean
function UGameplayStatics.ObjectIsA(Object, ObjectClass) end

---Create a HitResult struct
---@param bBlockingHit boolean
---@param bInitialOverlap boolean
---@param Time number
---@param Distance number
---@param Location FVector
---@param ImpactPoint FVector
---@param Normal FVector
---@param ImpactNormal FVector
---@param PhysMat UPhysicalMaterial
---@param HitActor AActor
---@param HitComponent UPrimitiveComponent
---@param HitBoneName string
---@param BoneName string
---@param HitItem integer
---@param ElementIndex integer
---@param FaceIndex integer
---@param TraceStart FVector
---@param TraceEnd FVector
---@return FHitResult
function UGameplayStatics.MakeHitResult(bBlockingHit, bInitialOverlap, Time, Distance, Location, ImpactPoint, Normal, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, BoneName, HitItem, ElementIndex, FaceIndex, TraceStart, TraceEnd) end

---Stream the level (by Object Reference); Calling again before it finishes has no effect
---@param WorldContextObject UObject
---@param Level TSoftObjectPtr_UWorld_
---@param bMakeVisibleAfterLoad boolean
---@param bShouldBlockOnLoad boolean
function UGameplayStatics.LoadStreamLevelBySoftObjectPtr(WorldContextObject, Level, bMakeVisibleAfterLoad, bShouldBlockOnLoad) end

---Stream the level (by Name); Calling again before it finishes has no effect
---@param WorldContextObject UObject
---@param LevelName string
---@param bMakeVisibleAfterLoad boolean
---@param bShouldBlockOnLoad boolean
function UGameplayStatics.LoadStreamLevel(WorldContextObject, LevelName, bMakeVisibleAfterLoad, bShouldBlockOnLoad) end

---Load the contents from a given slot.
---@param SlotName string
---@param UserIndex integer
---@return USaveGame
function UGameplayStatics.LoadGameFromSlot(SlotName, UserIndex) end

---Returns the split screen state
---@param WorldContextObject UObject
---@return boolean
function UGameplayStatics.IsSplitscreenForceDisabled(WorldContextObject) end

---Returns the game's paused state
---@param WorldContextObject UObject
---@return boolean
function UGameplayStatics.IsGamePaused(WorldContextObject) end

---Determines if any local player controller's camera is within range of the specified location.
---@param WorldContextObject UObject
---@param Location FVector
---@param MaximumRange number
---@return boolean
function UGameplayStatics.IsAnyLocalPlayerCameraWithinRange(WorldContextObject, Location, MaximumRange) end

---Returns whether a key exists in an options string.
---@param Options string
---@param InKey string
---@return boolean
function UGameplayStatics.HasOption(Options, InKey) end

---Checks the commandline to see if the desired option was specified on the commandline (e.g. -demobuild)
---@param OptionToCheck string
---@return boolean
function UGameplayStatics.HasLaunchOption(OptionToCheck) end

---Counts how many grass foliage instances overlap a given sphere.
---@param WorldContextObject UObject
---@param StaticMesh UStaticMesh
---@param CenterPosition FVector
---@param Radius number
---@return integer
function UGameplayStatics.GrassOverlappingSphereCount(WorldContextObject, StaticMesh, CenterPosition, Radius) end

---Returns world origin current location.
---@param WorldContextObject UObject
---@return FIntVector
function UGameplayStatics.GetWorldOriginLocation(WorldContextObject) end

---Returns the frame delta time in seconds, adjusted by time dilation.
---@param WorldContextObject UObject
---@return number
function UGameplayStatics.GetWorldDeltaSeconds(WorldContextObject) end

---Returns the View Matrix, Projection Matrix and the View x Projection Matrix for a given view
---@param DesiredView FMinimalViewInfo
---@param ViewMatrix FMatrix @[out] 
---@param ProjectionMatrix FMatrix @[out] 
---@param ViewProjectionMatrix FMatrix @[out] 
function UGameplayStatics.GetViewProjectionMatrix(DesiredView, ViewMatrix, ProjectionMatrix, ViewProjectionMatrix) end

---Returns the current viewport mouse capture mode
---@param WorldContextObject UObject
---@return EMouseCaptureMode
function UGameplayStatics.GetViewportMouseCaptureMode(WorldContextObject) end

---Returns time in seconds since world was brought up for play, adjusted by time dilation and IS NOT stopped when game pauses
---@param WorldContextObject UObject
---@return number
function UGameplayStatics.GetUnpausedTimeSeconds(WorldContextObject) end

---Returns time in seconds since world was brought up for play, adjusted by time dilation and IS stopped when game pauses
---@param WorldContextObject UObject
---@return number
function UGameplayStatics.GetTimeSeconds(WorldContextObject) end

---Returns the EPhysicalSurface type of the given Hit.
---To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section
---@param Hit FHitResult
---@return integer
function UGameplayStatics.GetSurfaceType(Hit) end

---Returns level streaming object with specified level package name
---@param WorldContextObject UObject
---@param PackageName string
---@return ULevelStreaming
function UGameplayStatics.GetStreamingLevel(WorldContextObject, PackageName) end

---Returns time in seconds since world was brought up for play, does NOT stop when game pauses, NOT dilated/clamped
---@param WorldContextObject UObject
---@return number
function UGameplayStatics.GetRealTimeSeconds(WorldContextObject) end

---Returns the player state that matches the passed in online id, or null for an invalid one.
---This will work on both the client and server for local and remote players.
---@param WorldContextObject UObject
---@param UniqueId FUniqueNetIdRepl
---@return APlayerState
function UGameplayStatics.GetPlayerStateFromUniqueNetId(WorldContextObject, UniqueId) end

---Returns the player state at the given index in the game state's PlayerArray.
---This will work on both the client and server and the index will be consistent.
---After initial replication, all clients and the server will have access to PlayerStates for all connected players.
---@param WorldContextObject UObject
---@param PlayerStateIndex integer
---@return APlayerState
function UGameplayStatics.GetPlayerState(WorldContextObject, PlayerStateIndex) end

---Returns the pawn for the player controller at the specified player index.
---This will not include pawns of remote clients with no available player controller, you can use the player states list for that.
---@param WorldContextObject UObject
---@param PlayerIndex integer
---@return APawn
function UGameplayStatics.GetPlayerPawn(WorldContextObject, PlayerIndex) end

---Gets what physical controller ID a player is using. This only works for local player controllers.
---@param Player APlayerController
---@return integer
function UGameplayStatics.GetPlayerControllerID(Player) end

---Returns the player controller with the specified physical controller ID. This only works for local players.
---@param WorldContextObject UObject
---@param UserId FPlatformUserId
---@return APlayerController
function UGameplayStatics.GetPlayerControllerFromPlatformUser(WorldContextObject, UserId) end

---Returns the player controller with the specified physical controller ID. This only works for local players.
---@param WorldContextObject UObject
---@param ControllerID integer
---@return APlayerController
function UGameplayStatics.GetPlayerControllerFromID(WorldContextObject, ControllerID) end

---Returns the player controller found while iterating through the local and available remote player controllers.
---On a network client, this will only include local players as remote player controllers are not available.
---The index will be consistent as long as no new players join or leave, but it will not be the same across different clients and servers.
---@param WorldContextObject UObject
---@param PlayerIndex integer
---@return APlayerController
function UGameplayStatics.GetPlayerController(WorldContextObject, PlayerIndex) end

---Returns the pawn for the player controller at the specified player index, will return null if the pawn is not a character.
---This will not include characters of remote clients with no available player controller, you can iterate the PlayerStates list for that.
---@param WorldContextObject UObject
---@param PlayerIndex integer
---@return ACharacter
function UGameplayStatics.GetPlayerCharacter(WorldContextObject, PlayerIndex) end

---Returns the camera manager for the Player Controller at the specified player index.
---This will not include remote clients with no player controller.
---@param WorldContextObject UObject
---@param PlayerIndex integer
---@return APlayerCameraManager
function UGameplayStatics.GetPlayerCameraManager(WorldContextObject, PlayerIndex) end

---Returns the string name of the current platform, to perform different behavior based on platform.
---(Platform names include Windows, Mac, Linux, IOS, Android, consoles, etc.).
---@return string
function UGameplayStatics.GetPlatformName() end

---Returns the class of a passed in Object, will always be valid if Object is not NULL
---@param Object UObject
---@return TSubclassOf_UObject_
function UGameplayStatics.GetObjectClass(Object) end

---Returns the number of active player states, there is one player state for every connected player even if they are a remote client.
---Indexes up to this can be use as PlayerStateIndex parameters for other functions.
---@param WorldContextObject UObject
---@return integer
function UGameplayStatics.GetNumPlayerStates(WorldContextObject) end

---Returns the total number of available player controllers, including remote players when called on a server.
---Indexes up to this can be used as PlayerIndex parameters for the following functions.
---@param WorldContextObject UObject
---@return integer
function UGameplayStatics.GetNumPlayerControllers(WorldContextObject) end

---Returns the number of fully initialized local players, this will be 0 on dedicated servers.
---Indexes up to this can be used as PlayerIndex parameters for the following functions, and you are guaranteed to get a local player controller.
---@param WorldContextObject UObject
---@return integer
function UGameplayStatics.GetNumLocalPlayerControllers(WorldContextObject) end

---Retrieves the max voice count currently used by the audio engine.
---@param WorldContextObject UObject
---@return integer
function UGameplayStatics.GetMaxAudioChannelCount(WorldContextObject) end

---Break up a key=value pair into its key and value.
---@param Pair string
---@param Key string @[out] 
---@param Value string @[out] 
function UGameplayStatics.GetKeyValue(Pair, Key, Value) end

---Find an option in the options string and return it as an integer.
---@param Options string
---@param Key string
---@param DefaultValue integer
---@return integer
function UGameplayStatics.GetIntOption(Options, Key, DefaultValue) end

---Gets the current global time dilation.
---@param WorldContextObject UObject
---@return number
function UGameplayStatics.GetGlobalTimeDilation(WorldContextObject) end

---Returns the current GameStateBase or Null if it can't be retrieved
---@param WorldContextObject UObject
---@return AGameStateBase
function UGameplayStatics.GetGameState(WorldContextObject) end

---Returns the current GameModeBase or Null if it can't be retrieved, such as on the client
---@param WorldContextObject UObject
---@return AGameModeBase
function UGameplayStatics.GetGameMode(WorldContextObject) end

---Returns the game instance object
---@param WorldContextObject UObject
---@return UGameInstance
function UGameplayStatics.GetGameInstance(WorldContextObject) end

---Returns the world rendering state
---@param WorldContextObject UObject
---@return boolean
function UGameplayStatics.GetEnableWorldRendering(WorldContextObject) end

---Returns the highest priority reverb settings currently active from any source (Audio Volumes or manual settings).
---@param WorldContextObject UObject
---@return UReverbEffect
function UGameplayStatics.GetCurrentReverbEffect(WorldContextObject) end

---Get the name of the currently-open level.
---@param WorldContextObject UObject
---@param bRemovePrefixString boolean @[opt] 
---@return string
function UGameplayStatics.GetCurrentLevelName(WorldContextObject, bRemovePrefixString) end

---Finds and returns the position of the closest listener to the specified location
---@param WorldContextObject UObject
---@param Location FVector
---@param MaximumRange number
---@param bAllowAttenuationOverride boolean
---@param ListenerPosition FVector @[out] 
---@return boolean
function UGameplayStatics.GetClosestListenerLocation(WorldContextObject, Location, MaximumRange, bAllowAttenuationOverride, ListenerPosition) end

---Get list of available Audio Spatialization Plugin names
---@param WorldContextObject UObject
---@return TArray_string_
function UGameplayStatics.GetAvailableSpatialPluginNames(WorldContextObject) end

---Returns time in seconds since world was brought up for play, IS stopped when game pauses, NOT dilated/clamped.
---@param WorldContextObject UObject
---@return number
function UGameplayStatics.GetAudioTimeSeconds(WorldContextObject) end

---Find all Actors in the world with the specified tag.
---This is a very slow operation, as it will search over every actor in the world.
---@param WorldContextObject UObject
---@param Tag string
---@param OutActors TArray_AActor_ @[out] 
function UGameplayStatics.GetAllActorsWithTag(WorldContextObject, Tag, OutActors) end

---Find all Actors in the world with the specified interface.
---This is a very slow operation, as it will search over every actor in the world.
---@param WorldContextObject UObject
---@param Interface TSubclassOf_UInterface_
---@param OutActors TArray_AActor_ @[out] 
function UGameplayStatics.GetAllActorsWithInterface(WorldContextObject, Interface, OutActors) end

---Find all Actors in the world of the specified class with the specified tag.
---This will be slow if there are many actors of the specified class.
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf_AActor_
---@param Tag string
---@param OutActors TArray_AActor_ @[out] 
function UGameplayStatics.GetAllActorsOfClassWithTag(WorldContextObject, ActorClass, Tag, OutActors) end

---Find all Actors in the world of the specified class.
---This will be slow if there are many actors of the specified class.
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf_AActor_
---@param OutActors TArray_AActor_ @[out] 
function UGameplayStatics.GetAllActorsOfClass(WorldContextObject, ActorClass, OutActors) end

---Find the first Actor in the world of the specified class.
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf_AActor_
---@return AActor
function UGameplayStatics.GetActorOfClass(WorldContextObject, ActorClass) end

---Bind the bounds of an array of Actors
---@param Actors TArray_AActor_
---@param bOnlyCollidingComponents boolean
---@param Center FVector @[out] 
---@param BoxExtent FVector @[out] 
function UGameplayStatics.GetActorArrayBounds(Actors, bOnlyCollidingComponents, Center, BoxExtent) end

---Find the average location (centroid) of an array of Actors
---@param Actors TArray_AActor_
---@return FVector
function UGameplayStatics.GetActorArrayAverageLocation(Actors) end

---Get currently active Audio Spatialization Plugin name
---@param WorldContextObject UObject
---@return string
function UGameplayStatics.GetActiveSpatialPluginName(WorldContextObject) end

---Returns time in seconds since the application was started. Unlike the other time functions this is accurate to the exact time this function is called instead of set once per frame.
---@param Seconds integer @[out] 
---@param PartialSeconds number @[out] 
function UGameplayStatics.GetAccurateRealTime(Seconds, PartialSeconds) end

---Flushes level streaming in blocking fashion and returns when all sub-levels are loaded / visible / hidden
---@param WorldContextObject UObject
function UGameplayStatics.FlushLevelStreaming(WorldContextObject) end

---'Finish' spawning an actor.  This will run the construction script.
---@param Actor AActor
---@param SpawnTransform FTransform
---@param TransformScaleMethod ESpawnActorScaleMethod @[opt] 
---@return AActor
function UGameplayStatics.FinishSpawningActor(Actor, SpawnTransform, TransformScaleMethod) end

---Returns an Actor nearest to Origin from ActorsToCheck array.
---@param Origin FVector
---@param ActorsToCheck TArray_AActor_
---@param Distance number @[out] 
---@return AActor
function UGameplayStatics.FindNearestActor(Origin, ActorsToCheck, Distance) end

---Try and find the UV for a collision impact. Note this ONLY works if 'Support UV From Hit Results' is enabled in Physics Settings.
---@param Hit FHitResult
---@param UVChannel integer
---@param UV FVector2D @[out] 
---@return boolean
function UGameplayStatics.FindCollisionUV(Hit, UVChannel, UV) end

---Toggle live DVR streaming.
---@param Enable boolean
function UGameplayStatics.EnableLiveStreaming(Enable) end

---See if a save game exists with the specified name.
---@param SlotName string
---@param UserIndex integer
---@return boolean
function UGameplayStatics.DoesSaveGameExist(SlotName, UserIndex) end

---Transforms the given 2D screen space coordinate into a 3D world-space point and direction.
---@param Player APlayerController
---@param ScreenPosition FVector2D
---@param WorldPosition FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function UGameplayStatics.DeprojectScreenToWorld(Player, ScreenPosition, WorldPosition, WorldDirection) end

---Transforms the given 2D UV coordinate into a 3D world-space point and direction.
---@param SceneCapture2D ASceneCapture2D
---@param TargetUV FVector2D
---@param WorldPosition FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function UGameplayStatics.DeprojectSceneCaptureToWorld(SceneCapture2D, TargetUV, WorldPosition, WorldDirection) end

---Transforms the given 2D UV coordinate into a 3D world-space point and direction.
---@param SceneCaptureComponent2D USceneCaptureComponent2D
---@param TargetUV FVector2D
---@param WorldPosition FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function UGameplayStatics.DeprojectSceneCaptureComponentToWorld(SceneCaptureComponent2D, TargetUV, WorldPosition, WorldDirection) end

---Delete a save game in a particular slot.
---@param SlotName string
---@param UserIndex integer
---@return boolean
function UGameplayStatics.DeleteGameInSlot(SlotName, UserIndex) end

---Deactivates a Reverb Effect that was applied outside of an Audio Volume
---@param WorldContextObject UObject
---@param TagName string
function UGameplayStatics.DeactivateReverbEffect(WorldContextObject, TagName) end

---This function allows users to create Audio Components in advance of playback with settings specifically for non-spatialized,
---non-distance-attenuated sounds. Audio Components created using this function by default will not have Spatialization applied.
---                                              (by completing or stopping), or whether it can be reactivated
---@param WorldContextObject UObject
---@param Sound USoundBase
---@param VolumeMultiplier number @[opt] 
---@param PitchMultiplier number @[opt] 
---@param StartTime number @[opt] 
---@param ConcurrencySettings USoundConcurrency @[opt] 
---@param bPersistAcrossLevelTransition boolean @[opt] 
---@param bAutoDestroy boolean @[opt] 
---@return UAudioComponent
function UGameplayStatics.CreateSound2D(WorldContextObject, Sound, VolumeMultiplier, PitchMultiplier, StartTime, ConcurrencySettings, bPersistAcrossLevelTransition, bAutoDestroy) end

---Create a new, empty SaveGame object to set data on and then pass to SaveGameToSlot.
---@param SaveGameClass TSubclassOf_USaveGame_
---@return USaveGame
function UGameplayStatics.CreateSaveGameObject(SaveGameClass) end

---Create a new local player for this game, for cases like local multiplayer.
---@param WorldContextObject UObject
---@param UserId FPlatformUserId
---@param bSpawnPlayerController boolean @[opt] 
---@return APlayerController
function UGameplayStatics.CreatePlayerFromPlatformUser(WorldContextObject, UserId, bSpawnPlayerController) end

---Create a new local player for this game, for cases like local multiplayer.
---@param WorldContextObject UObject
---@param ControllerId integer @[opt] 
---@param bSpawnPlayerController boolean @[opt] 
---@return APlayerController
function UGameplayStatics.CreatePlayer(WorldContextObject, ControllerId, bSpawnPlayerController) end

---Clear all sound mix modifiers from the audio system
---@param WorldContextObject UObject
function UGameplayStatics.ClearSoundMixModifiers(WorldContextObject) end

---Clears any existing override of the Sound Class Adjuster in the given Sound Mix
---@param WorldContextObject UObject
---@param InSoundMixModifier USoundMix
---@param InSoundClass USoundClass
---@param FadeOutTime number @[opt] 
function UGameplayStatics.ClearSoundMixClassOverride(WorldContextObject, InSoundMixModifier, InSoundClass, FadeOutTime) end

---Cancels all currently queued streaming packages
function UGameplayStatics.CancelAsyncLoading() end

---Extracts data from a HitResult.
---@param Hit FHitResult
---@param bBlockingHit boolean @[out] 
---@param bInitialOverlap boolean @[out] 
---@param Time number @[out] 
---@param Distance number @[out] 
---@param Location FVector @[out] 
---@param ImpactPoint FVector @[out] 
---@param Normal FVector @[out] 
---@param ImpactNormal FVector @[out] 
---@param PhysMat UPhysicalMaterial @[out] 
---@param HitActor AActor @[out] 
---@param HitComponent UPrimitiveComponent @[out] 
---@param HitBoneName string @[out] 
---@param BoneName string @[out] 
---@param HitItem integer @[out] 
---@param ElementIndex integer @[out] 
---@param FaceIndex integer @[out] 
---@param TraceStart FVector @[out] 
---@param TraceEnd FVector @[out] 
function UGameplayStatics.BreakHitResult(Hit, bBlockingHit, bInitialOverlap, Time, Distance, Location, ImpactPoint, Normal, ImpactNormal, PhysMat, HitActor, HitComponent, HitBoneName, BoneName, HitItem, ElementIndex, FaceIndex, TraceStart, TraceEnd) end

---Calculates an launch velocity for a projectile to hit a specified point.
---@param WorldContextObject UObject
---@param TossVelocity FVector @[out] 
---@param StartLocation FVector
---@param EndLocation FVector
---@param LaunchSpeed number
---@param OverrideGravityZ number
---@param TraceOption integer
---@param CollisionRadius number
---@param bFavorHighArc boolean
---@param bDrawDebug boolean
---@param bAcceptClosestOnNoSolutions boolean @[opt] 
---@return boolean
function UGameplayStatics.BlueprintSuggestProjectileVelocity(WorldContextObject, TossVelocity, StartLocation, EndLocation, LaunchSpeed, OverrideGravityZ, TraceOption, CollisionRadius, bFavorHighArc, bDrawDebug, bAcceptClosestOnNoSolutions) end

---Predict the arc of a virtual projectile affected by gravity with collision checks along the arc. Returns a list of positions of the simulated arc and the destination reached by the simulation.
---Returns true if it hit something (if tracing with collision).
---@param WorldContextObject UObject
---@param OutHit FHitResult @[out] 
---@param OutPathPositions TArray_FVector_ @[out] 
---@param OutLastTraceDestination FVector @[out] 
---@param StartPos FVector
---@param LaunchVelocity FVector
---@param bTracePath boolean
---@param ProjectileRadius number
---@param TraceChannel integer
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray_AActor_
---@param DrawDebugType integer
---@param DrawDebugTime number
---@param SimFrequency number @[opt] 
---@param MaxSimTime number @[opt] 
---@param OverrideGravityZ number @[opt] 
---@return boolean
function UGameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel(WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, TraceChannel, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ) end

---Predict the arc of a virtual projectile affected by gravity with collision checks along the arc. Returns a list of positions of the simulated arc and the destination reached by the simulation.
---Returns true if it hit something.
---@param WorldContextObject UObject
---@param OutHit FHitResult @[out] 
---@param OutPathPositions TArray_FVector_ @[out] 
---@param OutLastTraceDestination FVector @[out] 
---@param StartPos FVector
---@param LaunchVelocity FVector
---@param bTracePath boolean
---@param ProjectileRadius number
---@param ObjectTypes TArray_integer_
---@param bTraceComplex boolean
---@param ActorsToIgnore TArray_AActor_
---@param DrawDebugType integer
---@param DrawDebugTime number
---@param SimFrequency number @[opt] 
---@param MaxSimTime number @[opt] 
---@param OverrideGravityZ number @[opt] 
---@return boolean
function UGameplayStatics.Blueprint_PredictProjectilePath_ByObjectType(WorldContextObject, OutHit, OutPathPositions, OutLastTraceDestination, StartPos, LaunchVelocity, bTracePath, ProjectileRadius, ObjectTypes, bTraceComplex, ActorsToIgnore, DrawDebugType, DrawDebugTime, SimFrequency, MaxSimTime, OverrideGravityZ) end

---Predict the arc of a virtual projectile affected by gravity with collision checks along the arc.
---Returns true if it hit something.
---@param WorldContextObject UObject
---@param PredictParams FPredictProjectilePathParams
---@param PredictResult FPredictProjectilePathResult @[out] 
---@return boolean
function UGameplayStatics.Blueprint_PredictProjectilePath_Advanced(WorldContextObject, PredictParams, PredictResult) end

---Spawns an instance of a blueprint, but does not automatically run its construction script.
---@param WorldContextObject UObject
---@param Blueprint UBlueprint
---@param SpawnTransform FTransform
---@param bNoCollisionFail boolean
---@return AActor
function UGameplayStatics.BeginSpawningActorFromBlueprint(WorldContextObject, Blueprint, SpawnTransform, bNoCollisionFail) end

---Spawns an instance of an actor class, but does not automatically run its construction script.
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf_AActor_
---@param SpawnTransform FTransform
---@param CollisionHandlingOverride ESpawnActorCollisionHandlingMethod @[opt] 
---@param Owner AActor @[opt] 
---@param TransformScaleMethod ESpawnActorScaleMethod @[opt] 
---@return AActor
function UGameplayStatics.BeginDeferredActorSpawnFromClass(WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner, TransformScaleMethod) end

---Returns whether or not subtitles are currently enabled.
---@return boolean
function UGameplayStatics.AreSubtitlesEnabled() end

---Determines if any audio listeners are within range of the specified location
---@param WorldContextObject UObject
---@param Location FVector
---@param MaximumRange number
---@return boolean
function UGameplayStatics.AreAnyListenersWithinRange(WorldContextObject, Location, MaximumRange) end

---Hurt locally authoritative actors within the radius. Will only hit components that block the Visibility channel.
---@param WorldContextObject UObject
---@param BaseDamage number
---@param MinimumDamage number
---@param Origin FVector
---@param DamageInnerRadius number
---@param DamageOuterRadius number
---@param DamageFalloff number
---@param DamageTypeClass TSubclassOf_UDamageType_
---@param IgnoreActors TArray_AActor_
---@param DamageCauser AActor @[opt] 
---@param InstigatedByController AController @[opt] 
---@param DamagePreventionChannel integer @[opt] 
---@return boolean
function UGameplayStatics.ApplyRadialDamageWithFalloff(WorldContextObject, BaseDamage, MinimumDamage, Origin, DamageInnerRadius, DamageOuterRadius, DamageFalloff, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, DamagePreventionChannel) end

---Hurt locally authoritative actors within the radius. Will only hit components that block the Visibility channel.
---@param WorldContextObject UObject
---@param BaseDamage number
---@param Origin FVector
---@param DamageRadius number
---@param DamageTypeClass TSubclassOf_UDamageType_
---@param IgnoreActors TArray_AActor_
---@param DamageCauser AActor @[opt] 
---@param InstigatedByController AController @[opt] 
---@param bDoFullDamage boolean @[opt] 
---@param DamagePreventionChannel integer @[opt] 
---@return boolean
function UGameplayStatics.ApplyRadialDamage(WorldContextObject, BaseDamage, Origin, DamageRadius, DamageTypeClass, IgnoreActors, DamageCauser, InstigatedByController, bDoFullDamage, DamagePreventionChannel) end

---Hurts the specified actor with the specified impact.
---@param DamagedActor AActor
---@param BaseDamage number
---@param HitFromDirection FVector
---@param HitInfo FHitResult
---@param EventInstigator AController
---@param DamageCauser AActor
---@param DamageTypeClass TSubclassOf_UDamageType_
---@return number
function UGameplayStatics.ApplyPointDamage(DamagedActor, BaseDamage, HitFromDirection, HitInfo, EventInstigator, DamageCauser, DamageTypeClass) end

---Hurts the specified actor with generic damage.
---@param DamagedActor AActor
---@param BaseDamage number
---@param EventInstigator AController
---@param DamageCauser AActor
---@param DamageTypeClass TSubclassOf_UDamageType_
---@return number
function UGameplayStatics.ApplyDamage(DamagedActor, BaseDamage, EventInstigator, DamageCauser, DamageTypeClass) end

---If accessibility is enabled, have the platform announce a string to the player.
---These announcements can be interrupted by system accessibiliity announcements or other accessibility announcement requests.
---This should be used judiciously as flooding a player with announcements can be overrwhelming and confusing.
---Try to make announcements concise and clear.
---NOTE: Currently only supported on Win10, Mac, iOS
---@param AnnouncementString string
function UGameplayStatics.AnnounceAccessibleString(AnnouncementString) end

---Activates a Reverb Effect without the need for an Audio Volume
---@param WorldContextObject UObject
---@param ReverbEffect UReverbEffect
---@param TagName string
---@param Priority number @[opt] 
---@param Volume number @[opt] 
---@param FadeTime number @[opt] 
function UGameplayStatics.ActivateReverbEffect(WorldContextObject, ReverbEffect, TagName, Priority, Volume, FadeTime) end

