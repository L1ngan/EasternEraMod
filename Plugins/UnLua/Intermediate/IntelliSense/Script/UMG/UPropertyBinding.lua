---@class UPropertyBinding : UObject
---@field public SourceObject TWeakObjectPtr<UObject> @The source object to use as the initial container to resolve the Source Property Path on.
---@field public SourcePath FDynamicPropertyPath @The property path to trace to resolve this binding on the Source Object
---@field public DestinationProperty string @Used to determine if a binding already exists on the object and if this binding can be safely removed.
local UPropertyBinding = {}

