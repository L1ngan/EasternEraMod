---This struct is used to identify a given hierarchy element and can be based on guids and/or names.
---This is particularly useful when a hierarchy element represents an object or a property that is not owned by the hierarchy itself.
---@class FHierarchyElementIdentity
---@field public Guids TArray<FGuid> @An array of guids that have to be satisfied in order to match.
---@field public Names TArray<string> @Optionally, an array of names can be specified in place of guids. If guids & names are present, guids have to be satisfied first, then names.
local FHierarchyElementIdentity = {}
