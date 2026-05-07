---@class FChaosTrailingEventRequestSettings
---@field public MaxNumberOfResults integer @The maximum number of results to return.
---@field public MinMass number @The minimum mass treshold for the results.
---@field public MinSpeed number @The minimum speed threshold for the results.
---@field public MinAngularSpeed number @The minimum angular speed threshold for the results.
---@field public MaxDistance number @The maximum distance threshold for the results (if location is set on destruction event listener).
---@field public SortMethod EChaosTrailingSortMethod @The method used to sort the breaking events.
local FChaosTrailingEventRequestSettings = {}
