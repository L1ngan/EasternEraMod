---Exposes operations to be performed on a sequence player anim node
---Note: Experimental and subject to change!
---@class USequencePlayerLibrary : UBlueprintFunctionLibrary
local USequencePlayerLibrary = {}

---Set the start position of the sequence player.
---If this is called from On Become Relevant or On Initial Update then it should be accompanied by a call to
---SetAccumulatedTime to achieve the desired effect of resetting the play time of a sequence player.
---@param SequencePlayer FSequencePlayerReference
---@param StartPosition number
---@return FSequencePlayerReference
function USequencePlayerLibrary.SetStartPosition(SequencePlayer, StartPosition) end

---Set the current sequence of the sequence player with an inertial blend time
---@param UpdateContext FAnimUpdateContext
---@param SequencePlayer FSequencePlayerReference
---@param Sequence UAnimSequenceBase
---@param BlendTime number @[opt] 
---@return FSequencePlayerReference
function USequencePlayerLibrary.SetSequenceWithInertialBlending(UpdateContext, SequencePlayer, Sequence, BlendTime) end

---Set the current sequence of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@param Sequence UAnimSequenceBase
---@return FSequencePlayerReference
function USequencePlayerLibrary.SetSequence(SequencePlayer, Sequence) end

---Set the play rate of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@param PlayRate number
---@return FSequencePlayerReference
function USequencePlayerLibrary.SetPlayRate(SequencePlayer, PlayRate) end

---Set the current accumulated time of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@param Time number
---@return FSequencePlayerReference
function USequencePlayerLibrary.SetAccumulatedTime(SequencePlayer, Time) end

---Get the start position of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@return number
function USequencePlayerLibrary.GetStartPosition(SequencePlayer) end

---Get the current sequence of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@return UAnimSequenceBase
function USequencePlayerLibrary.GetSequencePure(SequencePlayer) end

---Get the current sequence of the sequence player - DEPRECATED, please use pure version
---@param SequencePlayer FSequencePlayerReference
---@param SequenceBase UAnimSequenceBase @[out] 
---@return FSequencePlayerReference
function USequencePlayerLibrary.GetSequence(SequencePlayer, SequenceBase) end

---Get the play rate of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@return number
function USequencePlayerLibrary.GetPlayRate(SequencePlayer) end

---Get the looping state of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@return boolean
function USequencePlayerLibrary.GetLoopAnimation(SequencePlayer) end

---Gets the current accumulated time of the sequence player
---@param SequencePlayer FSequencePlayerReference
---@return number
function USequencePlayerLibrary.GetAccumulatedTime(SequencePlayer) end

---Get a sequence player context from an anim node context (pure)
---@param Node FAnimNodeReference
---@param SequencePlayer FSequencePlayerReference @[out] 
---@param Result boolean @[out] 
function USequencePlayerLibrary.ConvertToSequencePlayerPure(Node, SequencePlayer, Result) end

---Get a sequence player context from an anim node context
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FSequencePlayerReference
function USequencePlayerLibrary.ConvertToSequencePlayer(Node, Result) end

---Returns the Play Rate to provide when playing this animation if a specific animation duration is desired
---@param SequencePlayer FSequencePlayerReference
---@param Duration number @[opt] 
---@return number
function USequencePlayerLibrary.ComputePlayRateFromDuration(SequencePlayer, Duration) end

