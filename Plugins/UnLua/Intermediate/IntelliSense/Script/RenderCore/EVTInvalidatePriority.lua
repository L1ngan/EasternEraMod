---Describes whether an invalidated VT area should be prioritized against others. Allows to improve reactiveness when invalidating a large number of pages
---@class EVTInvalidatePriority
---@field public Normal integer
---@field public High integer
---@field public Count integer
---@field public EVTInvalidatePriority_MAX integer
local EVTInvalidatePriority = {}
