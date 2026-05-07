---A column that stores an inferred base type for placeholder-typed object references. Note that
---this will not be the same as the placeholder object type (stored in the class type info column).
---This column can be used to query for a "base type" determined from the serialization context,
---for systems that need to look/behave differently based on an inferred base type context (e.g. UI).
---@class FTypedElementPropertyBagPlaceholderTypeInfoColumn : FEditorDataStorageColumn
local FTypedElementPropertyBagPlaceholderTypeInfoColumn = {}
