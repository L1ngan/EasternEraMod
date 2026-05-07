---Exposes operations to be performed on anim state machine node contexts
---@class UAnimationStateMachineLibrary : UBlueprintFunctionLibrary
local UAnimationStateMachineLibrary = {}

---Manually set the current state of the state machine
---              NOTE: Custom blend type is not supported
---@param UpdateContext FAnimUpdateContext
---@param Node FAnimationStateMachineReference
---@param TargetState string
---@param Duration number
---@param BlendType integer
---@param BlendProfile UBlendProfile
---@param AlphaBlendOption EAlphaBlendOption
---@param CustomBlendCurve UCurveFloat
function UAnimationStateMachineLibrary.SetState(UpdateContext, Node, TargetState, Duration, BlendType, BlendProfile, AlphaBlendOption, CustomBlendCurve) end

---Returns whether the state the node belongs to is blending out
---@param UpdateContext FAnimUpdateContext
---@param Node FAnimationStateResultReference
---@return boolean
function UAnimationStateMachineLibrary.IsStateBlendingOut(UpdateContext, Node) end

---Returns whether the state the node belongs to is blending in
---@param UpdateContext FAnimUpdateContext
---@param Node FAnimationStateResultReference
---@return boolean
function UAnimationStateMachineLibrary.IsStateBlendingIn(UpdateContext, Node) end

---Returns the name of the current state of this state machine
---@param UpdateContext FAnimUpdateContext
---@param Node FAnimationStateMachineReference
---@return string
function UAnimationStateMachineLibrary.GetState(UpdateContext, Node) end

---Returns the remaining animation time as a fraction of the duration for the state's most relevant asset player
---@param UpdateContext FAnimUpdateContext
---@param Node FAnimationStateResultReference
---@return number
function UAnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction(UpdateContext, Node) end

---Returns the remaining animation time of the state's most relevant asset player
---@param UpdateContext FAnimUpdateContext
---@param Node FAnimationStateResultReference
---@return number
function UAnimationStateMachineLibrary.GetRelevantAnimTimeRemaining(UpdateContext, Node) end

---Get an anim state reference from an anim node reference (pure)
---@param Node FAnimNodeReference
---@param AnimationState FAnimationStateResultReference @[out] 
---@param Result boolean @[out] 
function UAnimationStateMachineLibrary.ConvertToAnimationStateResultPure(Node, AnimationState, Result) end

---Get an anim state reference from an anim node reference
---@param Node FAnimNodeReference
---@param AnimationState FAnimationStateResultReference @[out] 
---@param Result EAnimNodeReferenceConversionResult @[out] 
function UAnimationStateMachineLibrary.ConvertToAnimationStateResult(Node, AnimationState, Result) end

---Get an anim state machine from an anim node reference (pure)
---@param Node FAnimNodeReference
---@param AnimationState FAnimationStateMachineReference @[out] 
---@param Result boolean @[out] 
function UAnimationStateMachineLibrary.ConvertToAnimationStateMachinePure(Node, AnimationState, Result) end

---Get an anim state machine from an anim node reference
---@param Node FAnimNodeReference
---@param AnimationState FAnimationStateMachineReference @[out] 
---@param Result EAnimNodeReferenceConversionResult @[out] 
function UAnimationStateMachineLibrary.ConvertToAnimationStateMachine(Node, AnimationState, Result) end

