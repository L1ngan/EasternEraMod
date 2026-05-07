---An implementation of IInputBehaviorSource that forwards to a user provided-lambda, to allow
---a tool to supply a behavior source different from the one it is implementing itself. Useful,
---for instance, when a tool wants to supply different behaviors to separate input routers.
---@class ULocalInputBehaviorSource : UObject
local ULocalInputBehaviorSource = {}

