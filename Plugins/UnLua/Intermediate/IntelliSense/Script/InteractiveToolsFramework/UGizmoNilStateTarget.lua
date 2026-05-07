---UGizmoNilStateTarget is an implementation of IGizmoStateTarget that does nothing
---@class UGizmoNilStateTarget : UObject
local UGizmoNilStateTarget = {}

---EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)
function UGizmoNilStateTarget:EndUpdate() end

---BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)
function UGizmoNilStateTarget:BeginUpdate() end

