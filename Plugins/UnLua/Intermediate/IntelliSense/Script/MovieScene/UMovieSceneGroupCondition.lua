---Condition class that allows the grouping of other conditions using 'and', 'or', or 'xor'.
---@class UMovieSceneGroupCondition : UMovieSceneCondition
---@field public Operator EMovieSceneGroupConditionOperator @Which operator to use in evaluating the group condition
---@field public SubConditions TArray<FMovieSceneConditionContainer> @List of sub-conditions to evaluate as part of this condition. Condition results will be combined together using ConditionOperator
local UMovieSceneGroupCondition = {}

