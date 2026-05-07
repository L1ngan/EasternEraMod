---An individual Pose made of Control Rig Controls
---@class UControlRigPoseAsset : UObject
---@field public Pose FControlRigControlPose
local UControlRigPoseAsset = {}

---@param InControlRig UControlRig
---@param bDoMirror boolean @[opt] 
---@param bClearSelection boolean @[opt] 
function UControlRigPoseAsset:SelectControls(InControlRig, bDoMirror, bClearSelection) end

---@param InControlRig UControlRig
---@param bUseAll boolean
function UControlRigPoseAsset:SavePose(InControlRig, bUseAll) end

---@param CurrentName string
---@param NewName string
function UControlRigPoseAsset:ReplaceControlName(CurrentName, NewName) end

---@param InControlRig UControlRig
---@param bDoKey boolean @[opt] 
---@param bDoMirror boolean @[opt] 
---@param bDoAdditive boolean @[opt] 
function UControlRigPoseAsset:PastePose(InControlRig, bDoKey, bDoMirror, bDoAdditive) end

---@param InControlRig UControlRig
---@param OutPose FControlRigControlPose @[out] 
function UControlRigPoseAsset:GetCurrentPose(InControlRig, OutPose) end

---@return TArray_string_
function UControlRigPoseAsset:GetControlNames() end

---@param ControlRig UControlRig
---@param ControlName string
---@return boolean
function UControlRigPoseAsset:DoesMirrorMatch(ControlRig, ControlName) end

