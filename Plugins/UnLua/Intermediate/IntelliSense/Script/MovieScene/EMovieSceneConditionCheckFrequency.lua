---Defines how often a condition needs to be checked.
---*  Most conditions should return 'Once', but if the condition result can change during playback, 'OnTick' can be chosen to have the condition re-evaluated each tick.
---@class EMovieSceneConditionCheckFrequency
---@field public Once integer
---@field public OnTick integer
---@field public EMovieSceneConditionCheckFrequency_MAX integer
local EMovieSceneConditionCheckFrequency = {}
