---Decorators are supporting nodes placed on parent-child connection, that receive notification about execution flow and can be ticked
---Because some of them can be instanced for specific AI, following virtual functions are not marked as const:
--- - OnNodeActivation
--- - OnNodeDeactivation
--- - OnNodeProcessed
--- - OnBecomeRelevant (from UBTAuxiliaryNode)
--- - OnCeaseRelevant (from UBTAuxiliaryNode)
--- - TickNode (from UBTAuxiliaryNode)
---If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!
---Template nodes are shared across all behavior tree components using the same tree asset and must store
---their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )
---@class UBTDecorator : UBTAuxiliaryNode
---@field private bInverseCondition boolean @if set, condition check result will be inversed
---@field protected FlowAbortMode integer @flow controller settings
local UBTDecorator = {}

