---Data table composed of a stack of other data tables.
---@class UCompositeDataTable : UDataTable
---@field protected ParentTables TArray<UDataTable> @Parent tables Tables with higher indices override data in tables with lower indices
---@field protected OldParentTables TArray<UDataTable> @temporary copy used to detect changes so we can update delegates correctly on removal
local UCompositeDataTable = {}

