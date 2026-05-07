---@class FChaosRemovalEventRequestSettings
---@field public MaxNumberOfResults integer @The maximum number of results to return.
---@field public MinMass number @The minimum mass treshold for the results.
---@field public MaxDistance number @The maximum distance threshold for the results (if location is set on destruction event listener).
---@field public SortMethod EChaosRemovalSortMethod @The method used to sort the removal events.
local FChaosRemovalEventRequestSettings = {}
