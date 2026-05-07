---UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,
---and on setup registers a UClickDragInputBehavior. You can subclass this Tool to
---implement basic click-drag type Tools. If you want to do more advanced things,
---like handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself
---@class UClickDragTool : UInteractiveTool
local UClickDragTool = {}

