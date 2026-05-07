---UGizmoTransformChangeStateTarget is an implementation of IGizmoStateTarget that
---emits an FComponentWorldTransformChange on a target USceneComponent. This StateTarget
---also opens/closes an undo transaction via GizmoManager.
---The DependentChangeSources and ExternalDependentChangeSources lists allow additional
---FChange objects to be inserted into the transaction, provided by IToolCommandChangeSource implementations.
---@class UGizmoTransformChangeStateTarget : UObject
---@field public TransactionManager TScriptInterface<UToolContextTransactionProvider> @Pointer to the GizmoManager or ToolManager that is used to open/close the transaction
local UGizmoTransformChangeStateTarget = {}

---EndUpdate is called when a standard Gizmo is finished changing a parameter (via a ParameterSource)
function UGizmoTransformChangeStateTarget:EndUpdate() end

---BeginUpdate is called before a standard Gizmo begins changing a parameter (via a ParameterSource)
function UGizmoTransformChangeStateTarget:BeginUpdate() end

