---UGizmoTransformProxyTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)
---based on the internal transform of a UTransformProxy.
---@class UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource
---@field public Proxy UTransformProxy
local UGizmoTransformProxyTransformSource = {}

---@param NewTransform FTransform
function UGizmoTransformProxyTransformSource:SetTransform(NewTransform) end

---@return FTransform
function UGizmoTransformProxyTransformSource:GetTransform() end

