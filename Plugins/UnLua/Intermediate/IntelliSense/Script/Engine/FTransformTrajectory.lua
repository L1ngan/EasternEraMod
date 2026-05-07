---A trajectory defined by a range of samples.
---The sample range is conformed of history samples, a current sample and future predicted samples.
---- History samples have time < 0. Zero or more can be present.
---- Current sample has a time of 0. Assumes only one is ever present.
---- Predicted samples have a time of > 0. Zero or more can be present.
---@class FTransformTrajectory
---@field public Samples TArray<FTransformTrajectorySample> @This contains zero or more history samples, a current sample, and zero or more future predicted samples.
local FTransformTrajectory = {}
