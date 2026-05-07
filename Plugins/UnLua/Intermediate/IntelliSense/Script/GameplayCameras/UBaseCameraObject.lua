---@class UBaseCameraObject : UObject
---@field public Interface FCameraObjectInterface @The public data interface of this camera object.
---@field public AllocationInfo FCameraObjectAllocationInfo @Allocation information for all the nodes and variables in this camera object.
---@field private DefaultParameters FInstancedPropertyBag @The default interface parameter values, generated during build.
---@field private ParameterDefinitions TArray<FCameraObjectInterfaceParameterDefinition> @The definitions of parameters exposed on this camera rig.
local UBaseCameraObject = {}

