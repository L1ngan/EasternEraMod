---Base struct of StateTree Conditions, Considerations, Evaluators, and Tasks.
---@class FStateTreeNodeBase
---@field public Name string @Name of the node.
---@field public BindingsBatch FStateTreeIndex16 @Property binding copy batch handle.
---@field public InstanceTemplateIndex FStateTreeIndex16 @Index of template instance data for the node. Can point to Shared or Default instance data in StateTree depending on node type.
---@field public InstanceDataHandle FStateTreeDataHandle @Data handle to access the instance data.
local FStateTreeNodeBase = {}
