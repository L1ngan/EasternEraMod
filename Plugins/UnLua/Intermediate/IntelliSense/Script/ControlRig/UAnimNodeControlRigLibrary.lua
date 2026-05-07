---Exposes operations to be performed on a control rig anim node
---@class UAnimNodeControlRigLibrary : UBlueprintFunctionLibrary
local UAnimNodeControlRigLibrary = {}

---Set the control rig class on the node
---@param Node FControlRigReference
---@param ControlRigClass TSubclassOf_UControlRig_
---@return FControlRigReference
function UAnimNodeControlRigLibrary.SetControlRigClass(Node, ControlRigClass) end

---Get a control rig context from an anim node context (pure)
---@param Node FAnimNodeReference
---@param ControlRig FControlRigReference @[out] 
---@param Result boolean @[out] 
function UAnimNodeControlRigLibrary.ConvertToControlRigPure(Node, ControlRig, Result) end

---Get a control rig context from an anim node context
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FControlRigReference
function UAnimNodeControlRigLibrary.ConvertToControlRig(Node, Result) end

