---@class UGizmoStateTarget : UInterface
local UGizmoStateTarget = {}

---EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)
function UGizmoStateTarget:EndUpdate() end

---BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)
function UGizmoStateTarget:BeginUpdate() end

