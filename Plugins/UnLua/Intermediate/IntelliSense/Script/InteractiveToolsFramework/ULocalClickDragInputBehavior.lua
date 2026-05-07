---ULocalClickDragInputBehavior is an implementation of UClickDragInputBehavior that also implements IClickDragBehaviorTarget directly,
---via a set of local lambda functions. To use/customize this class the client replaces the lambda functions with their own.
---This avoids having to create a second IClickDragBehaviorTarget implementation for trivial use-cases.
---@class ULocalClickDragInputBehavior : UClickDragInputBehavior
local ULocalClickDragInputBehavior = {}

