---Blueprint library for altering and analyzing animation / skeletal data
---@class UAnimationBlueprintLibrary : UBlueprintFunctionLibrary
local UAnimationBlueprintLibrary = {}

---Sets the Variable Frame Stripping Settings for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param VariableFrameStrippingSettings UVariableFrameStrippingSettings
function UAnimationBlueprintLibrary.SetVariableFrameStrippingSettings(AnimationSequence, VariableFrameStrippingSettings) end

---Sets the Root Motion Lock Type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param RootMotionLockType integer
function UAnimationBlueprintLibrary.SetRootMotionLockType(AnimationSequence, RootMotionLockType) end

---Sets whether or not Root Motion is Enabled for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param bEnabled boolean
function UAnimationBlueprintLibrary.SetRootMotionEnabled(AnimationSequence, bEnabled) end

---Sets the (Play) Rate Scale for the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param RateScale number
function UAnimationBlueprintLibrary.SetRateScale(AnimationSequenceBase, RateScale) end

---Sets whether or not Root Motion locking is Forced for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param bForced boolean
function UAnimationBlueprintLibrary.SetIsRootMotionLockForced(AnimationSequence, bForced) end

---Sets the Curve Compression Settings for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param CompressionSettings UAnimCurveCompressionSettings
function UAnimationBlueprintLibrary.SetCurveCompressionSettings(AnimationSequence, CompressionSettings) end

---Sets the Bone Compression Settings for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param CompressionSettings UAnimBoneCompressionSettings
function UAnimationBlueprintLibrary.SetBoneCompressionSettings(AnimationSequence, CompressionSettings) end

---Sets the Animation Interpolation type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param InterpolationType EAnimInterpolationType
function UAnimationBlueprintLibrary.SetAnimationInterpolationType(AnimationSequence, InterpolationType) end

---Sets the Additive Base Pose type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param AdditiveBasePoseType integer
function UAnimationBlueprintLibrary.SetAdditiveBasePoseType(AnimationSequence, AdditiveBasePoseType) end

---Sets the Additive Animation type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param AdditiveAnimationType integer
function UAnimationBlueprintLibrary.SetAdditiveAnimationType(AnimationSequence, AdditiveAnimationType) end

---Replaces animation notifies in the specified Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param OldNotifyClass TSubclassOf_UAnimNotifyState_
---@param NewNotifyClass TSubclassOf_UAnimNotifyState_
---@param OnNotifyStateReplaced Delegate
function UAnimationBlueprintLibrary.ReplaceAnimNotifyStates(AnimationSequenceBase, OldNotifyClass, NewNotifyClass, OnNotifyStateReplaced) end

---Replaces animation notifies in the specified Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param OldNotifyClass TSubclassOf_UAnimNotify_
---@param NewNotifyClass TSubclassOf_UAnimNotify_
---@param OnNotifyReplaced Delegate
function UAnimationBlueprintLibrary.ReplaceAnimNotifies(AnimationSequenceBase, OldNotifyClass, NewNotifyClass, OnNotifyReplaced) end

---Removes Virtual Bones with the specified Bone Names from the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param VirtualBoneNames TArray_string_
function UAnimationBlueprintLibrary.RemoveVirtualBones(AnimationSequence, VirtualBoneNames) end

---Removes a Virtual Bone with the specified Bone Name from the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param VirtualBoneName string
function UAnimationBlueprintLibrary.RemoveVirtualBone(AnimationSequence, VirtualBoneName) end

---Removes all Meta Data Instance of the specified Class from the given Animation Asset
---@param AnimationAsset UAnimationAsset
---@param MetaDataClass TSubclassOf_UAnimMetaData_
function UAnimationBlueprintLibrary.RemoveMetaDataOfClass(AnimationAsset, MetaDataClass) end

---Removes the specified Meta Data Instance from the given Animation Asset
---@param AnimationAsset UAnimationAsset
---@param MetaDataObject UAnimMetaData
function UAnimationBlueprintLibrary.RemoveMetaData(AnimationAsset, MetaDataObject) end

---Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param bRemoveNameFromSkeleton boolean @[opt] 
function UAnimationBlueprintLibrary.RemoveCurve(AnimationSequenceBase, CurveName, bRemoveNameFromSkeleton) end

---Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)
---    @@param AnimationSequence : AnimSequence
---    @@param BoneName : Name of bone track user wants to remove
---    @@param bIncludeChildren : true if user wants to include all children of BoneName
---@param AnimationSequence UAnimSequence
---@param BoneName string
---@param ChildrenExcluded TArray_string_
---@param bIncludeChildren boolean @[opt] 
---@param bExcludeRecursively boolean @[opt] 
---@param bFinalize boolean @[opt] 
function UAnimationBlueprintLibrary.RemoveBoneSelectiveAnimation(AnimationSequence, BoneName, ChildrenExcluded, bIncludeChildren, bExcludeRecursively, bFinalize) end

---Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)
---    @@param AnimationSequence : AnimSequence
---    @@param BoneName : Name of bone track user wants to remove
---    @@param bIncludeChildren : true if user wants to include all children of BoneName
---@param AnimationSequence UAnimSequence
---@param BoneName string
---@param bIncludeChildren boolean @[opt] 
---@param bFinalize boolean @[opt] 
function UAnimationBlueprintLibrary.RemoveBoneAnimation(AnimationSequence, BoneName, bIncludeChildren, bFinalize) end

---Removes All Animation Sync Marker found within the Animation Sequence that belong to the specific Notify Track, and returns the number of removed instances
---@param AnimationSequence UAnimSequence
---@param NotifyTrackName string
---@return integer
function UAnimationBlueprintLibrary.RemoveAnimationSyncMarkersByTrack(AnimationSequence, NotifyTrackName) end

---Removes All Animation Sync Marker found within the Animation Sequence whose name matches MarkerName, and returns the number of removed instances
---@param AnimationSequence UAnimSequence
---@param MarkerName string
---@return integer
function UAnimationBlueprintLibrary.RemoveAnimationSyncMarkersByName(AnimationSequence, MarkerName) end

---Removes an Animation Notify Track from Animation Sequence by Name
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
function UAnimationBlueprintLibrary.RemoveAnimationNotifyTrack(AnimationSequenceBase, NotifyTrackName) end

---Removes Animation Notify Events found by Track within the Animation Sequence, and returns the number of removed name instances
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
---@return integer
function UAnimationBlueprintLibrary.RemoveAnimationNotifyEventsByTrack(AnimationSequenceBase, NotifyTrackName) end

---Removes Animation Notify Events found by Name within the Animation Sequence, and returns the number of removed name instances
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyName string
---@return integer
function UAnimationBlueprintLibrary.RemoveAnimationNotifyEventsByName(AnimationSequenceBase, NotifyName) end

---Removes all Virtual Bones from the given Animation Sequence
---@param AnimationSequence UAnimSequence
function UAnimationBlueprintLibrary.RemoveAllVirtualBones(AnimationSequence) end

---Removes all Meta Data from the given Animation Asset
---@param AnimationAsset UAnimationAsset
function UAnimationBlueprintLibrary.RemoveAllMetaData(AnimationAsset) end

---Removes all Animation Curve Data from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)
---@param AnimationSequenceBase UAnimSequenceBase
function UAnimationBlueprintLibrary.RemoveAllCurveData(AnimationSequenceBase) end

---Removes all Animation Bone Track Data from the given Animation Sequence
---@param AnimationSequence UAnimSequence
function UAnimationBlueprintLibrary.RemoveAllBoneAnimation(AnimationSequence) end

---Removes All Animation Sync Markers found within the Animation Sequence, and returns the number of removed instances
---@param AnimationSequence UAnimSequence
function UAnimationBlueprintLibrary.RemoveAllAnimationSyncMarkers(AnimationSequence) end

---Removes All Animation Notify Tracks from Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
function UAnimationBlueprintLibrary.RemoveAllAnimationNotifyTracks(AnimationSequenceBase) end

---Checks whether or not the given Time Value lies within the given Animation Sequence's Length
---@param AnimationSequenceBase UAnimSequenceBase
---@param Time number
---@param IsValid boolean @[out] 
function UAnimationBlueprintLibrary.IsValidTime(AnimationSequenceBase, Time, IsValid) end

---Checks whether or not the given Animation Track Name is contained within the Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackName string
---@return boolean
function UAnimationBlueprintLibrary.IsValidRawAnimationTrackName(AnimationSequenceBase, TrackName) end

---Checks whether or not the given Track Name is a valid Animation Notify Track in the Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
---@return boolean
function UAnimationBlueprintLibrary.IsValidAnimNotifyTrackName(AnimationSequenceBase, NotifyTrackName) end

---Checks whether or not the given Marker Name is a valid Animation Sync Marker Name
---@param AnimationSequence UAnimSequence
---@param MarkerName string
---@return boolean
function UAnimationBlueprintLibrary.IsValidAnimationSyncMarkerName(AnimationSequence, MarkerName) end

---Checks whether or not Root Motion locking is Forced for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@return boolean
function UAnimationBlueprintLibrary.IsRootMotionLockForced(AnimationSequence) end

---Checks whether or not Root Motion is Enabled for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@return boolean
function UAnimationBlueprintLibrary.IsRootMotionEnabled(AnimationSequence) end

---Retrieves, a multiple of, Vector Key(s) from the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Times TArray_number_ @[out] 
---@param Values TArray_FVector_ @[out] 
function UAnimationBlueprintLibrary.GetVectorKeys(AnimationSequenceBase, CurveName, Times, Values) end

---Retrieves the Variable Frame Stripping Settings for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param VariableFrameStrippingSettings UVariableFrameStrippingSettings @[out] 
function UAnimationBlueprintLibrary.GetVariableFrameStrippingSettings(AnimationSequence, VariableFrameStrippingSettings) end

---Retrieves all the Unique Names for the Animation Sync Markers contained by the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param MarkerNames TArray_string_ @[out] 
function UAnimationBlueprintLibrary.GetUniqueMarkerNames(AnimationSequence, MarkerNames) end

---Retrieves, a multiple of, Transformation Key(s) from the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Times TArray_number_ @[out] 
---@param Values TArray_FTransform_ @[out] 
function UAnimationBlueprintLibrary.GetTransformationKeys(AnimationSequenceBase, CurveName, Times, Values) end

---Retrieves the Time Value at the specified Frame Indexfor the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param Frame integer
---@param Time number @[out] 
function UAnimationBlueprintLibrary.GetTimeAtFrame(AnimationSequenceBase, Frame, Time) end

---Retrieves the Length of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param Length number @[out] 
function UAnimationBlueprintLibrary.GetSequenceLength(AnimationSequenceBase, Length) end

---Retrieves the Root Motion Lock Type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param LockType integer @[out] 
function UAnimationBlueprintLibrary.GetRootMotionLockType(AnimationSequence, LockType) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackName string
---@param ScaleData TArray_FVector_ @[out] 
function UAnimationBlueprintLibrary.GetRawTrackScaleData(AnimationSequenceBase, TrackName, ScaleData) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackName string
---@param RotationData TArray_FQuat_ @[out] 
function UAnimationBlueprintLibrary.GetRawTrackRotationData(AnimationSequenceBase, TrackName, RotationData) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackName string
---@param PositionData TArray_FVector_ @[out] 
function UAnimationBlueprintLibrary.GetRawTrackPositionData(AnimationSequenceBase, TrackName, PositionData) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackName string
---@param PositionKeys TArray_FVector_ @[out] 
---@param RotationKeys TArray_FQuat_ @[out] 
---@param ScalingKeys TArray_FVector_ @[out] 
function UAnimationBlueprintLibrary.GetRawTrackData(AnimationSequenceBase, TrackName, PositionKeys, RotationKeys, ScalingKeys) end

---Retrieves the (Play) Rate Scale of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param RateScale number @[out] 
function UAnimationBlueprintLibrary.GetRateScale(AnimationSequenceBase, RateScale) end

---Retrieves the number of animation keys for the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param NumKeys integer @[out] 
function UAnimationBlueprintLibrary.GetNumKeys(AnimationSequenceBase, NumKeys) end

---Retrieves the number of animation frames for the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param NumFrames integer @[out] 
function UAnimationBlueprintLibrary.GetNumFrames(AnimationSequenceBase, NumFrames) end

---Returns all Animation Graph Nodes of the provided Node Class contained by the Animation Blueprint
---@param AnimationBlueprint UAnimBlueprint
---@param NodeClass TSubclassOf_UAnimGraphNode_Base_
---@param GraphNodes TArray_UAnimGraphNode_Base_ @[out] 
---@param bIncludeChildClasses boolean @[opt] 
function UAnimationBlueprintLibrary.GetNodesOfClass(AnimationBlueprint, NodeClass, GraphNodes, bIncludeChildClasses) end

---Retrieves the Names of the Animation Slots used in the given Montage
---@param AnimationMontage UAnimMontage
---@param SlotNames TArray_string_ @[out] 
function UAnimationBlueprintLibrary.GetMontageSlotNames(AnimationMontage, SlotNames) end

---Retrieves all Meta Data Instances from the given Animation Asset
---@param AnimationAsset UAnimationAsset
---@param MetaDataClass TSubclassOf_UAnimMetaData_
---@param MetaDataOfClass TArray_UAnimMetaData_ @[out] 
function UAnimationBlueprintLibrary.GetMetaDataOfClass(AnimationAsset, MetaDataClass, MetaDataOfClass) end

---Retrieves all Meta Data Instances from the given Animation Asset
---@param AnimationAsset UAnimationAsset
---@param MetaData TArray_UAnimMetaData_ @[out] 
function UAnimationBlueprintLibrary.GetMetaData(AnimationAsset, MetaData) end

---Retrieves the Frame Index at the specified Time Value for the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param Time number
---@param Frame integer @[out] 
function UAnimationBlueprintLibrary.GetFrameAtTime(AnimationSequenceBase, Time, Frame) end

---Retrieves an evaluated float value for a given time from the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Time number
---@return number
function UAnimationBlueprintLibrary.GetFloatValueAtTime(AnimationSequenceBase, CurveName, Time) end

---Retrieves, a multiple of, Float Key(s) from the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Times TArray_number_ @[out] 
---@param Values TArray_number_ @[out] 
function UAnimationBlueprintLibrary.GetFloatKeys(AnimationSequenceBase, CurveName, Times, Values) end

---Retrieves the Curve Compression Settings for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param CompressionSettings UAnimCurveCompressionSettings @[out] 
function UAnimationBlueprintLibrary.GetCurveCompressionSettings(AnimationSequence, CompressionSettings) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param BoneNames TArray_string_
---@param Time number
---@param bExtractRootMotion boolean
---@param Poses TArray_FTransform_ @[out] 
---@param PreviewMesh USkeletalMesh @[opt] 
function UAnimationBlueprintLibrary.GetBonePosesForTime(AnimationSequenceBase, BoneNames, Time, bExtractRootMotion, Poses, PreviewMesh) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param BoneNames TArray_string_
---@param Frame integer
---@param bExtractRootMotion boolean
---@param Poses TArray_FTransform_ @[out] 
---@param PreviewMesh USkeletalMesh @[opt] 
function UAnimationBlueprintLibrary.GetBonePosesForFrame(AnimationSequenceBase, BoneNames, Frame, bExtractRootMotion, Poses, PreviewMesh) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param BoneName string
---@param Time number
---@param bExtractRootMotion boolean
---@param Pose FTransform @[out] 
function UAnimationBlueprintLibrary.GetBonePoseForTime(AnimationSequenceBase, BoneName, Time, bExtractRootMotion, Pose) end

---@param AnimationSequenceBase UAnimSequenceBase
---@param BoneName string
---@param Frame integer
---@param bExtractRootMotion boolean
---@param Pose FTransform @[out] 
function UAnimationBlueprintLibrary.GetBonePoseForFrame(AnimationSequenceBase, BoneName, Frame, bExtractRootMotion, Pose) end

---Retrieves the Bone Compression Settings for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param CompressionSettings UAnimBoneCompressionSettings @[out] 
function UAnimationBlueprintLibrary.GetBoneCompressionSettings(AnimationSequence, CompressionSettings) end

---Returns the actual trigger time for a NotifyEvent
---@param NotifyEvent FAnimNotifyEvent
---@return number
function UAnimationBlueprintLibrary.GetAnimNotifyEventTriggerTime(NotifyEvent) end

---Returns the duration for a NotifyEvent, only non-zero for Anim Notify States
---@param NotifyEvent FAnimNotifyEvent
---@return number
function UAnimationBlueprintLibrary.GetAnimNotifyEventDuration(NotifyEvent) end

---Retrieves the Names of the individual ATracks for the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackNames TArray_string_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationTrackNames(AnimationSequenceBase, TrackNames) end

---Retrieves all Animation Sync Markers for the given Notify Track Name from the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param NotifyTrackName string
---@param Markers TArray_FAnimSyncMarker_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationSyncMarkersForTrack(AnimationSequence, NotifyTrackName, Markers) end

---Retrieves all the Animation Sync Markers for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param Markers TArray_FAnimSyncMarker_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationSyncMarkers(AnimationSequence, Markers) end

---Retrieves all Unique Animation Notify Track Names found within the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param TrackNames TArray_string_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationNotifyTrackNames(AnimationSequenceBase, TrackNames) end

---Retrieves all Animation Notify Events for the given Notify Track Name from the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
---@param Events TArray_FAnimNotifyEvent_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationNotifyEventsForTrack(AnimationSequenceBase, NotifyTrackName, Events) end

---Retrieves all Animation Notify Events found within the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyEvents TArray_FAnimNotifyEvent_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationNotifyEvents(AnimationSequenceBase, NotifyEvents) end

---Retrieves all Unique Animation Notify Events found within the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param EventNames TArray_string_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationNotifyEventNames(AnimationSequenceBase, EventNames) end

---Retrieves the Animation Interpolation type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param InterpolationType EAnimInterpolationType @[out] 
function UAnimationBlueprintLibrary.GetAnimationInterpolationType(AnimationSequence, InterpolationType) end

---Returns all Animation Graphs contained by the provided Animation Blueprint
---@param AnimationBlueprint UAnimBlueprint
---@param AnimationGraphs TArray_UAnimationGraph_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationGraphs(AnimationBlueprint, AnimationGraphs) end

---Retrieves the Names of the individual float curves for the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveType ERawCurveTrackTypes
---@param CurveNames TArray_string_ @[out] 
function UAnimationBlueprintLibrary.GetAnimationCurveNames(AnimationSequenceBase, CurveType, CurveNames) end

---Retrieves the Additive Base Pose type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param AdditiveBasePoseType integer @[out] 
function UAnimationBlueprintLibrary.GetAdditiveBasePoseType(AnimationSequence, AdditiveBasePoseType) end

---Retrieves the Additive Animation type for the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param AdditiveAnimationType integer @[out] 
function UAnimationBlueprintLibrary.GetAdditiveAnimationType(AnimationSequence, AdditiveAnimationType) end

---Finds the Bone Path from the given Bone to the Root Bone
---@param AnimationSequenceBase UAnimSequenceBase
---@param BoneName string
---@param BonePath TArray_string_ @[out] 
function UAnimationBlueprintLibrary.FindBonePathToRoot(AnimationSequenceBase, BoneName, BonePath) end

---@param AnimationSequence UAnimSequence
function UAnimationBlueprintLibrary.FinalizeBoneAnimation(AnimationSequence) end

---Gets the root transform from the raw animation at Time
---@param AnimationSequenceBase UAnimSequenceBase
---@param Time number
---@return FTransform
function UAnimationBlueprintLibrary.ExtractRootTrackTransform(AnimationSequenceBase, Time) end

---Evaluates the subframe timecode attribute (e.g. "TCSubframe") of the root bone and returns the resulting value.
---Since the subframe component of FFrameTime is clamped to the range [0.0, 1.0), it cannot accurately represent the use
---case where the timecode metadata represents subframe values as whole numbered subframes instead of as a percentage of a
---frame the way the engine does. The subframe component of the FQualifiedFrameTime returned by
---EvaluateRootBoneTimecodeAttributesAtTime() may not reflect the authored subframe metadata in that case.
---This function allows access to the subframe values that were actually authored in the timecode metadata.
---    on the bone or if it cannot be evaluated, the output parameter will not be modified.
---@param AnimationSequenceBase UAnimSequenceBase
---@param EvalTime number
---@param OutSubframe number @[out] 
---@return boolean
function UAnimationBlueprintLibrary.EvaluateRootBoneTimecodeSubframeAttributeAtTime(AnimationSequenceBase, EvalTime, OutSubframe) end

---Evaluates timecode attributes (e.g. "TCFrame", "TCSecond", etc.) of the root bone and returns the resulting qualified frame time.
---    set, then that will be used as the frame rate of the qualified frame time. Otherwise, the sampling frame rate of the anim
---    sequence is used. If no timecode attributes are present on the bone or if none can be evaluated, the passed object will not be modified.
---@param AnimationSequenceBase UAnimSequenceBase
---@param EvalTime number
---@param OutQualifiedFrameTime FQualifiedFrameTime @[out] 
---@return boolean
function UAnimationBlueprintLibrary.EvaluateRootBoneTimecodeAttributesAtTime(AnimationSequenceBase, EvalTime, OutQualifiedFrameTime) end

---Evaluates timecode attributes (e.g. "TCFrame", "TCSecond", etc.) and TCSlate of the root bone and returns the resulting qualified frame time.
---    set, then that will be used as the frame rate of the qualified frame time. Otherwise, the sampling frame rate of the anim
---    sequence is used. If no timecode attributes are present on the bone or if none can be evaluated, the passed object will not be modified.
---@param BoneName string
---@param AnimationSequenceBase UAnimSequenceBase
---@param EvalTime number
---@param OutQualifiedFrameTime FQualifiedFrameTime @[out] 
---@param Slate string @[out] 
---@return boolean
function UAnimationBlueprintLibrary.EvaluateBoneTimecodeAndSlateAttributesAtTime(BoneName, AnimationSequenceBase, EvalTime, OutQualifiedFrameTime, Slate) end

---Checks whether or not the given Curve Name exist on the Skeleton referenced by the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param CurveType ERawCurveTrackTypes
---@return boolean
function UAnimationBlueprintLibrary.DoesCurveExist(AnimationSequenceBase, CurveName, CurveType) end

---Checks whether or not the given Bone Name exist on the Skeleton referenced by the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param BoneName string
---@param bExists boolean @[out] 
function UAnimationBlueprintLibrary.DoesBoneNameExist(AnimationSequence, BoneName, bExists) end

---Copies animation notifies from Src Animation Sequence to Dest. Creates anim notify tracks as necessary. Returns true on success.
---@param SourceAnimationSequenceBase UAnimSequenceBase
---@param DestinationAnimationSequenceBase UAnimSequenceBase
---@param bDeleteExistingNotifies boolean @[opt] 
function UAnimationBlueprintLibrary.CopyAnimNotifiesFromSequence(SourceAnimationSequenceBase, DestinationAnimationSequenceBase, bDeleteExistingNotifies) end

---Ensures that any curve names that do not exist on the NewSkeleton are added to it, in which case the SmartName on the actual curve itself will also be updated
---@param OldSkeleton USkeleton
---@param NewSkeleton USkeleton
---@param SequenceBase UAnimSequenceBase
---@param CurveType ERawCurveTrackTypes
function UAnimationBlueprintLibrary.CopyAnimationCurveNamesToSkeleton(OldSkeleton, NewSkeleton, SequenceBase, CurveType) end

---Checks whether or not the given Animation Asset contains Meta Data Instance of the specified Meta Data Class
---@param AnimationAsset UAnimationAsset
---@param MetaDataClass TSubclassOf_UAnimMetaData_
---@return boolean
function UAnimationBlueprintLibrary.ContainsMetaDataOfClass(AnimationAsset, MetaDataClass) end

---Adds a Virtual Bone between the Source and Target Bones to the given Animation Sequence
---@param AnimationSequence UAnimSequence
---@param SourceBoneName string
---@param TargetBoneName string
---@param VirtualBoneName string @[out] 
function UAnimationBlueprintLibrary.AddVirtualBone(AnimationSequence, SourceBoneName, TargetBoneName, VirtualBoneName) end

---Adds a multiple of Vector Keys to the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Times TArray_number_
---@param Vectors TArray_FVector_
function UAnimationBlueprintLibrary.AddVectorCurveKeys(AnimationSequenceBase, CurveName, Times, Vectors) end

---Adds a Vector Key to the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Time number
---@param Vector FVector
function UAnimationBlueprintLibrary.AddVectorCurveKey(AnimationSequenceBase, CurveName, Time, Vector) end

---Adds a multiple of Transformation Keys to the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Times TArray_number_
---@param Transforms TArray_FTransform_
function UAnimationBlueprintLibrary.AddTransformationCurveKeys(AnimationSequenceBase, CurveName, Times, Transforms) end

---Adds a Transformation Key to the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Time number
---@param Transform FTransform
function UAnimationBlueprintLibrary.AddTransformationCurveKey(AnimationSequenceBase, CurveName, Time, Transform) end

---Adds an Animation Asset override for the provided AnimationBlueprint, replacing any instance of Target with Override
---@param AnimBlueprint UAnimBlueprint
---@param Target UAnimationAsset
---@param Override UAnimationAsset
---@param bPrintAppliedOverrides boolean @[opt] 
function UAnimationBlueprintLibrary.AddNodeAssetOverride(AnimBlueprint, Target, Override, bPrintAppliedOverrides) end

---Adds an instance of the specified MetaData Class to the given Animation Asset (requires MetaDataObject's outer to be the Animation Asset)
---@param AnimationAsset UAnimationAsset
---@param MetaDataObject UAnimMetaData
function UAnimationBlueprintLibrary.AddMetaDataObject(AnimationAsset, MetaDataObject) end

---Creates and Adds an instance of the specified MetaData Class to the given Animation Asset
---@param AnimationAsset UAnimationAsset
---@param MetaDataClass TSubclassOf_UAnimMetaData_
---@param MetaDataInstance UAnimMetaData @[out] 
function UAnimationBlueprintLibrary.AddMetaData(AnimationAsset, MetaDataClass, MetaDataInstance) end

---Adds a multiple of Float Keys to the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Times TArray_number_
---@param Values TArray_number_
function UAnimationBlueprintLibrary.AddFloatCurveKeys(AnimationSequenceBase, CurveName, Times, Values) end

---Adds a Float Key to the specified Animation Curve inside of the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param Time number
---@param Value number
function UAnimationBlueprintLibrary.AddFloatCurveKey(AnimationSequenceBase, CurveName, Time, Value) end

---Adds an Animation Curve by Type and Name to the given Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param CurveName string
---@param CurveType ERawCurveTrackTypes @[opt] 
---@param bMetaDataCurve boolean @[opt] 
function UAnimationBlueprintLibrary.AddCurve(AnimationSequenceBase, CurveName, CurveType, bMetaDataCurve) end

---Adds an Animation Sync Marker to Notify track in the given Animation with the corresponding Marker Name and Time
---@param AnimationSequence UAnimSequence
---@param MarkerName string
---@param Time number
---@param NotifyTrackName string
function UAnimationBlueprintLibrary.AddAnimationSyncMarker(AnimationSequence, MarkerName, Time, NotifyTrackName) end

---Adds an Animation Notify Track to the Animation Sequence
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
---@param TrackColor FLinearColor @[opt] 
function UAnimationBlueprintLibrary.AddAnimationNotifyTrack(AnimationSequenceBase, NotifyTrackName, TrackColor) end

---Adds an the specific Animation Notify State to the Animation Sequence (requires Notify State's outer to be the Animation Sequence)
---@param AnimationSequenceBase UAnimSequenceBase
---@param StartTime number
---@param Duration number
---@param NotifyState UAnimNotifyState
---@param NotifyTrackName string
function UAnimationBlueprintLibrary.AddAnimationNotifyStateEventObject(AnimationSequenceBase, StartTime, Duration, NotifyState, NotifyTrackName) end

---Adds an Animation Notify State Event to Notify track in the given Animation with the given Notify State creation data
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
---@param StartTime number
---@param Duration number
---@param NotifyStateClass TSubclassOf_UAnimNotifyState_
---@return UAnimNotifyState
function UAnimationBlueprintLibrary.AddAnimationNotifyStateEvent(AnimationSequenceBase, NotifyTrackName, StartTime, Duration, NotifyStateClass) end

---Adds an the specific Animation Notify to the Animation Sequence (requires Notify's outer to be the Animation Sequence)
---@param AnimationSequenceBase UAnimSequenceBase
---@param StartTime number
---@param Notify UAnimNotify
---@param NotifyTrackName string
function UAnimationBlueprintLibrary.AddAnimationNotifyEventObject(AnimationSequenceBase, StartTime, Notify, NotifyTrackName) end

---Adds an Animation Notify Event to Notify track in the given Animation with the given Notify creation data
---@param AnimationSequenceBase UAnimSequenceBase
---@param NotifyTrackName string
---@param StartTime number
---@param NotifyClass TSubclassOf_UAnimNotify_
---@return UAnimNotify
function UAnimationBlueprintLibrary.AddAnimationNotifyEvent(AnimationSequenceBase, NotifyTrackName, StartTime, NotifyClass) end

