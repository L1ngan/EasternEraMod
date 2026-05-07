---UGizmoObjectModifyStateTarget is an implementation of IGizmoStateTarget that
---opens and closes change transactions on a target UObject via a GizmoManager.
---@class UGizmoObjectModifyStateTarget : UObject
---@field public TransactionManager TScriptInterface<UToolContextTransactionProvider> @Pointer to the GizmoManager or ToolManager that is used to open/close the transaction
local UGizmoObjectModifyStateTarget = {}

---EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)
function UGizmoObjectModifyStateTarget:EndUpdate() end

---BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)
function UGizmoObjectModifyStateTarget:BeginUpdate() end

