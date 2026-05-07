---Represents the current selection state of a level (its selected actors and components) from a given point in a time, in a way that can be safely restored later even if the level is reloaded
---@class FSelectionStateOfLevel
---@field public SelectedActors TArray<string> @Path names of all the selected actors
---@field public SelectedComponents TArray<string> @Path names of all the selected components
local FSelectionStateOfLevel = {}
