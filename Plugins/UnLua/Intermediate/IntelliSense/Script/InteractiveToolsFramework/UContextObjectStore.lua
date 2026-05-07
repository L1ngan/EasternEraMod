---A context object store allows tools to get access to arbitrary objects which expose data or APIs to enable additional functionality.
---Some example use cases of context objects:
---  - A tool builder may disallow a particular tool if a needed API object is not present in the context store.
---  - A tool may allow extra actions if it has access to a particular API object in the context store.
---  - A tool may choose to initialize itself differently based on the presence of a selection-holding data object in the context store.
---@class UContextObjectStore : UObject
---@field protected ContextObjects TArray<UObject>
local UContextObjectStore = {}

