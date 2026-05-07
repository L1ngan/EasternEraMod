---A PlayerCameraManager is responsible for managing the camera for a particular
---player. It defines the final view properties used by other systems (e.g. the renderer),
---meaning you can think of it as your virtual eyeball in the world. It can compute the
---final camera properties directly, or it can arbitrate/blend between other objects or
---actors that influence the camera (e.g. blending from one CameraActor to another).
---The PlayerCameraManagers primary external responsibility is to reliably respond to
---various Get*() functions, such as GetCameraViewPoint. Most everything else is
---implementation detail and overrideable by user projects.
---By default, a PlayerCameraManager maintains a "view target", which is the primary actor
---the camera is associated with. It can also apply various "post" effects to the final
---view state, such as camera animations, shakes, post-process effects or special
---effects such as dirt on the lens.
---@class APlayerCameraManager : AActor
---@field public PCOwner APlayerController @PlayerController that owns this Camera actor
---@field private TransformComponent USceneComponent @Dummy component we can use to attach things to the camera.
---@field public DefaultFOV number @FOV to use by default.
---@field public DefaultOrthoWidth number @The default desired width (in world units) of the orthographic view (ignored in Perspective mode)
---@field public DefaultAspectRatio number @Default aspect ratio. Most of the time the value from a camera component will be used instead.
---@field public ViewTarget FTViewTarget @Current ViewTarget
---@field public PendingViewTarget FTViewTarget @Pending view target for blending
---@field private CameraCachePrivate FCameraCacheEntry @Cached camera properties.
---@field private LastFrameCameraCachePrivate FCameraCacheEntry @Cached camera properties, one frame old.
---@field protected ModifierList TArray<UCameraModifier> @List of active camera modifier instances that have a chance to update the final camera POV
---@field public DefaultModifiers TArray<TSubclassOf<UCameraModifier>> @List of modifiers to create by default for this camera
---@field public FreeCamDistance number @Distance to place free camera from view target (used in certain CameraStyles)
---@field public FreeCamOffset FVector @Offset to Z free camera position (used in certain CameraStyles)
---@field public ViewTargetOffset FVector @Offset to view target (used in certain CameraStyles)
---@field public OnAudioFadeChangeEvent MulticastDelegate @If bound, broadcast on fade start (with fade time) instead of manually altering audio device's primary volume directly
---@field protected CameraLensEffects TArray<TScriptInterface<UCameraLensEffectInterface>> @CameraBlood emitter attached to this camera
---@field protected CachedCameraShakeMod UCameraModifier_CameraShake @Cached ref to modifier for code-driven screen shakes
---@field protected PostProcessBlendCache TArray<FPostProcessSettings> @Internal list of active post process effects. Parallel array to PostProcessBlendCacheWeights.
---@field protected AnimCameraActor ACameraActor @Internal. Receives the output of individual camera animations.
---@field public bIsOrthographic boolean @True when this camera should use an orthographic perspective instead of FOV
---@field public bAutoCalculateOrthoPlanes boolean @True when this camera should automatically calculated the Near+Far planes
---@field public AutoPlaneShift number @Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane
---@field public bUpdateOrthoPlanes boolean @Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting
---@field public bUseCameraHeightAsViewTarget boolean @If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present)
---@field public bDefaultConstrainAspectRatio boolean @True if black bars should be added if the destination view has a different aspect ratio (only used when a view target doesn't specify whether or not to constrain the aspect ratio; most of the time the value from a camera component is used instead)
---@field public bClientSimulatingViewTarget boolean @True if clients are handling setting their own viewtarget and the server should not replicate it.
---@field public bUseClientSideCameraUpdates boolean @True if server will use camera positions replicated from the client instead of calculating them locally.
---@field public bGameCameraCutThisFrame boolean @True if we did a camera cut this frame. Automatically reset to false every frame. This flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).
---@field public ViewPitchMin number @Minimum view pitch, in degrees.
---@field public ViewPitchMax number @Maximum view pitch, in degrees.
---@field public ViewYawMin number @Minimum view yaw, in degrees.
---@field public ViewYawMax number @Maximum view yaw, in degrees.
---@field public ViewRollMin number @Minimum view roll, in degrees.
---@field public ViewRollMax number @Maximum view roll, in degrees.
---@field private ServerUpdateCameraTimeout number @Timeout in seconds used to determine when to force a call to ServerUpdateCamera
local APlayerCameraManager = {}

---ClientSide camera updates prevents DoUpdateCamera from swapping PendingViewTarget in when the blend is complete, just use a timer to swap
function APlayerCameraManager:SwapPendingViewTargetWhenUsingClientSideCameraUpdates() end

---Immediately stops the given shake instance and invalidates it.
---@param ShakeInstance UCameraShakeBase
---@param bImmediately boolean @[opt] 
function APlayerCameraManager:StopCameraShake(ShakeInstance, bImmediately) end

---Stops camera fading.
function APlayerCameraManager:StopCameraFade() end

---Stops playing all shakes of the given class originating from the given source.
---@param Shake TSubclassOf_UCameraShakeBase_
---@param SourceComponent UCameraShakeSourceComponent
---@param bImmediately boolean @[opt] 
function APlayerCameraManager:StopAllInstancesOfCameraShakeFromSource(Shake, SourceComponent, bImmediately) end

---Stops playing all shakes of the given class.
---@param Shake TSubclassOf_UCameraShakeBase_
---@param bImmediately boolean @[opt] 
function APlayerCameraManager:StopAllInstancesOfCameraShake(Shake, bImmediately) end

---Stops playing all shakes originating from the given source.
---@param SourceComponent UCameraShakeSourceComponent
---@param bImmediately boolean @[opt] 
function APlayerCameraManager:StopAllCameraShakesFromSource(SourceComponent, bImmediately) end

---Stops all active camera shakes on this camera.
---@param bImmediately boolean @[opt] 
function APlayerCameraManager:StopAllCameraShakes(bImmediately) end

---Plays a camera shake on this camera.
---@param ShakeClass TSubclassOf_UCameraShakeBase_
---@param SourceComponent UCameraShakeSourceComponent
---@param Scale number @[opt] 
---@param PlaySpace ECameraShakePlaySpace @[opt] 
---@param UserPlaySpaceRot FRotator
---@return UCameraShakeBase
function APlayerCameraManager:StartCameraShakeFromSource(ShakeClass, SourceComponent, Scale, PlaySpace, UserPlaySpaceRot) end

---Plays a camera shake on this camera.
---@param ShakeClass TSubclassOf_UCameraShakeBase_
---@param Scale number @[opt] 
---@param PlaySpace ECameraShakePlaySpace @[opt] 
---@param UserPlaySpaceRot FRotator
---@return UCameraShakeBase
function APlayerCameraManager:StartCameraShake(ShakeClass, Scale, PlaySpace, UserPlaySpaceRot) end

---Does a camera fade to/from a solid color.  Animates automatically.
---@param FromAlpha number
---@param ToAlpha number
---@param Duration number
---@param Color FLinearColor
---@param bShouldFadeAudio boolean @[opt] 
---@param bHoldWhenFinished boolean @[opt] 
function APlayerCameraManager:StartCameraFade(FromAlpha, ToAlpha, Duration, Color, bShouldFadeAudio, bHoldWhenFinished) end

---Turns on camera fading at the given opacity. Does not auto-animate, allowing user to animate themselves.
---Call StopCameraFade to turn fading back off.
---@param InFadeAmount number
---@param Color FLinearColor
---@param bInFadeAudio boolean
function APlayerCameraManager:SetManualCameraFade(InFadeAmount, Color, bInFadeAudio) end

---Sets the bGameCameraCutThisFrame flag to true (indicating we did a camera cut this frame; useful for game code to call, e.g., when performing a teleport that should be seamless)
function APlayerCameraManager:SetGameCameraCutThisFrame() end

---Removes the given lens effect from the camera.
---@param Emitter TScriptInterface_UCameraLensEffectInterface_
function APlayerCameraManager:RemoveGenericCameraLensEffect(Emitter) end

---Removes the given camera modifier from this camera (if it's on the camera in the first place) and discards it.
---@param ModifierToRemove UCameraModifier
---@return boolean
function APlayerCameraManager:RemoveCameraModifier(ModifierToRemove) end

---Implementable blueprint hook to allow a PlayerCameraManager subclass to
---constrain or otherwise modify the camera during free-camera photography.
---For example, a blueprint may wish to limit the distance from the camera's
---original point, or forbid the camera from passing through walls.
---NewCameraLocation contains the proposed new camera location.
---PreviousCameraLocation contains the camera location in the previous frame.
---OriginalCameraLocation contains the camera location before the game was put
---into photography mode.
---Return ResultCameraLocation as modified according to your constraints.
---@param NewCameraLocation FVector
---@param PreviousCameraLocation FVector
---@param OriginalCameraLocation FVector
---@param ResultCameraLocation FVector @[out] 
function APlayerCameraManager:PhotographyCameraModify(NewCameraLocation, PreviousCameraLocation, OriginalCameraLocation, ResultCameraLocation) end

---Event triggered upon entering Photography mode (before pausing, if
---r.Photography.AutoPause is 1).
function APlayerCameraManager:OnPhotographySessionStart() end

---Event triggered upon leaving Photography mode (after unpausing, if
---r.Photography.AutoPause is 1).
function APlayerCameraManager:OnPhotographySessionEnd() end

---Event triggered upon the start of a multi-part photograph capture (i.e. a
---stereoscopic or 360-degree shot).  This is an ideal time to turn off
---rendering effects that tile badly (UI, subtitles, vignette, very aggressive
---bloom, etc; most of these are automatically disabled when
---r.Photography.AutoPostprocess is 1).
function APlayerCameraManager:OnPhotographyMultiPartCaptureStart() end

---Event triggered upon the end of a multi-part photograph capture, when manual
---free-roaming photographic camera control is about to be returned to the user.
---Here you may re-enable whatever was turned off within
---OnPhotographyMultiPartCaptureStart.
function APlayerCameraManager:OnPhotographyMultiPartCaptureEnd() end

---Returns the PlayerController that owns this camera.
---@return APlayerController
function APlayerCameraManager:GetOwningPlayerController() end

---Returns the camera's current full FOV angle, in degrees.
---@return number
function APlayerCameraManager:GetFOVAngle() end

---Returns camera's current rotation.
---@return FRotator
function APlayerCameraManager:GetCameraRotation() end

---Returns camera's current location.
---@return FVector
function APlayerCameraManager:GetCameraLocation() end

---Returns camera modifier for this camera of the given class, if it exists.
---Exact class match only. If there are multiple modifiers of the same class, the first one is returned.
---@param ModifierClass TSubclassOf_UCameraModifier_
---@return UCameraModifier
function APlayerCameraManager:FindCameraModifierByClass(ModifierClass) end

---Removes all camera lens effects.
function APlayerCameraManager:ClearCameraLensEffects() end

---Blueprint hook to allow blueprints to override existing camera behavior or implement custom cameras.
---If this function returns true, we will use the given returned values and skip further calculations to determine
---final camera POV.
---@param CameraTarget AActor
---@param NewCameraLocation FVector @[out] 
---@param NewCameraRotation FRotator @[out] 
---@param NewCameraFOV number @[out] 
---@return boolean
function APlayerCameraManager:BlueprintUpdateCamera(CameraTarget, NewCameraLocation, NewCameraRotation, NewCameraFOV) end

---Creates and initializes a new camera modifier of the specified class.
---@param ModifierClass TSubclassOf_UCameraModifier_
---@return UCameraModifier
function APlayerCameraManager:AddNewCameraModifier(ModifierClass) end

---Creates a camera lens effect of the given class on this camera.
---@param LensEffectEmitterClass TSubclassOf_AActor_
---@return TScriptInterface_UCameraLensEffectInterface_
function APlayerCameraManager:AddGenericCameraLensEffect(LensEffectEmitterClass) end

