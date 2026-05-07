---Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process
---@class UNamedInterfaces : UObject
---@field private NamedInterfaces TArray<FNamedInterface> @Holds the set of registered named interfaces
---@field private NamedInterfaceDefs TArray<FNamedInterfaceDef> @The list of named interfaces to automatically create and store
local UNamedInterfaces = {}

