---The details view allows you to display the value of an object properties.
---@class UDetailsView : UPropertyViewBase
---@field public bAllowFiltering boolean @True if we allow filtering through search and the filter dropdown menu.
---@field public bAllowFavoriteSystem boolean @If false, the current properties editor will never display the favorite system
---@field public bShowModifiedPropertiesOption boolean @True if you want to show the 'Show Only Modified Properties'. Only valid in conjunction with bAllowFiltering
---@field public bShowKeyablePropertiesOption boolean @True if you want to show the 'Show Only Keyable Properties'. Only valid in conjunction with bAllowFiltering
---@field public bShowAnimatedPropertiesOption boolean @True if you want to show the 'Show Only Animated Properties'. Only valid in conjunction with bAllowFiltering
---@field public ColumnWidth number @The default column width
---@field public bShowScrollBar boolean @If false, the details panel's scrollbar will always be hidden. Useful when embedding details panels in widgets that either grow to accommodate them, or with scrollbars of their own.
---@field public bForceHiddenPropertyVisibility boolean @If true, all properties will be visible, not just those with CPF_Edit
---@field public ViewIdentifier string @Identifier for this details view; NAME_None if this view is anonymous
---@field public CategoriesToShow TArray<string> @Which categories to show in the details panel. If both this and the Properties To Show lists are empty, all properties will show.
---@field public PropertiesToShow TArray<string> @Which properties to show in the details panel. If both this and the Categories To Show lists are empty, all properties will show.
---@field private bShowOnlyAllowed boolean @Showing properties in this details panel works by allowing only specific categories and properties. This flag enables you to show all properties without needing to specify.
local UDetailsView = {}

