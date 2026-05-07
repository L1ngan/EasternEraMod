---Auxiliary nodes are supporting nodes, that receive notification about execution flow and can be ticked
---Because some of them can be instanced for specific AI, following virtual functions are not marked as const:
--- - OnBecomeRelevant
--- - OnCeaseRelevant
--- - TickNode
---If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!
---Template nodes are shared across all behavior tree components using the same tree asset and must store
---their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )
---@class UBTAuxiliaryNode : UBTNode
local UBTAuxiliaryNode = {}

