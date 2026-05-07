---This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints.
---@class UControlRigSequencerEditorLibrary : UBlueprintFunctionLibrary
local UControlRigSequencerEditorLibrary = {}

---Peform a Tween operation on the current active sequencer time(must be visible).
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param TweenValue number
---@return boolean
function UControlRigSequencerEditorLibrary.TweenControlRig(LevelSequence, ControlRig, TweenValue) end

---Perform compensation for any spaces at the specified time for the specified control rig
---@param InControlRig UControlRig
---@param InTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.SpaceCompensate(InControlRig, InTime, TimeUnit) end

---Peform a Snap operation to snap the children to the parent.
---@param LevelSequence ULevelSequence
---@param StartFrame FFrameNumber
---@param EndFrame FFrameNumber
---@param ChildrenToSnap FControlRigSnapperSelection
---@param ParentToSnap FControlRigSnapperSelection
---@param SnapSettings UControlRigSnapSettings
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.SnapControlRig(LevelSequence, StartFrame, EndFrame, ChildrenToSnap, ParentToSnap, SnapSettings, TimeUnit) end

---Peform new Smart Reduce filter over the specified control rig section in the current open level sequence. Note existing
---functions like LoadAnimSequenceIntoControlRigSection and BakeToControlRig, will still use the old key reduction algorithm,
---so if you want to bake and then key reduce with the new function, set the bKeyReduce param as false with those functions,
---but then call this function after.
---@param ReduceParams FSmartReduceParams @[out] 
---@param MovieSceneSection UMovieSceneSection
---@return boolean
function UControlRigSequencerEditorLibrary.SmartReduce(ReduceParams, MovieSceneSection) end

---Shows all of the controls for the given section
---@param InSection UMovieSceneSection
function UControlRigSequencerEditorLibrary.ShowAllControls(InSection) end

---Set ControlRig Control's Vector2D values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FVector2D_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigVector2Ds(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's Vector2D value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FVector2D
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigVector2D(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's Transform values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FTransform_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigTransforms(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's TransformNoScale values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FTransformNoScale_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigTransformNoScales(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's TransformNoScale value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FTransformNoScale
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigTransformNoScale(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's Transform value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FTransform
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigTransform(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's Scale values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FVector_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigScales(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's Scale value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FVector
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigScale(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's Rotator values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FRotator_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigRotators(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's Rotator value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FRotator
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigRotator(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's Position values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FVector_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigPositions(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's Position value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FVector
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigPosition(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's int values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_integer_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigInts(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's int value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value integer
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigInt(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's float values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_number_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigFloats(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's float value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value number
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigFloat(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's EulerTransform values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_FEulerTransform_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigEulerTransforms(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's EulerTransform value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value FEulerTransform
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigEulerTransform(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set ControlRig Control's bool values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param Values TArray_boolean_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigBools(LevelSequence, ControlRig, ControlName, Frames, Values, TimeUnit) end

---Set ControlRig Control's bool value at specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param Value boolean
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetLocalControlRigBool(LevelSequence, ControlRig, ControlName, Frame, Value, TimeUnit, bSetKey) end

---Set the controls mask for the given ControlNames
---@param InSection UMovieSceneSection
---@param ControlNames TArray_string_
---@param bVisible boolean
function UControlRigSequencerEditorLibrary.SetControlsMask(InSection, ControlNames, bVisible) end

---Set ControlRig Control's World Transforms at a specific times.
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param WorldTransforms TArray_FTransform_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UControlRigSequencerEditorLibrary.SetControlRigWorldTransforms(LevelSequence, ControlRig, ControlName, Frames, WorldTransforms, TimeUnit) end

---Set ControlRig Control's World Transform at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param WorldTransform FTransform
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bSetKey boolean @[opt] 
function UControlRigSequencerEditorLibrary.SetControlRigWorldTransform(LevelSequence, ControlRig, ControlName, Frame, WorldTransform, TimeUnit, bSetKey) end

---* Set the a key for the Control Rig Space for the Control at the specified time. If space is the same as the current no key witll be set.
---*
---* @@param InSequence Sequence to set the space
---* @@param InControlRig ControlRig with the Control
---* @@param InControlName The name of the Control
---* @@param InSpaceKey  The new space for the Control
---* @@param InTime Time to change the space.
---* @@param TimeUnit Unit for the InTime, either in display rate or tick resolution
---@param InSequence ULevelSequence
---@param InControlRig UControlRig
---@param InControlName string
---@param InSpaceKey FRigElementKey
---@param InTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.SetControlRigSpace(InSequence, InControlRig, InControlName, InSpaceKey, InTime, TimeUnit) end

---Set Control Rig priority order
---@param InSection UMovieSceneTrack
---@param PriorityOrder integer
function UControlRigSequencerEditorLibrary.SetControlRigPriorityOrder(InSection, PriorityOrder) end

---* Convert the control rig track into absolute or layered rig
---*
---* @@param InTrack Control rig track to convert
---* @@param bSetIsLayered Convert to layered rig if true, or absolute if false
---@param InTrack UMovieSceneControlRigParameterTrack
---@param bSetIsLayered boolean
---@return boolean
function UControlRigSequencerEditorLibrary.SetControlRigLayeredMode(InTrack, bSetIsLayered) end

---Set the FK Control Rig to apply mode
---@param InControlRig UControlRig
---@param InApplyMode EControlRigFKRigExecuteMode
---@return boolean
function UControlRigSequencerEditorLibrary.SetControlRigApplyMode(InControlRig, InApplyMode) end

---Set the constraint active key in the current open Sequencer
---@param InConstraint UTickableConstraint
---@param bActive boolean
---@param InFrame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.SetConstraintActiveKey(InConstraint, bActive, InFrame, TimeUnit) end

---Rename the Control Rig Channels in Sequencer to the specified new control names, which should be present on the Control Rig
---@param InSequence ULevelSequence
---@param InControlRig UControlRig
---@param InOldControlNames TArray_string_
---@param InNewControlNames TArray_string_
---@return boolean
function UControlRigSequencerEditorLibrary.RenameControlRigControlChannels(InSequence, InControlRig, InOldControlNames, InNewControlNames) end

---Move the Control Rig Space Key for the Control at the specified time to the new time. This will also move any Control Rig keys at this space switch boundary.
---@param InSequence ULevelSequence
---@param InControlRig UControlRig
---@param InControlName string
---@param InTime FFrameNumber
---@param InNewTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.MoveControlRigSpace(InSequence, InControlRig, InControlName, InTime, InNewTime, TimeUnit) end

---Move the constraint active key in the current open Sequencer
---@param Constraint UTickableConstraint
---@param ConstraintSection UMovieSceneSection
---@param InTime FFrameNumber
---@param InNewTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.MoveConstraintKey(Constraint, ConstraintSection, InTime, InNewTime, TimeUnit) end

---Merge specified anim layers into one layer. Will merge onto the anim layer with the lowest index
---@param Indices TArray_integer_
---@param MergeAnimLayerSettings FMergeAnimLayerSettings
---@return boolean
function UControlRigSequencerEditorLibrary.MergeAnimLayersWithSettings(Indices, MergeAnimLayerSettings) end

---@param Indices TArray_integer_
---@return boolean
function UControlRigSequencerEditorLibrary.MergeAnimLayers(Indices) end

---Load anim sequence into this control rig section
---@param MovieSceneSection UMovieSceneSection
---@param AnimSequence UAnimSequence
---@param SkelMeshComp USkeletalMeshComponent
---@param InStartFrame FFrameNumber
---@param bUseCustomAnimRange boolean
---@param AnimStartRange FFrameNumber
---@param AnimEndRange FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bKeyReduce boolean @[opt] 
---@param Tolerance number @[opt] 
---@param Interpolation EMovieSceneKeyInterpolation @[opt] 
---@param bResetControls boolean @[opt] 
---@param bOntoSelectedControls boolean @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.LoadAnimSequenceIntoControlRigSectionWithRange(MovieSceneSection, AnimSequence, SkelMeshComp, InStartFrame, bUseCustomAnimRange, AnimStartRange, AnimEndRange, TimeUnit, bKeyReduce, Tolerance, Interpolation, bResetControls, bOntoSelectedControls) end

---@param MovieSceneSection UMovieSceneSection
---@param AnimSequence UAnimSequence
---@param SkelMeshComp USkeletalMeshComponent
---@param InStartFrame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param bKeyReduce boolean @[opt] 
---@param Tolerance number @[opt] 
---@param Interpolation EMovieSceneKeyInterpolation @[opt] 
---@param bResetControls boolean @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.LoadAnimSequenceIntoControlRigSection(MovieSceneSection, AnimSequence, SkelMeshComp, InStartFrame, TimeUnit, bKeyReduce, Tolerance, Interpolation, bResetControls) end

---Whether or not the control rig is an Layered Control Rig.
---@param InControlRig UControlRig
---@return boolean
function UControlRigSequencerEditorLibrary.IsLayeredControlRig(InControlRig) end

---Whether or not the control rig is an FK Control Rig.
---@param InControlRig UControlRig
---@return boolean
function UControlRigSequencerEditorLibrary.IsFKControlRig(InControlRig) end

---* Import FBX onto a control rig with the specified track and section
---*
---* @@param InWorld World to import to
---* @@param InSequence Sequence to import
---* @@param InTrack Track to import onto
---* @@param InSection Section to import onto, may be null in which case we use the track's section to key
---* @@param SelectedControlRigNames  List of selected control rig names. Will use them if  ImportFBXControlRigSettings->bImportOntoSelectedControls is true
---* @@param ImportFBXControlRigSettings Settings to control import.
---* @@param InImportFileName Path to fbx file to create
---@param World UWorld
---@param InSequence ULevelSequence
---@param InTrack UMovieSceneControlRigParameterTrack
---@param InSection UMovieSceneControlRigParameterSection
---@param SelectedControlRigNames TArray_string_
---@param ImportFBXControlRigSettings UMovieSceneUserImportFBXControlRigSettings
---@param ImportFilename string
---@return boolean
function UControlRigSequencerEditorLibrary.ImportFBXToControlRigTrack(World, InSequence, InTrack, InSection, SelectedControlRigNames, ImportFBXControlRigSettings, ImportFilename) end

---Hides all of the controls for the given section
---@param InSection UMovieSceneSection
function UControlRigSequencerEditorLibrary.HideAllControls(InSection) end

---* Get the default world space key, can be used a world space.
---@return FRigElementKey
function UControlRigSequencerEditorLibrary.GetWorldSpaceReferenceKey() end

---Get all of the visible control rigs in the level
---@return TArray_UControlRig_
function UControlRigSequencerEditorLibrary.GetVisibleControlRigs() end

---Get SkeletalMeshComponents World Transforms at specific times
---@param LevelSequence ULevelSequence
---@param SkeletalMeshComponent USkeletalMeshComponent
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param ReferenceName string @[opt] 
---@return TArray_FTransform_
function UControlRigSequencerEditorLibrary.GetSkeletalMeshComponentWorldTransforms(LevelSequence, SkeletalMeshComponent, Frames, TimeUnit, ReferenceName) end

---Get SkeletalMeshComponent World Transform at a specific time
---@param LevelSequence ULevelSequence
---@param SkeletalMeshComponent USkeletalMeshComponent
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param ReferenceName string @[opt] 
---@return FTransform
function UControlRigSequencerEditorLibrary.GetSkeletalMeshComponentWorldTransform(LevelSequence, SkeletalMeshComponent, Frame, TimeUnit, ReferenceName) end

---Get ControlRig Control's Vector2D values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FVector2D_
function UControlRigSequencerEditorLibrary.GetLocalControlRigVector2Ds(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's Vector2D value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FVector2D
function UControlRigSequencerEditorLibrary.GetLocalControlRigVector2D(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's Transform values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FTransform_
function UControlRigSequencerEditorLibrary.GetLocalControlRigTransforms(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's TransformNoScale values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FTransformNoScale_
function UControlRigSequencerEditorLibrary.GetLocalControlRigTransformNoScales(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's TransformNoScale value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FTransformNoScale
function UControlRigSequencerEditorLibrary.GetLocalControlRigTransformNoScale(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's Transform value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FTransform
function UControlRigSequencerEditorLibrary.GetLocalControlRigTransform(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's Scale values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FVector_
function UControlRigSequencerEditorLibrary.GetLocalControlRigScales(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's Scale value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FVector
function UControlRigSequencerEditorLibrary.GetLocalControlRigScale(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's Rotator values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FRotator_
function UControlRigSequencerEditorLibrary.GetLocalControlRigRotators(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's Rotator value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FRotator
function UControlRigSequencerEditorLibrary.GetLocalControlRigRotator(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's Position values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FVector_
function UControlRigSequencerEditorLibrary.GetLocalControlRigPositions(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's Position value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FVector
function UControlRigSequencerEditorLibrary.GetLocalControlRigPosition(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's integer values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_integer_
function UControlRigSequencerEditorLibrary.GetLocalControlRigInts(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's integer value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return integer
function UControlRigSequencerEditorLibrary.GetLocalControlRigInt(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's float values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_number_
function UControlRigSequencerEditorLibrary.GetLocalControlRigFloats(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's float value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return number
function UControlRigSequencerEditorLibrary.GetLocalControlRigFloat(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's EulerTransform values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FEulerTransform_
function UControlRigSequencerEditorLibrary.GetLocalControlRigEulerTransforms(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's EulerTransform value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FEulerTransform
function UControlRigSequencerEditorLibrary.GetLocalControlRigEulerTransform(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get ControlRig Control's bool values at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_boolean_
function UControlRigSequencerEditorLibrary.GetLocalControlRigBools(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's bool value at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.GetLocalControlRigBool(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get FKControlRig Apply Mode.
---@param InControlRig UControlRig
---@return EControlRigFKRigExecuteMode
function UControlRigSequencerEditorLibrary.GetFKControlRigApplyMode(InControlRig) end

---* Get the default parent key, can be used a parent space.
---@return FRigElementKey
function UControlRigSequencerEditorLibrary.GetDefaultParentKey() end

---Get the controls mask for the given ControlName
---@param InSection UMovieSceneSection
---@param ControlName string
---@return boolean
function UControlRigSequencerEditorLibrary.GetControlsMask(InSection, ControlName) end

---Get ControlRig Control's World Transforms at specific times
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FTransform_
function UControlRigSequencerEditorLibrary.GetControlRigWorldTransforms(LevelSequence, ControlRig, ControlName, Frames, TimeUnit) end

---Get ControlRig Control's World Transform at a specific time
---@param LevelSequence ULevelSequence
---@param ControlRig UControlRig
---@param ControlName string
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FTransform
function UControlRigSequencerEditorLibrary.GetControlRigWorldTransform(LevelSequence, ControlRig, ControlName, Frame, TimeUnit) end

---Get all of the control rigs and their bindings in the level sequence
---@param LevelSequence ULevelSequence
---@return TArray_FControlRigSequencerBindingProxy_
function UControlRigSequencerEditorLibrary.GetControlRigs(LevelSequence) end

---Get Control Rig prirority order
---@param InSection UMovieSceneTrack
---@return integer
function UControlRigSequencerEditorLibrary.GetControlRigPriorityOrder(InSection) end

---Get all constraints for this object, which is described by a transformable handle
---@param InWorld UWorld
---@param InChild UTransformableHandle
---@return TArray_UTickableConstraint_
function UControlRigSequencerEditorLibrary.GetConstraintsForHandle(InWorld, InChild) end

---Get the constraint keys for the specified constraint
---@param InConstraint UTickableConstraint
---@param ConstraintSection UMovieSceneSection
---@param OutBools TArray_boolean_ @[out] 
---@param OutFrames TArray_FFrameNumber_ @[out] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.GetConstraintKeys(InConstraint, ConstraintSection, OutBools, OutFrames, TimeUnit) end

---Get the animation layer objects
---@return TArray_UAnimLayer_
function UControlRigSequencerEditorLibrary.GetAnimLayers() end

---Helper function to get the index in the anim layer array from the anim layer
---@param AnimLayer UAnimLayer
---@return integer
function UControlRigSequencerEditorLibrary.GetAnimLayerIndex(AnimLayer) end

---Get Actors World Transforms at specific times
---@param LevelSequence ULevelSequence
---@param Actor AActor
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return TArray_FTransform_
function UControlRigSequencerEditorLibrary.GetActorWorldTransforms(LevelSequence, Actor, Frames, TimeUnit) end

---Get Actors World Transform at a specific time
---@param LevelSequence ULevelSequence
---@param Actor AActor
---@param Frame FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FTransform
function UControlRigSequencerEditorLibrary.GetActorWorldTransform(LevelSequence, Actor, Frame, TimeUnit) end

---Find or create a Control Rig track of a specific class based upon the binding
---@param World UWorld
---@param LevelSequence ULevelSequence
---@param ControlRigClass TSubclassOf_UObject_
---@param InBinding FMovieSceneBindingProxy
---@param bIsLayeredControlRig boolean @[opt] 
---@return UMovieSceneTrack
function UControlRigSequencerEditorLibrary.FindOrCreateControlRigTrack(World, LevelSequence, ControlRigClass, InBinding, bIsLayeredControlRig) end

---Find or create a Control Rig Component
---@param World UWorld
---@param LevelSequence ULevelSequence
---@param InBinding FMovieSceneBindingProxy
---@return TArray_UMovieSceneTrack_
function UControlRigSequencerEditorLibrary.FindOrCreateControlRigComponentTrack(World, LevelSequence, InBinding) end

---Exports an FBX from the given control rig section.
---@param Sequence ULevelSequence
---@param Section UMovieSceneControlRigParameterSection
---@param ExportFBXControlRigSettings UMovieSceneUserExportFBXControlRigSettings
---@return boolean
function UControlRigSequencerEditorLibrary.ExportFBXFromControlRigSection(Sequence, Section, ExportFBXControlRigSettings) end

---* Export Passed in Binding as an Anim Sequence, using open Level Sequence in Sequencer. Use this instead of
---* USequencerToolsFunctionLibrary::ExportAnimSequence when you may be exporting an anim sequence from a Spawnable that can't be created dynamically
---* in a closed system.
---*
---* @@AnimSequence The AnimSequence to save into.
---* @@ExportOption The export options for the sequence.
---* @@InBinding Binding to export that has a skelmesh component on it
---* @@InAnimSequenceFilename File to create
---* @@bCreateLink If true will create a link between the animation sequence and the level sequence
---@param AnimSequence UAnimSequence
---@param ExportOption UAnimSeqExportOption
---@param Binding FMovieSceneBindingProxy
---@param bCreateLink boolean
---@return boolean
function UControlRigSequencerEditorLibrary.ExportAnimSequenceFromSequencer(AnimSequence, ExportOption, Binding, bCreateLink) end

---Duplicate anim layer at specified index
---@param Index integer
---@return integer
function UControlRigSequencerEditorLibrary.DuplicateAnimLayer(Index) end

---Delete the Control Rig Space Key for the Control at the specified time. This will delete any attached Control Rig keys at this time and will perform any needed compensation to the new space.
---@param InSequence ULevelSequence
---@param InControlRig UControlRig
---@param InControlName string
---@param InTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.DeleteControlRigSpace(InSequence, InControlRig, InControlName, InTime, TimeUnit) end

---Delete the Key for the Constraint at the specified time.
---@param Constraint UTickableConstraint
---@param ConstraintSection UMovieSceneSection
---@param InTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.DeleteConstraintKey(Constraint, ConstraintSection, InTime, TimeUnit) end

---Delete anim layer at specified index
---@param Index integer
---@return boolean
function UControlRigSequencerEditorLibrary.DeleteAnimLayer(Index) end

---Compensate constraint at all keys
---@param InConstraint UTickableConstraint
---@return boolean
function UControlRigSequencerEditorLibrary.CompensateAll(InConstraint) end

---Compensate constraint at the specfied time
---@param InConstraint UTickableConstraint
---@param InTime FFrameNumber
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.Compensate(InConstraint, InTime, TimeUnit) end

---* Collapse and bake all sections and layers on a control rig track to just one section using passed in settings.
---*
---* @@param InSequence Sequence that has track to collapse
---* @@param InTrack Track for layers to collapse
---* @@param InSettings Settings that determine how to collapse
---@param InSequence ULevelSequence
---@param InTrack UMovieSceneControlRigParameterTrack
---@param InSettings FBakingAnimationKeySettings
---@return boolean
function UControlRigSequencerEditorLibrary.CollapseControlRigAnimLayersWithSettings(InSequence, InTrack, InSettings) end

---* Collapse and bake all sections and layers on a control rig track to just one section.
---*
---* @@param InSequence Sequence that has track to collapse
---* @@param InTrack Track for layers to collapse
---* @@param bKeyReduce If true do key reduction based upon Tolerance, if false don't
---* @@param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually.
---@param InSequence ULevelSequence
---@param InTrack UMovieSceneControlRigParameterTrack
---@param bKeyReduce boolean @[opt] 
---@param Tolerance number @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.CollapseControlRigAnimLayers(InSequence, InTrack, bKeyReduce, Tolerance) end

---Peform specified blend operation based upon selected keys in the curve editor or selected control rig controls
---@param LevelSequence ULevelSequence
---@param BlendOperation EAnimToolBlendOperation
---@param BlendValue number
---@return boolean
function UControlRigSequencerEditorLibrary.BlendValuesOnSelected(LevelSequence, BlendOperation, BlendValue) end

---Bake the current animation in the binding to a Control Rig track
---@param World UWorld
---@param LevelSequence ULevelSequence
---@param ControlRigClass TSubclassOf_UObject_
---@param ExportOptions UAnimSeqExportOption
---@param bReduceKeys boolean
---@param Tolerance number
---@param Binding FMovieSceneBindingProxy
---@param bResetControls boolean @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.BakeToControlRig(World, LevelSequence, ControlRigClass, ExportOptions, bReduceKeys, Tolerance, Binding, bResetControls) end

---Bake specified Control Rig Controls to a specified Space based upon the current settings
---@param InSequence ULevelSequence
---@param InControlRig UControlRig
---@param InControlNames TArray_string_
---@param InSettings FRigSpacePickerBakeSettings
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.BakeControlRigSpace(InSequence, InControlRig, InControlNames, InSettings, TimeUnit) end

---Bake the constraint to keys based on the passed in settings. This will use the open sequencer to bake. See ConstraintsScriptingLibrary to get the list of available constraints
---@param World UWorld
---@param InConstraints TArray_UTickableConstraint_ @[out] 
---@param InSettings FBakingAnimationKeySettings
---@return boolean
function UControlRigSequencerEditorLibrary.BakeConstraints(World, InConstraints, InSettings) end

---Bake the constraint to keys based on the passed in frames. This will use the open sequencer to bake. See ConstraintsScriptingLibrary to get the list of available constraints
---@param World UWorld
---@param Constraint UTickableConstraint
---@param Frames TArray_FFrameNumber_
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return boolean
function UControlRigSequencerEditorLibrary.BakeConstraint(World, Constraint, Frames, TimeUnit) end

---Add a constraint possibly adding to sequencer also if one is open.
---@param World UWorld
---@param InType ETransformConstraintType
---@param InChild UTransformableHandle
---@param InParent UTransformableHandle
---@param bMaintainOffset boolean
---@return UTickableConstraint
function UControlRigSequencerEditorLibrary.AddConstraint(World, InType, InChild, InParent, bMaintainOffset) end

---Add anim layer from objects selected in Sequencer
---@return integer
function UControlRigSequencerEditorLibrary.AddAnimLayerFromSelection() end

