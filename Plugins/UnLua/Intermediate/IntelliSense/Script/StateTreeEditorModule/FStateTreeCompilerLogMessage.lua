---StateTree compiler log message
---@class FStateTreeCompilerLogMessage
---@field public Severity integer @Severity of the message.
---@field public State UStateTreeState @(optional) The StateTree state the message refers to.
---@field public Item FStateTreeBindableStructDesc @(optional) The State tee item (condition/evaluator/task) the message refers to.
---@field public Message string @The message
local FStateTreeCompilerLogMessage = {}
