---Script exposed functionality for populating, retrieving data from and setting data on FAnimPose
---@class UAnimPoseExtensions : UBlueprintFunctionLibrary
local UAnimPoseExtensions = {}

---Sets the transform for the provided bone name for a pose
---@param Pose FAnimPose @[out] 
---@param Transform FTransform
---@param BoneName string
---@param Space EAnimPoseSpaces @[opt] 
function UAnimPoseExtensions.SetBonePose(Pose, Transform, BoneName, Space) end

---Returns whether the Anim Pose contains valid data
---@param Pose FAnimPose
---@return boolean
function UAnimPoseExtensions.IsValid(Pose) end

---Retrieves the transform for the provided socket name from a pose
---@param Pose FAnimPose
---@param SocketName string
---@param Space EAnimPoseSpaces @[opt] 
---@return FTransform
function UAnimPoseExtensions.GetSocketPose(Pose, SocketName, Space) end

---Returns an array of socket names contained by the pose
---@param Pose FAnimPose
---@param Sockets TArray_string_ @[out] 
function UAnimPoseExtensions.GetSocketNames(Pose, Sockets) end

---Retrieves the relative transform between the two provided bone names
---@param Pose FAnimPose
---@param FromBoneName string
---@param ToBoneName string
---@param Space EAnimPoseSpaces @[opt] 
---@return FTransform
function UAnimPoseExtensions.GetRelativeTransform(Pose, FromBoneName, ToBoneName, Space) end

---Retrieves the relative transform between reference and animated bone transform
---@param Pose FAnimPose
---@param BoneName string
---@param Space EAnimPoseSpaces @[opt] 
---@return FTransform
function UAnimPoseExtensions.GetRelativeToRefPoseTransform(Pose, BoneName, Space) end

---Retrieves the relative transform for the reference pose between the two provided bone names
---@param Pose FAnimPose
---@param FromBoneName string
---@param ToBoneName string
---@param Space EAnimPoseSpaces @[opt] 
---@return FTransform
function UAnimPoseExtensions.GetRefPoseRelativeTransform(Pose, FromBoneName, ToBoneName, Space) end

---Populates an Anim Pose with the reference poses stored for the provided USkeleton
---@param Skeleton USkeleton
---@param OutPose FAnimPose @[out] 
function UAnimPoseExtensions.GetReferencePose(Skeleton, OutPose) end

---Retrieves the reference pose transform for the provided bone name
---@param Pose FAnimPose
---@param BoneName string
---@param Space EAnimPoseSpaces @[opt] 
---@return FTransform
function UAnimPoseExtensions.GetRefBonePose(Pose, BoneName, Space) end

---Returns the weight of an evaluated curve - if found
---@param Pose FAnimPose
---@param CurveName string
---@return number
function UAnimPoseExtensions.GetCurveWeight(Pose, CurveName) end

---Returns an array of curve names contained by the pose
---@param Pose FAnimPose
---@param Curves TArray_string_ @[out] 
function UAnimPoseExtensions.GetCurveNames(Pose, Curves) end

---Retrieves the transform for the provided bone name from a pose
---@param Pose FAnimPose
---@param BoneName string
---@param Space EAnimPoseSpaces @[opt] 
---@return FTransform
function UAnimPoseExtensions.GetBonePose(Pose, BoneName, Space) end

---Returns an array of bone names contained by the pose
---@param Pose FAnimPose
---@param Bones TArray_string_ @[out] 
function UAnimPoseExtensions.GetBoneNames(Pose, Bones) end

---Evaluates an Animation Sequence Base to generate a valid Anim Pose instance
---@param AnimationSequenceBase UAnimSequenceBase
---@param Time number
---@param EvaluationOptions FAnimPoseEvaluationOptions
---@param Pose FAnimPose @[out] 
function UAnimPoseExtensions.GetAnimPoseAtTime(AnimationSequenceBase, Time, EvaluationOptions, Pose) end

---Evaluates an Animation Sequence Base to generate a valid Anim Pose instance
---@param AnimationSequenceBase UAnimSequenceBase
---@param FrameIndex integer
---@param EvaluationOptions FAnimPoseEvaluationOptions
---@param Pose FAnimPose @[out] 
function UAnimPoseExtensions.GetAnimPoseAtFrame(AnimationSequenceBase, FrameIndex, EvaluationOptions, Pose) end

---Evaluates an Animation Blueprint instance, using the provided Anim Pose and its Input Pose value, generating a valid Anim Pose using the result. Warning this function may cause performance issues.
---@param InputPose FAnimPose
---@param TargetSkeletalMesh USkeletalMesh
---@param AnimationBlueprint UAnimBlueprint
---@param OutPose FAnimPose @[out] 
function UAnimPoseExtensions.EvaluateAnimationBlueprintWithInputPose(InputPose, TargetSkeletalMesh, AnimationBlueprint, OutPose) end

