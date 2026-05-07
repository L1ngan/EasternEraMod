---Exposes operations to be performed on a sequence evaluator anim node
---Note: Experimental and subject to change!
---@class USequenceEvaluatorLibrary : UBlueprintFunctionLibrary
local USequenceEvaluatorLibrary = {}

---Set the current sequence of the sequence evaluator with an inertial blend time
---@param UpdateContext FAnimUpdateContext
---@param SequenceEvaluator FSequenceEvaluatorReference
---@param Sequence UAnimSequenceBase
---@param BlendTime number @[opt] 
---@return FSequenceEvaluatorReference
function USequenceEvaluatorLibrary.SetSequenceWithInertialBlending(UpdateContext, SequenceEvaluator, Sequence, BlendTime) end

---Set the current sequence of the sequence evaluator
---@param SequenceEvaluator FSequenceEvaluatorReference
---@param Sequence UAnimSequenceBase
---@return FSequenceEvaluatorReference
function USequenceEvaluatorLibrary.SetSequence(SequenceEvaluator, Sequence) end

---Set the current accumulated time of the sequence evaluator
---@param SequenceEvaluator FSequenceEvaluatorReference
---@param Time number
---@return FSequenceEvaluatorReference
function USequenceEvaluatorLibrary.SetExplicitTime(SequenceEvaluator, Time) end

---Set the current accumulated time, using a frame number, of the sequence evaluator
---@param SequenceEvaluator FSequenceEvaluatorReference
---@param Frame integer
---@return FSequenceEvaluatorReference
function USequenceEvaluatorLibrary.SetExplicitFrame(SequenceEvaluator, Frame) end

---Gets the current sequence of the sequence evaluator
---@param SequenceEvaluator FSequenceEvaluatorReference
---@return UAnimSequenceBase
function USequenceEvaluatorLibrary.GetSequence(SequenceEvaluator) end

---Gets the current accumulated time of the sequence evaluator
---@param SequenceEvaluator FSequenceEvaluatorReference
---@return number
function USequenceEvaluatorLibrary.GetAccumulatedTime(SequenceEvaluator) end

---Get a sequence evaluator context from an anim node context (pure)
---@param Node FAnimNodeReference
---@param SequenceEvaluator FSequenceEvaluatorReference @[out] 
---@param Result boolean @[out] 
function USequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure(Node, SequenceEvaluator, Result) end

---Get a sequence evaluator context from an anim node context
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FSequenceEvaluatorReference
function USequenceEvaluatorLibrary.ConvertToSequenceEvaluator(Node, Result) end

---Advance the current accumulated time of the sequence evaluator
---@param UpdateContext FAnimUpdateContext
---@param SequenceEvaluator FSequenceEvaluatorReference
---@param PlayRate number @[opt] 
---@return FSequenceEvaluatorReference
function USequenceEvaluatorLibrary.AdvanceTime(UpdateContext, SequenceEvaluator, PlayRate) end

