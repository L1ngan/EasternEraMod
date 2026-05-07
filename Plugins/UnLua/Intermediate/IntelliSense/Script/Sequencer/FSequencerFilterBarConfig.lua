---@class FSequencerFilterBarConfig
---@field protected ActiveFilters FSequencerFilterSet @The currently active set of common and custom text filters that should be restored on editor load
---@field protected CustomTextFilters TArray<FCustomTextFilterData> @User created custom text filters
---@field protected FilterBarLayout EFilterBarLayout @The layout style for the filter bar widget
local FSequencerFilterBarConfig = {}
