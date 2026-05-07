---@class UEnvQueryTest_Dot : UEnvQueryTest
---@field protected LineA FEnvDirection @defines direction of first line used by test
---@field protected LineB FEnvDirection @defines direction of second line used by test
---@field protected TestMode EEnvTestDot
---@field protected bAbsoluteValue boolean @If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful when you want to compare "how lateral" something is.  I.E. values closer to zero are further to the side, and values closer to 1 are more in front or behind (without distinguishing forward/backward).
local UEnvQueryTest_Dot = {}

