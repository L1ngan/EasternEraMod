---@class FFilterBarSettings
---@field public CustomFilters TMap<string, boolean> @Map of currently visible custom filters, along with their enabled state
---@field public TypeFilters TMap<string, boolean> @Map of currently visible asset type filters, along with their enabled state
---@field public CustomTextFilters TArray<FCustomTextFilterState> @Array of custom text filters the user has created
---@field public bIsLayoutSaved boolean
---@field public FilterBarLayout EFilterBarLayout
---@field public bFilterRecursively boolean @Whether to filter paths recursively. Also @@see UContentBrowserSettings::FilterRecursively
local FFilterBarSettings = {}
