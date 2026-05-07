---@class FOutputLogFilterSettings
---@field public MessagesFilter ELogLevelFilter
---@field public WarningsFilter ELogLevelFilter
---@field public ErrorsFilter ELogLevelFilter
---@field public FilterText string
---@field public Categories TArray<FOutputLogCategorySettings> @Note that an empty list in settings implicitly means "all" categories. This will invert state if a user explicitly disables all categories, but that is acceptable. An empty log simply looks broken.
---@field public bSelectNewCategories boolean
local FOutputLogFilterSettings = {}
