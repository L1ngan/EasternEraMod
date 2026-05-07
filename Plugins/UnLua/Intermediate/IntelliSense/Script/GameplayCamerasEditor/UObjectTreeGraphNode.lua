---A graph node that represents an object inside an object tree graph.
---@class UObjectTreeGraphNode : UEdGraphNode
---@field private WeakObject TWeakObjectPtr<UObject>
---@field private SelfPinDirectionOverride integer
---@field private bOverrideSelfPinDirection boolean
local UObjectTreeGraphNode = {}

