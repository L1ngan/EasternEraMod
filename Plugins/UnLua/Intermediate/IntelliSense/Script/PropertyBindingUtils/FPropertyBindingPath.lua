---Representation of a property path that can be used for property access and binding.
---The engine supports many types of property paths, this implementation has these specific properties:
---            - Allow to resolve all the indirections from a base value (object or struct) up to the leaf property
---            - handle redirects from Core Redirect, BP classes, User Defines Structs and Property Bags
---You may also take a look at: FCachedPropertyPath, TFieldPath<>, FPropertyPath.
---@class FPropertyBindingPath
---@field private StructID FGuid @ID of the struct this property path is relative to.
---@field private Segments TArray<FPropertyBindingPathSegment> @Path segments pointing to a specific property on the path.
local FPropertyBindingPath = {}
