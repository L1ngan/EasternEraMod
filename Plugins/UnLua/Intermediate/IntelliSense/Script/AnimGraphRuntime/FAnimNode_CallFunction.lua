---Calls specified user-defined events/functions during anim graph execution
---@class FAnimNode_CallFunction : FAnimNode_Base
---@field public Source FPoseLink
---@field public Function FAnimNodeFunctionRef @Function to call
---@field public CallSite EAnimFunctionCallSite @When to call the function during the execution of the animation graph
local FAnimNode_CallFunction = {}
