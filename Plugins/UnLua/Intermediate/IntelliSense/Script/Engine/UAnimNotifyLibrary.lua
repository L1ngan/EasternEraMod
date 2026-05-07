---A library of commonly used functionality for Notifies, exposed to blueprint.
---@class UAnimNotifyLibrary : UBlueprintFunctionLibrary
local UAnimNotifyLibrary = {}

---Get whether the notify state reached the end (was not cancelled)
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotifyLibrary.NotifyStateReachedEnd(EventReference) end

---Gets whether this notify comes from a source that is blending out.
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotifyLibrary.IsBlendingOut(EventReference) end

---Get the current anim notify time as a ratio (0 -> 1) through the animation for when this notify was fired
---@param EventReference FAnimNotifyEventReference
---@return number
function UAnimNotifyLibrary.GetCurrentAnimationTimeRatio(EventReference) end

---Get the current anim notify time in seconds for when this notify was fired
---@param EventReference FAnimNotifyEventReference
---@return number
function UAnimNotifyLibrary.GetCurrentAnimationTime(EventReference) end

---Gets the current time as a ratio (0 -> 1) relative to the start of the notify state
---@param EventReference FAnimNotifyEventReference
---@return number
function UAnimNotifyLibrary.GetCurrentAnimationNotifyStateTimeRatio(EventReference) end

---Gets the current time in seconds relative to the start of the notify state, clamped to the range of the notify
---state
---                     notify state
---@param EventReference FAnimNotifyEventReference
---@return number
function UAnimNotifyLibrary.GetCurrentAnimationNotifyStateTime(EventReference) end

