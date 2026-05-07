---@class UNavigationToolSettings : UDeveloperSettings
---@field private bApplyDefaultColumnView boolean @Applies the default column view set by the provider when a view is loaded
---@field private bUseShortNames boolean @Shortens child item names that contain their parents name as a prefix by excluding it from the displayed child name
---@field private bUseMutedHierarchy boolean @Whether to show the parent of the shown items, even if the parents are filtered out
---@field private bAutoExpandToSelection boolean @Whether to auto expand the hierarchy to show the item when selected
---@field private bAlwaysShowLockState boolean @Whether to show the lock state always, rather than only showing when the item is locked or hovered
---@field private ItemDefaultViewMode ENavigationToolItemViewMode @The View Mode a Non-Actor / Non-Component Item supports by default
---@field private ItemProxyViewMode ENavigationToolItemViewMode @The View Mode a Proxy Item supports by default
---@field private CustomColumnViews TSet<FNavigationToolColumnView>
---@field private EnabledBuiltInFilters TSet<string>
---@field private FilterBars TMap<string, FSequencerFilterBarConfig> @Saved settings for each unique filter bar instance mapped by instance identifier
---@field private bAutoExpandNodesOnFilterPass boolean @Automatically expand tracks that pass filters
---@field private bUseFilterSubmenusForCategories boolean @Display the filter menu categories as submenus instead of sections
---@field private bFilterBarVisible boolean @Last saved visibility of the filter bar to restore after closed
---@field private LastFilterBarLayout EFilterBarLayout @Last saved layout orientation of the filter bar to restore after closed
---@field private LastFilterBarSizeCoefficient number @Last saved size of the filter bar to restore after closed
---@field private bSyncSelectionToNavigationTool boolean @If true, syncs selections in Sequencer to Navigation Tool
---@field private bSyncSelectionToSequencer boolean @If true, syncs selections in Navigation Tool to Sequencer
local UNavigationToolSettings = {}

