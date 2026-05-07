---* Describes a filter for a test group with exclude and tag options.
---@class FAutomatedTestFilter : FAutomatedTestFilterBase
---@field public Exclude TArray<FAutomatedTestFilterBase> @List of filters to exclude
---@field public Tags TArray<FAutomatedTestTagFilter> @List of tag filters specific to this group
local FAutomatedTestFilter = {}
