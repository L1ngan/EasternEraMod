---MultiButtonClickDragBehavior is an implementation of UClickDragInputBehavior that can manage several
---mouse buttons at once and also implements IClickDragBehaviorTarget directly, via a set of local lambda functions.
---To use/customize this class the client replaces the lambda functions with their own and enables/disables the
---buttons to capture.
---@class UMultiButtonClickDragBehavior : UClickDragInputBehavior
local UMultiButtonClickDragBehavior = {}

