---Base class for interface parameters on a camera rig asset.
---@class UCameraObjectInterfaceParameterBase : UObject
---@field public InterfaceParameterName string @The exposed name for this parameter.
---@field public Target UCameraNode @The camera node this parameter is connected to.
---@field public TargetPropertyName string @The name of the property this parameter is connected to on the target camera node. This may be an actual UObject property, but it may be something else, like the name of an interface parameter on a nested camera rig, or the name of a Blueprint property on the evaluator class of a Blueprint camera node.
---@field public bHasGraphNode boolean @Whether this parameter has been added to the node graph in the editor.
---@field protected Guid FGuid @The Guid of this parameter.
---@field private GraphNodePos FIntVector2
local UCameraObjectInterfaceParameterBase = {}

