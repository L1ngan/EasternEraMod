---Represents the state of a sidebar to be saved/restored to/from config.
---@class FSidebarState
---@field protected bHidden boolean
---@field protected DrawerSize number
---@field protected ContentSize number @Save the other splitter slot size to exactly restore the size when a drawer is docked in a SSplitter widget.
---@field protected DrawerStates TArray<FSidebarDrawerState>
local FSidebarState = {}
