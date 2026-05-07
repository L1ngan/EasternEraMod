---UEditorGizmoStateTarget
---@class UEditorGizmoStateTarget : UObject
---@field public TransactionManager TScriptInterface<UToolContextTransactionProvider> @Pointer to the GizmoManager or ToolManager that is used to open/close the transaction (if no Begin/End functions is provided by BeginUpdate)
local UEditorGizmoStateTarget = {}

---EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)
function UEditorGizmoStateTarget:EndUpdate() end

---BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)
function UEditorGizmoStateTarget:BeginUpdate() end

