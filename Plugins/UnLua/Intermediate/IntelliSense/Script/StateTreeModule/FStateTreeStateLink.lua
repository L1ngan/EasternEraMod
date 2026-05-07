---Link to another state in StateTree
---@class FStateTreeStateLink
---@field public Name string @Name of the state at the time of linking, used for error reporting.
---@field public ID FGuid @ID of the state linked to.
---@field public LinkType EStateTreeTransitionType @Type of the transition, used at edit time to describe e.g. next state (which is calculated at compile time).
---@field public StateHandle FStateTreeStateHandle @Handle of the linked state.
---@field public Fallback EStateTreeSelectionFallback @Fallback of the transition if it fails to select the target state
local FStateTreeStateLink = {}
