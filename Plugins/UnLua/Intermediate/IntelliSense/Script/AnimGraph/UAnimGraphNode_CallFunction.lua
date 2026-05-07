---@class UAnimGraphNode_CallFunction : UAnimGraphNode_Base
---@field private InnerGraph UEdGraph @Inner graph we maintain to hook into the function call machinery
---@field private CallFunctionPrototype UK2Node_CallFunction @Inner node we maintain to hook into the function call machinery
---@field private Node FAnimNode_CallFunction
local UAnimGraphNode_CallFunction = {}

