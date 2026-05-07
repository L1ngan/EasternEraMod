---A subobject handle is a globally unique identifier for subobjects
---Upon construction, the handle will be invalid. It is the responsibility
---of the owning FSubobjectData to set the DataPtr once the subobject
---data has validated that it has a good context.
---@class FSubobjectDataHandle
local FSubobjectDataHandle = {}
