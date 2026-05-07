---Queries that check whether or not a widget still exists. If it has been deleted
---then it will remove the column from the Data Storage or deletes the entire row if
---the FTypedElementSlateWidgetReferenceDeletesRowTag was found.
---@class UWidgetReferenceColumnUpdateFactory : UEditorDataStorageFactory
local UWidgetReferenceColumnUpdateFactory = {}

