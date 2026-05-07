---Settings used to refine breaking event requests
---@class FChaosBreakingEventRequestSettings
---@field public MaxNumberOfResults integer @The maximum number of results to return.
---@field public MinRadius number @The minimum breaking radius threshold for the results.
---@field public MinSpeed number @The minimum speed threshold for the results.
---@field public MinMass number @The minimum mass threshold for the results.
---@field public MaxDistance number @The maximum distance threshold for the results.
---@field public SortMethod EChaosBreakingSortMethod @The method used to sort the breaking events.
local FChaosBreakingEventRequestSettings = {}
