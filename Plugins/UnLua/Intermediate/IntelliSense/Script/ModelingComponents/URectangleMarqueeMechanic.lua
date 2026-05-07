---* Mechanic for a rectangle "marquee" selection. It creates and maintains the 2D rectangle associated with a mouse drag.
---* It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.
---*
---* When using this mechanic, you should call Render() on it in the tool's Render() call so that it can cache
---* necessary camera state, and DrawHUD() in the tool's DrawHUD() call so that it can draw the box.
---*
---* Attach to the mechanic's delegates and use the passed rectangle to test against your geometry.
---@class URectangleMarqueeMechanic : UInteractionMechanic
---@field public bUseExternalClickDragBehavior boolean @If true, then the URectangleMarqueeMechanic will not create an internal UClickDragInputBehavior in ::Setup(), allowing the client to control the marquee with an external InputBehavior that uses the marquee mechanic as it's IClickDragBehaviorTarget. For instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior. Must be configured before calling ::Setup()
---@field public bUseExternalUpdateCameraState boolean @If true, then the URectangleMarqueeMechanic will not query the tool manager for the current camera view state,         but instead call the custom provided function, UpdateCameraStateFunc, to recieve the correct camera state for the         CameraRectangle.
---@field public OnDragRectangleChangedDeferredThreshold number @If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls to this function (in the current drag sequence) will be deferred until the mouse button is released. This will improve the responsiveness of the UI. The default value is set so this optimization is never triggered, if you want it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)
---@field protected ClickDragBehavior UClickDragInputBehavior
local URectangleMarqueeMechanic = {}

