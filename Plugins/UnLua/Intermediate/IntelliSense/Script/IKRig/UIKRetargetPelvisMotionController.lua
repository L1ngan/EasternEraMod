---The blueprint/python API for editing a Pelvis Motion Op
---@class UIKRetargetPelvisMotionController : UIKRetargetOpControllerBase
local UIKRetargetPelvisMotionController = {}

---Set the pelvis bone for the target.
---       * @@param InTargetPelvisBone the name of the pelvis bone on the target skeleton.
---@param InTargetPelvisBone string
function UIKRetargetPelvisMotionController:SetTargetPelvisBone(InTargetPelvisBone) end

---Set the pelvis bone for the source.
---       * @@param InSourcePelvisBone the name of the pelvis bone on the source skeleton.
---@param InSourcePelvisBone string
function UIKRetargetPelvisMotionController:SetSourcePelvisBone(InSourcePelvisBone) end

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetPelvisMotionOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetPelvisMotionOpSettings
function UIKRetargetPelvisMotionController:SetSettings(InSettings) end

---Get the pelvis bone for the target.
---       * @@return the name of the pelvis bone on the target skeleton.
---@return string
function UIKRetargetPelvisMotionController:GetTargetPelvisBone() end

---Get the pelvis bone for the source.
---       * @@return the name of the pelvis bone on the source skeleton.
---@return string
function UIKRetargetPelvisMotionController:GetSourcePelvisBone() end

---Get the current op settings as a struct.
---       * @@return FIKRetargetPelvisMotionOpSettings struct with the current settings used by the op.
---@return FIKRetargetPelvisMotionOpSettings
function UIKRetargetPelvisMotionController:GetSettings() end

