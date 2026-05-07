---Abstract condition class. Conditions can be applied to sections, tracks, and track rows to determine whether or not they are evaluated at runtime.
---This allows developers to create Sequences with dynamic behavior based on gameplay state, local player state, player hardware, etc.
---@class UMovieSceneCondition : UMovieSceneSignedObject
---@field public bEditorForceTrue boolean @If true, will skip evaluating the condition and always return true. Useful for authoring or debugging.
---@field protected bInvert boolean @If true, inverts the result of the condition check.
local UMovieSceneCondition = {}

---Returns the scope of the condition, which determines whether the condition needs to be re-evaluated for different bindings or entities in the Sequence.
---@return EMovieSceneConditionScope
function UMovieSceneCondition:BP_GetScope() end

---Returns the check frequency of the condition, which determines whether the condition result can change during playback and needs to get re-evaluated.
---@return EMovieSceneConditionCheckFrequency
function UMovieSceneCondition:BP_GetCheckFrequency() end

---Override to implement your condition.
---@param ConditionContext FMovieSceneConditionContext
---@return boolean
function UMovieSceneCondition:BP_EvaluateCondition(ConditionContext) end

