---UGizmoLambdaStateTarget is an implementation of IGizmoStateTarget that forwards
---calls to its interface functions to external TFunctions
---@class UGizmoLambdaStateTarget : UObject
local UGizmoLambdaStateTarget = {}

---EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)
function UGizmoLambdaStateTarget:EndUpdate() end

---BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)
function UGizmoLambdaStateTarget:BeginUpdate() end

