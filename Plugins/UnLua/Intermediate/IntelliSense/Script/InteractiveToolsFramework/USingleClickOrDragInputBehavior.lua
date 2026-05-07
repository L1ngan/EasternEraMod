---USingleClickOrDragInputBehavior is a combination of a USingleClickBehavior and UClickDragBehavior,
---and allows for the common UI interaction where a click-and-release does one action, but if the mouse
---is moved, then a drag interaction is started. For example click-to-select is often combined with
---a drag-marquee-rectangle in this way. This can be directly implemented with a UClickDragBehavior but
---requires the client to (eg) detect movement thresholds, etc. This class encapsulates all that state/logic.
---The .ClickDistanceThreshold parameter determines how far the mouse must move (in whatever device units are in use)
---to switch from a click to drag interaction
---The .bBeginDragIfClickTargetNotHit parameter determines if the drag interaction will be immediately initiated
---if the initial 'click' mouse-down does not hit a valid clickable target. Defaults to true.
---The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance, while an
---IClickDragBehaviorTarget provides the can-click-drag/begin-drag/update-drag/end-drag functionality.
---@class USingleClickOrDragInputBehavior : UAnyButtonInputBehavior
---@field public bBeginDragIfClickTargetNotHit boolean @If true (default), then if the click-mouse-down does not hit a valid click target (determined by IClickBehaviorTarget::IsHitByClick), then the Drag will be initiated
---@field public ClickDistanceThreshold number @If the device moves more than this distance in 2D (pixel?) units, the interaction switches from click to drag
local USingleClickOrDragInputBehavior = {}

