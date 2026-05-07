---@class FObjectMixerSceneOutlinerColumnInfo
---@field public PropertyName string @The FName of the property
---@field public ColumnID string @The column identifier for the property. Often this is teh same as PropertyName.
---@field public PropertyDisplayText string @What will be displayed in the column header unless another widget is defined.
---@field public PropertyType EListViewColumnType @Is this a built-in column, a column displaying a property widget or something else?
---@field public PropertyCategoryName string @The category that holds the property. Used for sorting properties in the context menu, similar to the details view.
---@field public bCanBeHidden boolean @If true, this column can be enabled and disabled by the user.
---@field public bIsDesiredToBeShownByDefault boolean @If true, this column will be shown in a clean environment or when default properties are restored.
local FObjectMixerSceneOutlinerColumnInfo = {}
