---@class FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph
---@field public Interface TSubclassOf<UAnimLayerInterface> @Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface. If not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel.
---@field public Layer string @The layer in the interface to use
local FAnimNode_LinkedAnimLayer = {}
