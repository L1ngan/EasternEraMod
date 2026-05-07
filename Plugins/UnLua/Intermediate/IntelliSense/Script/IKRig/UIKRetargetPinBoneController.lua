---The blueprint/python API for editing a Pin Bone Op
---@class UIKRetargetPinBoneController : UIKRetargetOpControllerBase
local UIKRetargetPinBoneController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetPinBoneOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetPinBoneOpSettings
function UIKRetargetPinBoneController:SetSettings(InSettings) end

---Clear all the bone pairs
---       * @@param InBoneToCopyFrom the name of the bone to copy animation from
---       * @@param InBoneToCopyTo the name of the bone to apply animation to
---       * NOTE: if the bone to copy to is already present in the op, it will be updated with the new bone to copy from.
---@param InBoneToCopyFrom string
---@param InBoneToCopyTo string
function UIKRetargetPinBoneController:SetBonePair(InBoneToCopyFrom, InBoneToCopyTo) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetPinBoneOpSettings struct with the current settings used by the op.
---@return FIKRetargetPinBoneOpSettings
function UIKRetargetPinBoneController:GetSettings() end

---Get all the bone pairs currently stored in the op.
---       * @@return a map with target bones as keys and source bones as values.
---@return TMap_string__string_
function UIKRetargetPinBoneController:GetAllBonePairs() end

---Clear all the bone pairs
function UIKRetargetPinBoneController:ClearAllBonePairs() end

