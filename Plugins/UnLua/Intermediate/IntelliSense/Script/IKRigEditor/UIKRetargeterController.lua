---A stateless singleton (1-per-asset) class used to make modifications to a UIKRetargeter asset.
---Use UIKRetargeter.GetController() to get the controller for the asset you want to modify.
---@class UIKRetargeterController : UObject
---@field private StructViewer UIKRigStructViewer @a dummy UObject to wrap UStructs for the details panel
local UIKRetargeterController = {}

---Moves the entire skeleton vertically until the specified bone is the same height off the ground as in the reference pose.
---@param ReferenceBone string
---@param SourceOrTarget ERetargetSourceOrTarget
function UIKRetargeterController:SnapBoneToGround(ReferenceBone, SourceOrTarget) end

---Assign a source chain to the given target chain. Animation will be copied from the source to the target.
---@param InSourceChainName string
---@param InTargetChainName string
---@param InOpName string @[opt] 
---@return boolean
function UIKRetargeterController:SetSourceChain(InSourceChainName, InTargetChainName, InOpName) end

---Set a delta rotation for a given bone in the current retarget pose.
---@param BoneName string
---@param RotationOffset FQuat
---@param SkeletonMode ERetargetSourceOrTarget
function UIKRetargeterController:SetRotationOffsetForRetargetPoseBone(BoneName, RotationOffset, SkeletonMode) end

---@param RootSettings FTargetRootSettings
function UIKRetargeterController:SetRootSettings(RootSettings) end

---Set the translation offset on the retarget pelvis bone for the current retarget pose.
---@param TranslationOffset FVector
---@param SourceOrTarget ERetargetSourceOrTarget
function UIKRetargeterController:SetRootOffsetInRetargetPose(TranslationOffset, SourceOrTarget) end

---Toggle an op on/off.
---@param InRetargetOpIndex integer
---@param bIsEnabled boolean
---@return boolean
function UIKRetargeterController:SetRetargetOpEnabled(InRetargetOpIndex, bIsEnabled) end

---@param TargetChainName string
---@param Settings FTargetChainSettings
---@return boolean
function UIKRetargeterController:SetRetargetChainSettings(TargetChainName, Settings) end

---Set the preview skeletal mesh for either source or target
---@param SourceOrTarget ERetargetSourceOrTarget
---@param InPreviewMesh USkeletalMesh
function UIKRetargeterController:SetPreviewMesh(SourceOrTarget, InPreviewMesh) end

---Set the name of the op to parent this op to
---Children ops are forced to execute before their parent
---@param InChildOpName string
---@param InParentOpName string
---@return boolean
function UIKRetargeterController:SetParentOpByName(InChildOpName, InParentOpName) end

---Set the name of the op at the given index in the stack.
---@param InName string
---@param InOpIndex integer
---@return string
function UIKRetargeterController:SetOpName(InName, InOpIndex) end

---Set the IK Rig to use as the source or target (to copy animation FROM/TO)
---@param SourceOrTarget ERetargetSourceOrTarget
---@param IKRig UIKRigDefinition
function UIKRetargeterController:SetIKRig(SourceOrTarget, IKRig) end

---@param GlobalSettings FRetargetGlobalSettings
function UIKRetargeterController:SetGlobalSettings(GlobalSettings) end

---Change which retarget pose is used by the retargeter at runtime.
---@param CurrentPose string
---@param SourceOrTarget ERetargetSourceOrTarget
---@return boolean
function UIKRetargeterController:SetCurrentRetargetPose(CurrentPose, SourceOrTarget) end

---Force the op to run the initial setup. This is normally run when an Op is added through the editor UI.
---NOTE: ops may not have custom initial setup routines; the exact behavior is op-dependent
---@param InOpIndex integer
function UIKRetargeterController:RunOpInitialSetup(InOpIndex) end

---Reset a retarget pose for the specified bones.
---@param PoseToReset string
---@param BonesToReset TArray_string_
---@param SourceOrTarget ERetargetSourceOrTarget
function UIKRetargeterController:ResetRetargetPose(PoseToReset, BonesToReset, SourceOrTarget) end

---Reset the settings for the given chain in the given op back to the defaults.
---@param InTargetChainName string
---@param InOpName string
function UIKRetargeterController:ResetChainSettingsToDefault(InTargetChainName, InOpName) end

---Tell each op to reset any settings associated with this chain
---@param InTargetChainName string
function UIKRetargeterController:ResetChainSettingsInAllOps(InTargetChainName) end

---Rename current retarget pose.
---@param OldPoseName string
---@param NewPoseName string
---@param SourceOrTarget ERetargetSourceOrTarget
---@return boolean
function UIKRetargeterController:RenameRetargetPose(OldPoseName, NewPoseName, SourceOrTarget) end

---Remove a retarget pose.
---@param PoseToRemove string
---@param SourceOrTarget ERetargetSourceOrTarget
---@return boolean
function UIKRetargeterController:RemoveRetargetPose(PoseToRemove, SourceOrTarget) end

---Remove the retarget op at the given stack index
---NOTE: if this op is a parent, all it's children will be removed as well
---@param InOpIndex integer
---@return boolean
function UIKRetargeterController:RemoveRetargetOp(InOpIndex) end

---Remove all ops in the stack.
---@return boolean
function UIKRetargeterController:RemoveAllOps() end

---Move the retarget op at the given index to the target index.
---NOTE: due to constraints on execution order, the actual index may differ from what is requested
---@param InOpToMoveIndex integer
---@param InTargetIndex integer
---@return boolean
function UIKRetargeterController:MoveRetargetOpInStack(InOpToMoveIndex, InTargetIndex) end

---Get the target IK Rig associated with the given Op. May be different than the default IK Rig.
---NOTE: all ops use the global SOURCE IK rig, but each op may use its own custom TARGET IK Rig.
---NOTE: not all ops maintain their own target IK Rig in which case this function returns nullptr
---NOTE: some ops may refer to the target IK Rig used by their parent op. In that case, this function returns the parent Op's IK Rig.
---@param InOpName string
---@return UIKRigDefinition
function UIKRetargeterController:GetTargetIKRigForOp(InOpName) end

---Get the name of the source chain mapped to a given target chain (the chain animation is copied FROM).
---@param InTargetChainName string
---@param InOpName string @[opt] 
---@return string
function UIKRetargeterController:GetSourceChain(InTargetChainName, InOpName) end

---Get a delta rotation for a given bone in the current retarget pose.
---@param BoneName string
---@param SourceOrTarget ERetargetSourceOrTarget
---@return FQuat
function UIKRetargeterController:GetRotationOffsetForRetargetPoseBone(BoneName, SourceOrTarget) end

---@return FTargetRootSettings
function UIKRetargeterController:GetRootSettings() end

---Get the translation offset on the retarget pelvis bone for the current retarget pose.
---@param SourceOrTarget ERetargetSourceOrTarget
---@return FVector
function UIKRetargeterController:GetRootOffsetInRetargetPose(SourceOrTarget) end

---Get access to array of retarget poses.
---@param SourceOrTarget ERetargetSourceOrTarget
---@return TMap_string__FIKRetargetPose_
function UIKRetargeterController:GetRetargetPoses(SourceOrTarget) end

---Get enabled status of the given Op.
---@param InRetargetOpIndex integer
---@return boolean
function UIKRetargeterController:GetRetargetOpEnabled(InRetargetOpIndex) end

---@param TargetChainName string
---@return FTargetChainSettings
function UIKRetargeterController:GetRetargetChainSettings(TargetChainName) end

---Get the preview skeletal mesh
---@param SourceOrTarget ERetargetSourceOrTarget
---@return USkeletalMesh
function UIKRetargeterController:GetPreviewMesh(SourceOrTarget) end

---Get the name of the parent op for the given op.
---@param InOpName string
---@return string
function UIKRetargeterController:GetParentOpByName(InOpName) end

---Get the name of the op at the given index in the stack.
---@param InOpIndex integer
---@return string
function UIKRetargeterController:GetOpName(InOpIndex) end

---Get a controller to get/set the settings for a given op in the stack
---NOTE: the returned UIKRetargetOpControllerBase* should be cast to the type specific to your op to get full functionality for that op.
---@param InOpIndex integer
---@return UIKRetargetOpControllerBase
function UIKRetargeterController:GetOpController(InOpIndex) end

---Get the number of Ops in the stack.
---@return integer
function UIKRetargeterController:GetNumRetargetOps() end

---Get the index of an op.
---@param InOpName string
---@return integer
function UIKRetargeterController:GetIndexOfOpByName(InOpName) end

---Get either source or target IK Rig
---@param SourceOrTarget ERetargetSourceOrTarget
---@return UIKRigDefinition
function UIKRetargeterController:GetIKRig(SourceOrTarget) end

---@return FRetargetGlobalSettings
function UIKRetargeterController:GetGlobalSettings() end

---Get the name of the current retarget pose.
---@param SourceOrTarget ERetargetSourceOrTarget
---@return string
function UIKRetargeterController:GetCurrentRetargetPoseName(SourceOrTarget) end

---Get the current retarget pose.
---@param SourceOrTarget ERetargetSourceOrTarget
---@return FIKRetargetPose
function UIKRetargeterController:GetCurrentRetargetPose(SourceOrTarget) end

---Get the controller for the given retargeter asset
---@param InRetargeterAsset UIKRetargeter
---@return UIKRetargeterController
function UIKRetargeterController.GetController(InRetargeterAsset) end

---Get all target IK Rigs referenced by all ops
---@return TArray_UIKRigDefinition_
function UIKRetargeterController:GetAllTargetIKRigs() end

---@return TArray_URetargetChainSettings_
function UIKRetargeterController:GetAllChainSettings() end

---Duplicate a retarget pose.
---@param PoseToDuplicate string
---@param NewName string
---@param SourceOrTarget ERetargetSourceOrTarget
---@return string
function UIKRetargeterController:DuplicateRetargetPose(PoseToDuplicate, NewName, SourceOrTarget) end

---Add new retarget pose.
---@param NewPoseName string
---@param SourceOrTarget ERetargetSourceOrTarget
---@return string
function UIKRetargeterController:CreateRetargetPose(NewPoseName, SourceOrTarget) end

---Use string comparision to find "best" Source chain to map to each Target chain or clear the mappings
---@param AutoMapType EAutoMapChainType
---@param bForceRemap boolean
---@param InOpName string @[opt] 
function UIKRetargeterController:AutoMapChains(AutoMapType, bForceRemap, InOpName) end

---Automatically align an array of bones and store in the current retarget pose.
---@param BonesToAlign TArray_string_
---@param Method ERetargetAutoAlignMethod
---@param SourceOrTarget ERetargetSourceOrTarget
function UIKRetargeterController:AutoAlignBones(BonesToAlign, Method, SourceOrTarget) end

---Automatically align all bones in mapped chains and store in the current retarget pose.
---@param SourceOrTarget ERetargetSourceOrTarget
---@param Method ERetargetAutoAlignMethod @[opt] 
function UIKRetargeterController:AutoAlignAllBones(SourceOrTarget, Method) end

---Add a new retarget op of the given type to the bottom of the stack. Returns the stack index.
---@param InIKRetargetOpType string
---@return integer
function UIKRetargeterController:AddRetargetOp(InIKRetargetOpType) end

---Automatically add basic retargeting operations
---Adds these ops in the following order: Pelvis Motion, FK Chains, IK Chains, IK Solve and Root Motion
---If any of these ops are already present, they will not be re-added.
function UIKRetargeterController:AddDefaultOps() end

