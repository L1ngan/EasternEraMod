---@class FNavigationToolViewSaveState
---@field public ViewItemFlags TMap<string, ENavigationToolItemFlags> @Items specific to this Navigation Tool Instance, rather than being shared across Navigation Tools (e.g. Expansion flags)
---@field public ColumnsState TMap<string, FNavigationToolViewColumnSaveState> @Map of the column Ids to their overriden (i.e. saved) visibility
---@field public ActiveItemFilters TSet<string> @Active list of item filters
local FNavigationToolViewSaveState = {}
