---Root node of an state machine state (sink node).
---We dont use AnimNode_Root to let us distinguish these nodes in the property list at link time.
---@class FAnimNode_StateResult : FAnimNode_Root
---@field protected StateIndex integer @The index of the state this node belongs to. Filled in during the owning state machine's compilation.
---@field private StateEntryFunction FAnimNodeFunctionRef @The function called on state entry
---@field private StateFullyBlendedInFunction FAnimNodeFunctionRef @The function called on state fully blended in
---@field private StateExitFunction FAnimNodeFunctionRef @The function called on state exit
---@field private StateFullyBlendedOutFunction FAnimNodeFunctionRef @The function called on state fully blended out
local FAnimNode_StateResult = {}
