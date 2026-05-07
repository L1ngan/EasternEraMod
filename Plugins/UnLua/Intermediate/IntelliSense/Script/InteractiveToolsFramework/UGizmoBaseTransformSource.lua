---UGizmoBaseTransformSource is a base implementation of IGizmoTransformSource that
---adds an OnTransformChanged delegate. This class cannot be used directly and must be subclassed.
---@class UGizmoBaseTransformSource : UObject
local UGizmoBaseTransformSource = {}

---@param NewTransform FTransform
function UGizmoBaseTransformSource:SetTransform(NewTransform) end

---@return FTransform
function UGizmoBaseTransformSource:GetTransform() end

