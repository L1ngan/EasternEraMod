---Column added to a header widget row to control the sizing when the default behavior is incorrect.
---@class FHeaderWidgetSizeColumn : FEditorDataStorageColumn
---@field public Width number @* Fill: Column stretches to this fraction of the header row * Fixed: Column is fixed at this width in slate units and cannot be resized * Manual: Column defaults to this width in slate units and can be user-sized * FillSized: Column stretches as Fill but is initialized with this width in slate units
local FHeaderWidgetSizeColumn = {}
