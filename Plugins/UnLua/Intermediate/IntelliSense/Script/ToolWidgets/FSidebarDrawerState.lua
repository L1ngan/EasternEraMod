---Represents the state of a sidebar drawer to be saved/restored to/from config.
---@class FSidebarDrawerState
---@field public DrawerId string
---@field public SelectedSections TSet<string> @Names of all sections that were last selected
---@field public bIsPinned boolean
---@field public bIsDocked boolean
local FSidebarDrawerState = {}
