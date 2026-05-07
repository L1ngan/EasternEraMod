---An implementation of UMouseHoverBehavior that also implements IHoverBehaviorTarget directly, via a set
---of local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.
---This avoids having to create a separate IHoverBehaviorTarget implementation for trivial use-cases.
---@class ULocalMouseHoverBehavior : UMouseHoverBehavior
local ULocalMouseHoverBehavior = {}

