---Time duration with random variance. Stored compactly as two uint16s, which gives time range of about 650 seconds.
---The variance is symmetric (+-) around the specified duration.
---@class FStateTreeRandomTimeDuration
---@field protected Duration integer
---@field protected RandomVariance integer
local FStateTreeRandomTimeDuration = {}
