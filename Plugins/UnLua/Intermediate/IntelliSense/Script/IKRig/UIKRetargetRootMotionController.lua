---The blueprint/python API for editing a Root Motion Op
---@class UIKRetargetRootMotionController : UIKRetargetOpControllerBase
local UIKRetargetRootMotionController = {}

---Set the root bone for the target.
---       * @@param InTargetRootBone the name of the root bone on the target skeleton.
---@param InTargetRootBone string
function UIKRetargetRootMotionController:SetTargetRootBone(InTargetRootBone) end

---Set the pelvis bone for the target.
---       * @@param InTargetPelvisBone the name of the pelvis bone on the target skeleton.
---@param InTargetPelvisBone string
function UIKRetargetRootMotionController:SetTargetPelvisBone(InTargetPelvisBone) end

---Set the root bone for the source.
---       * @@param InSourceRootBone the name of the root bone on the source skeleton.
---@param InSourceRootBone string
function UIKRetargetRootMotionController:SetSourceRootBone(InSourceRootBone) end

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetRootMotionOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetRootMotionOpSettings
function UIKRetargetRootMotionController:SetSettings(InSettings) end

---Get the root bone for the target.
---       * @@return the name of the root bone on the target skeleton.
---@return string
function UIKRetargetRootMotionController:GetTargetRootBone() end

---Get the pelvis bone for the target.
---       * @@return the name of the pelvis bone on the target skeleton.
---@return string
function UIKRetargetRootMotionController:GetTargetPelvisBone() end

---Get the root bone for the source.
---       * @@return the name of the root bone on the source skeleton.
---@return string
function UIKRetargetRootMotionController:GetSourceRootBone() end

---Get the current op settings as a struct.
---       * @@return FIKRetargetRootMotionOpSettings struct with the current settings used by the op.
---@return FIKRetargetRootMotionOpSettings
function UIKRetargetRootMotionController:GetSettings() end

