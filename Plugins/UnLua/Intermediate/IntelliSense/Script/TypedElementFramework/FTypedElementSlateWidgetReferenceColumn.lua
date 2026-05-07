---Stores a widget reference in the data storage. At the start of processing any
---columns that are not pointing to a valid widget will be removed. If the
---FTypedElementSlateWidgetDeletesRowTag is found then the entire row will
---be deleted.
---@class FTypedElementSlateWidgetReferenceColumn : FEditorDataStorageColumn
local FTypedElementSlateWidgetReferenceColumn = {}
