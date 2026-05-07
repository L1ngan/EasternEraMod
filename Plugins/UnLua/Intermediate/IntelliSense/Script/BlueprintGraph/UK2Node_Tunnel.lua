---@class UK2Node_Tunnel : UK2Node_EditablePinBase
---@field public OutputSourceNode UK2Node_Tunnel @The output pins of this tunnel node came from the input pins of OutputSourceNode
---@field public InputSinkNode UK2Node_Tunnel @The input pins of this tunnel go to the output pins of InputSinkNode
---@field public bCanHaveInputs boolean @Whether this node is allowed to have inputs
---@field public bCanHaveOutputs boolean @Whether this node is allowed to have outputs
---@field public MetaData FKismetUserDeclaredFunctionMetadata @The metadata for the function/subgraph associated with this tunnel node; it's only editable and used on the tunnel entry node inside the subgraph or macro.  This structure is ignored on any other tunnel nodes.
local UK2Node_Tunnel = {}

