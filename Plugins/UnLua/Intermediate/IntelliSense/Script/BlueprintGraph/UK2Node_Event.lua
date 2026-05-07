---@class UK2Node_Event : UK2Node_EditablePinBase
---@field public EventReference FMemberReference @Reference for the function this event is linked to
---@field public bOverrideFunction boolean @If true, we are actually overriding this function, not making a new event with a signature that matches
---@field public bInternalEvent boolean @If true, this event is internal machinery, and should not be marked BlueprintCallable
---@field public CustomFunctionName string @If this is not an override, allow user to specify a name for the function created by this entry point
---@field public FunctionFlags integer @Additional function flags to apply to this function
local UK2Node_Event = {}

