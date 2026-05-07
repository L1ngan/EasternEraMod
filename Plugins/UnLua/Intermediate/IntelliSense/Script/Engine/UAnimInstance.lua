---@class UAnimInstance : UObject
---@field public CurrentSkeleton USkeleton @This is used to extract animation. If Mesh exists, this will be overwritten by Mesh->Skeleton
---@field public RootMotionMode integer @Sets where this blueprint pulls Root Motion from
---@field public bUseMultiThreadedAnimationUpdate boolean @Allows this anim instance to update its native update, blend tree, montages and asset players on a worker thread. This flag is propagated from the UAnimBlueprint to this instance by the compiler. The compiler will attempt to pick up any issues that may occur with threaded update. For updates to run in multiple threads both this flag and the project setting "Allow Multi Threaded Animation Update" should be set.
---@field public bUsingCopyPoseFromMesh boolean @If this AnimInstance has nodes using 'CopyPoseFromMesh' this will be true.
---@field public bReceiveNotifiesFromLinkedInstances boolean @Whether to process notifies from any linked anim instances
---@field public bPropagateNotifiesToLinkedInstances boolean @Whether to propagate notifies to any linked anim instances
---@field public bUseMainInstanceMontageEvaluationData boolean @If true, linked instances will use the main instance's montage data. (i.e. playing a montage on a main instance will play it on the linked layer too.)
---@field private bQueueMontageEvents boolean @True when Montages are being ticked, and Montage Events should be queued. When Montage are being ticked, we queue AnimNotifies and Events. We trigger notifies first, then Montage events.
---@field public OnMontageBlendingOut MulticastDelegate @Called when a montage starts blending out, whether interrupted or finished
---@field public OnMontageBlendedIn MulticastDelegate @Called when a montage finishes blending in
---@field public OnMontageStarted MulticastDelegate @Called when a montage has started
---@field public OnMontageEnded MulticastDelegate @Called when a montage has ended, whether interrupted or finished
---@field public OnAllMontageInstancesEnded MulticastDelegate @Called when all Montage instances have ended.
---@field public OnMontageSectionChanged MulticastDelegate @Called when a montage section changes
---@field protected SlotGroupInertializationRequestDataMap TMap<string, FInertializationRequest> @Inertialization requests gathered this frame. Gets reset in UpdateMontageEvaluationData
---@field public PostCompileValidationClassName FSoftClassPath @Name of Class to do Post Compile Validation. See Class UAnimBlueprintPostCompileValidation.
---@field public NotifyQueue FAnimNotifyQueue @Animation Notifies that has been triggered in the latest tick *
---@field public ActiveAnimNotifyState TArray<FAnimNotifyEvent> @Currently Active AnimNotifyState, stored as a copy of the event as we need to               call NotifyEnd on the event after a deletion in the editor. After this the event               is removed correctly.
---@field public ActiveAnimNotifyEventReference TArray<FAnimNotifyEventReference>
local UAnimInstance = {}

---Get whether a particular notify type was active in a specific state machine last tick.
---@param MachineIndex integer
---@param AnimNotifyType TSubclassOf_UAnimNotify_
---@return boolean
function UAnimInstance:WasAnimNotifyTriggeredInStateMachine(MachineIndex, AnimNotifyType) end

---Get whether the most relevant animation was in a particular notify state last tick.
---@param MachineIndex integer
---@param StateIndex integer
---@param AnimNotifyType TSubclassOf_UAnimNotify_
---@return boolean
function UAnimInstance:WasAnimNotifyTriggeredInSourceState(MachineIndex, StateIndex, AnimNotifyType) end

---Get whether an animation notify of a given type was triggered last tick.
---@param AnimNotifyType TSubclassOf_UAnimNotify_
---@return boolean
function UAnimInstance:WasAnimNotifyTriggeredInAnyState(AnimNotifyType) end

---Get whether a particular notify state is active in a specific state machine last tick.
---@param MachineIndex integer
---@param AnimNotifyStateType TSubclassOf_UAnimNotifyState_
---@return boolean
function UAnimInstance:WasAnimNotifyStateActiveInStateMachine(MachineIndex, AnimNotifyStateType) end

---Get whether a particular notify state is active in a specific state last tick.
---@param MachineIndex integer
---@param StateIndex integer
---@param AnimNotifyStateType TSubclassOf_UAnimNotifyState_
---@return boolean
function UAnimInstance:WasAnimNotifyStateActiveInSourceState(MachineIndex, StateIndex, AnimNotifyStateType) end

---Get whether a particular notify state was active in any state machine last tick.
---@param AnimNotifyStateType TSubclassOf_UAnimNotifyState_
---@return boolean
function UAnimInstance:WasAnimNotifyStateActiveInAnyState(AnimNotifyStateType) end

---Get whether the given state machine triggered the animation notify with the specified name last tick.
---@param MachineIndex integer
---@param NotifyName string
---@return boolean
function UAnimInstance:WasAnimNotifyNameTriggeredInStateMachine(MachineIndex, NotifyName) end

---Get whether the most relevant animation triggered the animation notify with the specified name last tick..
---@param MachineIndex integer
---@param StateIndex integer
---@param NotifyName string
---@return boolean
function UAnimInstance:WasAnimNotifyNameTriggeredInSourceState(MachineIndex, StateIndex, NotifyName) end

---Get whether the animation notify with the specified name triggered last tick.
---@param NotifyName string
---@return boolean
function UAnimInstance:WasAnimNotifyNameTriggeredInAnyState(NotifyName) end

---unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources.
---    DEPRECATED. Use UnlockAIResourcesWithAnimation instead
---@param bUnlockMovement boolean
---@param UnlockAILogic boolean
function UAnimInstance:UnlockAIResources(bUnlockMovement, UnlockAILogic) end

---Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.
---State sharing rules are as with SetLayerOverlay.
---If InClass is null, does nothing.
---@param InClass TSubclassOf_UAnimInstance_
function UAnimInstance:UnlinkAnimClassLayers(InClass) end

---kismet event functions
---@return APawn
function UAnimInstance:TryGetPawnOwner() end

---Stops currently playing slot animation slot or all
---@param InBlendOutTime number @[opt] 
---@param SlotNodeName string @[opt] 
function UAnimInstance:StopSlotAnimation(InBlendOutTime, SlotNodeName) end

---Takes a snapshot of the current skeletal mesh component pose and saves it to the specified snapshot.
---The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1
---and then used it at LOD0 any bones not in LOD1 will use the reference pose
---@param Snapshot FPoseSnapshot @[out] 
function UAnimInstance:SnapshotPose(Snapshot) end

---@param bSet boolean
function UAnimInstance:SetUseMainInstanceMontageEvaluationData(bSet) end

---Set RootMotionMode
---@param Value integer
function UAnimInstance:SetRootMotionMode(Value) end

---Set whether to process notifies from any linked anim instances
---@param bSet boolean
function UAnimInstance:SetReceiveNotifiesFromLinkedInstances(bSet) end

---Set whether to propagate notifies to any linked anim instances
---@param bSet boolean
function UAnimInstance:SetPropagateNotifiesToLinkedInstances(bSet) end

---Sets a morph target to a certain weight.
---@param MorphTargetName string
---@param Value number
function UAnimInstance:SetMorphTarget(MorphTargetName, Value) end

---Takes a snapshot of the current skeletal mesh component pose & saves it internally.
---This snapshot can then be retrieved by name in the animation blueprint for blending.
---The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 and then used it at LOD0 any bones not in LOD1 will use the reference pose
---@param SnapshotName string
function UAnimInstance:SavePoseSnapshot(SnapshotName) end

---Reset any dynamics running simulation-style updates (e.g. on teleport, time skip etc.)
---@param InTeleportType ETeleportType
function UAnimInstance:ResetDynamics(InTeleportType) end

---Attempts to queue a transition request, returns true if the request was successful
---@param EventName string
---@param RequestTimeout number
---@param QueueMode ETransitionRequestQueueMode
---@param OverwriteMode ETransitionRequestOverwriteMode
---@return boolean
function UAnimInstance:RequestTransitionEvent(EventName, RequestTimeout, QueueMode, OverwriteMode) end

---Requests an inertial blend during the next anim graph update. Requires your anim graph to have a slot node belonging to the specified group name
---@param InSlotGroupName string
---@param Duration number
---@param BlendProfile UBlendProfile @[opt] 
function UAnimInstance:RequestSlotGroupInertialization(InSlotGroupName, Duration, BlendProfile) end

---Remove a previously saved pose snapshot from the internal snapshot cache
---@param SnapshotName string
function UAnimInstance:RemovePoseSnapshot(SnapshotName) end

---Returns whether or not the given event transition request has been queued
---@param MachineIndex integer
---@param TransitionIndex integer
---@param EventName string
---@return boolean
function UAnimInstance:QueryTransitionEvent(MachineIndex, TransitionIndex, EventName) end

---Behaves like QueryTransitionEvent but additionally marks the event for consumption
---@param MachineIndex integer
---@param TransitionIndex integer
---@param EventName string
---@return boolean
function UAnimInstance:QueryAndMarkTransitionEvent(MachineIndex, TransitionIndex, EventName) end

---Play normal animation asset on the slot node by creating a dynamic UAnimMontage with blend in settings. You can only play one asset (whether montage or animsequence) at a time per SlotGroup.
---@param Asset UAnimSequenceBase
---@param SlotNodeName string
---@param BlendInSettings FMontageBlendSettings
---@param BlendOutSettings FMontageBlendSettings
---@param InPlayRate number @[opt] 
---@param LoopCount integer @[opt] 
---@param BlendOutTriggerTime number @[opt] 
---@param InTimeToStartMontageAt number @[opt] 
---@return UAnimMontage
function UAnimInstance:PlaySlotAnimationAsDynamicMontage_WithBlendSettings(Asset, SlotNodeName, BlendInSettings, BlendOutSettings, InPlayRate, LoopCount, BlendOutTriggerTime, InTimeToStartMontageAt) end

---Play normal animation asset on the slot node by creating a dynamic UAnimMontage with blend in arguments. You can only play one asset (whether montage or animsequence) at a time per SlotGroup.
---@param Asset UAnimSequenceBase
---@param SlotNodeName string
---@param BlendIn FAlphaBlendArgs
---@param BlendOut FAlphaBlendArgs
---@param InPlayRate number @[opt] 
---@param LoopCount integer @[opt] 
---@param BlendOutTriggerTime number @[opt] 
---@param InTimeToStartMontageAt number @[opt] 
---@return UAnimMontage
function UAnimInstance:PlaySlotAnimationAsDynamicMontage_WithBlendArgs(Asset, SlotNodeName, BlendIn, BlendOut, InPlayRate, LoopCount, BlendOutTriggerTime, InTimeToStartMontageAt) end

---Play normal animation asset on the slot node by creating a dynamic UAnimMontage. You can only play one asset (whether montage or animsequence) at a time per SlotGroup.
---@param Asset UAnimSequenceBase
---@param SlotNodeName string
---@param BlendInTime number @[opt] 
---@param BlendOutTime number @[opt] 
---@param InPlayRate number @[opt] 
---@param LoopCount integer @[opt] 
---@param BlendOutTriggerTime number @[opt] 
---@param InTimeToStartMontageAt number @[opt] 
---@return UAnimMontage
function UAnimInstance:PlaySlotAnimationAsDynamicMontage(Asset, SlotNodeName, BlendInTime, BlendOutTime, InPlayRate, LoopCount, BlendOutTriggerTime, InTimeToStartMontageAt) end

---Stop following the montage's leader in this anim instance
---@param MontageFollower UAnimMontage
function UAnimInstance:MontageSync_StopFollowing(MontageFollower) end

---Synchronize a montage to another anim instance's montage. Both montages must be playing already
---@param MontageFollower UAnimMontage
---@param OtherAnimInstance UAnimInstance
---@param MontageLeader UAnimMontage
function UAnimInstance:MontageSync_Follow(MontageFollower, OtherAnimInstance, MontageLeader) end

---Same as Montage_Stop, but all blend settings are provided instead of using the ones on the montage asset
---@param BlendOutSettings FMontageBlendSettings
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_StopWithBlendSettings(BlendOutSettings, Montage) end

---Same as Montage_Stop. Uses values from the AlphaBlendArgs. Other settings come from the montage asset
---@param BlendOut FAlphaBlendArgs
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_StopWithBlendOut(BlendOut, Montage) end

---Stops all active montages belonging to a group.
---@param InBlendOutTime number
---@param GroupName string
function UAnimInstance:Montage_StopGroupByName(InBlendOutTime, GroupName) end

---Stopped montages will blend out using their montage asset's BlendOut, with InBlendOutTime as the BlendTime
---@param InBlendOutTime number
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_Stop(InBlendOutTime, Montage) end

---Set position.
---@param Montage UAnimMontage
---@param NewPosition number
function UAnimInstance:Montage_SetPosition(Montage, NewPosition) end

---Change AnimMontage play rate. NewPlayRate = 1.0 is the default playback rate.
---@param Montage UAnimMontage
---@param NewPlayRate number @[opt] 
function UAnimInstance:Montage_SetPlayRate(Montage, NewPlayRate) end

---Relink new next section AFTER SectionNameToChange in run-time
---    You can link section order the way you like in editor, but in run-time if you'd like to change it dynamically,
---    use this function to relink the next section
---    For example, you can have Start->Loop->Loop->Loop.... but when you want it to end, you can relink
---    next section of Loop to be End to finish the montage, in which case, it stops looping by Loop->End.
---@param SectionNameToChange string
---@param NextSection string
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_SetNextSection(SectionNameToChange, NextSection, Montage) end

---Resumes a paused animation montage. If reference is NULL, it will resume ALL active montages.
---@param Montage UAnimMontage
function UAnimInstance:Montage_Resume(Montage) end

---Plays an animation montage. Same as Montage_Play, but you can overwrite all of the montage's default blend in settings.
---@param MontageToPlay UAnimMontage
---@param BlendInSettings FMontageBlendSettings
---@param InPlayRate number @[opt] 
---@param ReturnValueType EMontagePlayReturnType @[opt] 
---@param InTimeToStartMontageAt number @[opt] 
---@param bStopAllMontages boolean @[opt] 
---@return number
function UAnimInstance:Montage_PlayWithBlendSettings(MontageToPlay, BlendInSettings, InPlayRate, ReturnValueType, InTimeToStartMontageAt, bStopAllMontages) end

---Plays an animation montage. Same as Montage_Play, but you can specify an AlphaBlend for Blend In settings.
---@param MontageToPlay UAnimMontage
---@param BlendIn FAlphaBlendArgs
---@param InPlayRate number @[opt] 
---@param ReturnValueType EMontagePlayReturnType @[opt] 
---@param InTimeToStartMontageAt number @[opt] 
---@param bStopAllMontages boolean @[opt] 
---@return number
function UAnimInstance:Montage_PlayWithBlendIn(MontageToPlay, BlendIn, InPlayRate, ReturnValueType, InTimeToStartMontageAt, bStopAllMontages) end

---Plays an animation montage. Returns the length of the animation montage in seconds. Returns 0.f if failed to play.
---@param MontageToPlay UAnimMontage
---@param InPlayRate number @[opt] 
---@param ReturnValueType EMontagePlayReturnType @[opt] 
---@param InTimeToStartMontageAt number @[opt] 
---@param bStopAllMontages boolean @[opt] 
---@return number
function UAnimInstance:Montage_Play(MontageToPlay, InPlayRate, ReturnValueType, InTimeToStartMontageAt, bStopAllMontages) end

---Pauses the animation montage. If reference is NULL, it will pause ALL active montages.
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_Pause(Montage) end

---Makes a montage jump to the end of a named section. If Montage reference is NULL, it will do that to all active montages.
---@param SectionName string
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_JumpToSectionsEnd(SectionName, Montage) end

---Makes a montage jump to a named section. If Montage reference is NULL, it will do that to all active montages.
---@param SectionName string
---@param Montage UAnimMontage @[opt] 
function UAnimInstance:Montage_JumpToSection(SectionName, Montage) end

---Returns true if the animation montage is currently active and playing.
---      If reference is NULL, it will return true is ANY montage is currently active and playing.
---@param Montage UAnimMontage
---@return boolean
function UAnimInstance:Montage_IsPlaying(Montage) end

---Returns true if the animation montage is active. If the Montage reference is NULL, it will return true if any Montage is active.
---@param Montage UAnimMontage
---@return boolean
function UAnimInstance:Montage_IsActive(Montage) end

---Get Current Montage Position
---@param Montage UAnimMontage
---@return number
function UAnimInstance:Montage_GetPosition(Montage) end

---Get PlayRate for Montage. This does not account for RateScale, so it may not reflect the actual play rate seen in game (see Montage_GetEffectivePlayRate).
---      If Montage reference is NULL, PlayRate for any Active Montage will be returned.
---      If Montage is not playing, 0 is returned.
---@param Montage UAnimMontage
---@return number
function UAnimInstance:Montage_GetPlayRate(Montage) end

---return true if Montage is not currently active. (not valid or blending out)
---@param Montage UAnimMontage
---@return boolean
function UAnimInstance:Montage_GetIsStopped(Montage) end

---Get scaled PlayRate for Montage. This accounts for RateScale, so it will reflect the actual play rate seen in game.
---      If Montage reference is NULL, scaled PlayRate for any Active Montage will be returned.
---      If Montage is not playing, 0 is returned.
---@param Montage UAnimMontage
---@return number
function UAnimInstance:Montage_GetEffectivePlayRate(Montage) end

---Returns the name of the current animation montage section.
---@param Montage UAnimMontage @[opt] 
---@return string
function UAnimInstance:Montage_GetCurrentSection(Montage) end

---Get the current blend time of the Montage.
---      If Montage reference is NULL, it will return the current blend time on the first active Montage found.
---@param Montage UAnimMontage
---@return number
function UAnimInstance:Montage_GetBlendTime(Montage) end

---locks indicated AI resources of animated pawn
---    DEPRECATED. Use LockAIResourcesWithAnimation instead
---@param bLockMovement boolean
---@param LockAILogic boolean
function UAnimInstance:LockAIResources(bLockMovement, LockAILogic) end

---Runs through all nodes, attempting to find a linked instance by name/tag, then sets the class of each node if the tag matches
---@param InTag string
---@param InClass TSubclassOf_UAnimInstance_
function UAnimInstance:LinkAnimGraphByTag(InTag, InClass) end

---Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.
---Allocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared
---and a separate linked instance is allocated for each layer node.
---If InClass is null, then all layers are reset to their defaults.
---@param InClass TSubclassOf_UAnimInstance_
function UAnimInstance:LinkAnimClassLayers(InClass) end

---@return boolean
function UAnimInstance:IsUsingMainInstanceMontageEvaluationData() end

---@param InSyncGroupName string
---@param PreviousMarker string
---@param NextMarker string
---@param bRespectMarkerOrder boolean @[opt] 
---@return boolean
function UAnimInstance:IsSyncGroupBetweenMarkers(InSyncGroupName, PreviousMarker, NextMarker, bRespectMarkerOrder) end

---Return true if this instance has an active montage in the given slot. A UAnimMontage that is playing in the slot and blending out is not determined to be "active".
---@param SlotNodeName string
---@return boolean
function UAnimInstance:IsSlotActive(SlotNodeName) end

---Return true if it's playing the slot animation
---@param Asset UAnimSequenceBase
---@param SlotNodeName string
---@return boolean
function UAnimInstance:IsPlayingSlotAnimation(Asset, SlotNodeName) end

---Returns true if any montage is playing currently. Doesn't mean it's active though, it could be blending out.
---@return boolean
function UAnimInstance:IsAnyMontagePlaying() end

---@param SyncGroup string
---@param MarkerName string
---@return boolean
function UAnimInstance:HasMarkerBeenHitThisFrame(SyncGroup, MarkerName) end

------ AI communication end ---
---@param SyncGroup string
---@param MarkerName string
---@param OutMarkerTime number @[out] 
---@return boolean
function UAnimInstance:GetTimeToClosestMarker(SyncGroup, MarkerName, OutMarkerTime) end

---@param InSyncGroupName string
---@return FMarkerSyncAnimPosition
function UAnimInstance:GetSyncGroupPosition(InSyncGroupName) end

---Get the time remaining as a fraction of the duration for the most relevant animation in the source state
---@param MachineIndex integer
---@param StateIndex integer
---@return number
function UAnimInstance:GetRelevantAnimTimeRemainingFraction(MachineIndex, StateIndex) end

---Get the time remaining in seconds for the most relevant animation in the source state
---@param MachineIndex integer
---@param StateIndex integer
---@return number
function UAnimInstance:GetRelevantAnimTimeRemaining(MachineIndex, StateIndex) end

---Get the current accumulated time as a fraction of the length of the most relevant animation in the source state
---@param MachineIndex integer
---@param StateIndex integer
---@return number
function UAnimInstance:GetRelevantAnimTimeFraction(MachineIndex, StateIndex) end

---Get the current accumulated time in seconds for the most relevant animation in the source state
---@param MachineIndex integer
---@param StateIndex integer
---@return number
function UAnimInstance:GetRelevantAnimTime(MachineIndex, StateIndex) end

---Get the length in seconds of the most relevant animation in the source state
---@param MachineIndex integer
---@param StateIndex integer
---@return number
function UAnimInstance:GetRelevantAnimLength(MachineIndex, StateIndex) end

---Get whether to process notifies from any linked anim instances
---@return boolean
function UAnimInstance:GetReceiveNotifiesFromLinkedInstances() end

---Get whether to propagate notifies to any linked anim instances
---@return boolean
function UAnimInstance:GetPropagateNotifiesToLinkedInstances() end

---Returns the skeletal mesh component that has created this AnimInstance
---@return USkeletalMeshComponent
function UAnimInstance:GetOwningComponent() end

---Returns the owning actor of this AnimInstance
---@return AActor
function UAnimInstance:GetOwningActor() end

---Runs through all nodes, attempting to find all distinct layer linked instances in the group
---@param InGroup string
---@param OutLinkedInstances TArray_UAnimInstance_ @[out] 
function UAnimInstance:GetLinkedAnimLayerInstancesByGroup(InGroup, OutLinkedInstances) end

---Gets layer linked instance that matches group and class
---@param InGroup string
---@param InClass TSubclassOf_UAnimInstance_
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimLayerInstanceByGroupAndClass(InGroup, InClass) end

---Gets the layer linked instance corresponding to the specified group
---@param InGroup string
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimLayerInstanceByGroup(InGroup) end

---Gets the first layer linked instance corresponding to the specified class, optionally if bCheckForChildClass is true, it will check IsChildOf on InClass.
---@param InClass TSubclassOf_UAnimInstance_
---@param bCheckForChildClass boolean @[opt] 
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimLayerInstanceByClass(InClass, bCheckForChildClass) end

---@param InTag string
---@param OutLinkedInstances TArray_UAnimInstance_ @[out] 
function UAnimInstance:GetLinkedAnimGraphInstancesByTag(InTag, OutLinkedInstances) end

---Runs through all nodes, attempting to find the first linked instance by name/tag
---@param InTag string
---@return UAnimInstance
function UAnimInstance:GetLinkedAnimGraphInstanceByTag(InTag) end

---Get the elapsed time as a fraction of the crossfade duration of a specified transition
---@param MachineIndex integer
---@param TransitionIndex integer
---@return number
function UAnimInstance:GetInstanceTransitionTimeElapsedFraction(MachineIndex, TransitionIndex) end

---Get the elapsed time in seconds of a specified transition
---@param MachineIndex integer
---@param TransitionIndex integer
---@return number
function UAnimInstance:GetInstanceTransitionTimeElapsed(MachineIndex, TransitionIndex) end

---Get the crossfade duration of a specified transition
---@param MachineIndex integer
---@param TransitionIndex integer
---@return number
function UAnimInstance:GetInstanceTransitionCrossfadeDuration(MachineIndex, TransitionIndex) end

---Get the blend weight of a specified state
---@param MachineIndex integer
---@param StateIndex integer
---@return number
function UAnimInstance:GetInstanceStateWeight(MachineIndex, StateIndex) end

---Get the blend weight of a specified state machine
---@param MachineIndex integer
---@return number
function UAnimInstance:GetInstanceMachineWeight(MachineIndex) end

---Get the current elapsed time of a state within the specified state machine
---@param MachineIndex integer
---@return number
function UAnimInstance:GetInstanceCurrentStateElapsedTime(MachineIndex) end

---Get the time as a fraction of the asset length of an animation in an asset player node
---@param AssetPlayerIndex integer
---@return number
function UAnimInstance:GetInstanceAssetPlayerTimeFromEndFraction(AssetPlayerIndex) end

---Get the time in seconds from the end of an animation in an asset player node
---@param AssetPlayerIndex integer
---@return number
function UAnimInstance:GetInstanceAssetPlayerTimeFromEnd(AssetPlayerIndex) end

---Get the current accumulated time as a fraction for an asset player node
---@param AssetPlayerIndex integer
---@return number
function UAnimInstance:GetInstanceAssetPlayerTimeFraction(AssetPlayerIndex) end

---Get the current accumulated time in seconds for an asset player node
---@param AssetPlayerIndex integer
---@return number
function UAnimInstance:GetInstanceAssetPlayerTime(AssetPlayerIndex) end

---Gets the length in seconds of the asset referenced in an asset player node
---@param AssetPlayerIndex integer
---@return number
function UAnimInstance:GetInstanceAssetPlayerLength(AssetPlayerIndex) end

---Get the current delta time
---@return number
function UAnimInstance:GetDeltaSeconds() end

---Returns whether a named curve was found, its value, and a default value when it's not found.
---@param CurveName string
---@param DefaultValue number
---@param OutValue number @[out] 
---@return boolean
function UAnimInstance:GetCurveValueWithDefault(CurveName, DefaultValue, OutValue) end

---Returns the value of a named curve.
---@param CurveName string
---@return number
function UAnimInstance:GetCurveValue(CurveName) end

---Returns the name of a currently active state in a state machine.
---@param MachineIndex integer
---@return string
function UAnimInstance:GetCurrentStateName(MachineIndex) end

---Get a current Active Montage in this AnimInstance.
---              Note that there might be multiple Active at the same time. This will only return the first active one it finds. *
---@return UAnimMontage
function UAnimInstance:GetCurrentActiveMontage() end

---Returns a blend profile by name from our current skeleton. Null if not found.
---@param InBlendProfileName string
---@return UBlendProfile
function UAnimInstance:GetBlendProfileByName(InBlendProfileName) end

---This returns all curve names. This is the same as calling GetActiveCurveNames with CurveType == AttributeCurve
---@param OutNames TArray_string_ @[out] 
function UAnimInstance:GetAllCurveNames(OutNames) end

---This returns last up-to-date list of active curve names
---@param CurveType EAnimCurveType
---@param OutNames TArray_string_ @[out] 
function UAnimInstance:GetActiveCurveNames(CurveType, OutNames) end

---Returns true if there is an animation montage is currently active and playing that was created from the provided animation.
---@param Animation UAnimSequenceBase
---@return boolean
function UAnimInstance:DynamicMontage_IsPlayingFrom(Animation) end

---Removes all queued transition requests with the given event name
---@param EventName string
function UAnimInstance:ClearTransitionEvents(EventName) end

---Clears the current morph targets.
function UAnimInstance:ClearMorphTargets() end

---Removes all queued transition requests
function UAnimInstance:ClearAllTransitionEvents() end

---@param Velocity FVector
---@param BaseRotation FRotator
---@return number
function UAnimInstance:CalculateDirection(Velocity, BaseRotation) end

---Executed when the Animation is updated
---@param DeltaTimeX number
function UAnimInstance:BlueprintUpdateAnimation(DeltaTimeX) end

---Executed when the Animation Blueprint is updated on a worker thread, just prior to graph update
---@param DeltaTime number
function UAnimInstance:BlueprintThreadSafeUpdateAnimation(DeltaTime) end

---Executed after the Animation is evaluated
function UAnimInstance:BlueprintPostEvaluateAnimation() end

---Executed when the all Linked Animation Layers are initialized
function UAnimInstance:BlueprintLinkedAnimationLayersInitialized() end

---Executed when the Animation is initialized
function UAnimInstance:BlueprintInitializeAnimation() end

---Executed when begin play is called on the owning component
function UAnimInstance:BlueprintBeginPlay() end

---Get local weight of any montages this slot node is playing. If this slot is not currently playing a montage, it will return 0.
---@param SlotNodeName string
---@return number
function UAnimInstance:Blueprint_GetSlotMontageLocalWeight(SlotNodeName) end

---Get the 'main' anim instance, i.e. the one that is hosted on the skeletal mesh component
---@return UAnimInstance
function UAnimInstance:Blueprint_GetMainAnimInstance() end

