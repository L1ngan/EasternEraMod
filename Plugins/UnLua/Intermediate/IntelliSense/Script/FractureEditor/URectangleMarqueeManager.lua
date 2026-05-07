---* Adapted from URectangleMarqueeMechanic, the mechanic for a rectangle "marquee" selection, to operate without
---* the UInteractionMechanic framework. It creates and maintains the 2D rectangle associated with a mouse drag.
---* It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.
---*
---* You must manually call the Setup(), Render() and DrawHUD() functions.
---* Note these functions have been changed from the Mechanic versions to be easier to call without additional InteractiveTool machinery
---*
---* Attach to the delegates and use the passed rectangle to test against your geometry.
---*
---* TODO: Refactor this into a more generalized / generally usable class in RectangleMarqueeMechanic.h,
---* and share more common code with URectangleMarqueeMechanic.
---@class URectangleMarqueeManager : UObject
---@field public bUseExternalClickDragBehavior boolean @If true, then the URectangleMarqueeManager will not create an internal UClickDragInputBehavior in ::Setup(), allowing the client to control the marquee with an external InputBehavior that uses the marquee manager as its IClickDragBehaviorTarget. For instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior. Must be configured before calling ::Setup()
---@field public OnDragRectangleChangedDeferredThreshold number @If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls to this function (in the current drag sequence) will be deferred until the mouse button is released. This will improve the responsiveness of the UI. The default value is set so this optimization is never triggered, if you want it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)
---@field protected ClickDragBehavior UClickDragInputBehavior
local URectangleMarqueeManager = {}

