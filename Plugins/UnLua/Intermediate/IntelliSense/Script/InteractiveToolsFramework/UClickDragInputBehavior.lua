---UClickDragInputBehavior implements a standard "button-click-drag"-style input behavior.
---An IClickDragBehaviorTarget instance must be provided which is manipulated by this behavior.
---The state machine works as follows:
---   1) on input-device-button-press, call Target::CanBeginClickDragSequence to determine if capture should begin
---   2) on input-device-move, call Target::OnClickDrag
---   3) on input-device-button-release, call Target::OnClickRelease
---If a ForceEndCapture occurs we call Target::OnTerminateDragSequence
---@class UClickDragInputBehavior : UAnyButtonInputBehavior
---@field public bUpdateModifiersDuringDrag boolean @If true, then we will update Modifier states in UpdateCapture(). This defaults to false because in most cases during a capture you don't want this, eg in a brush interaction, if you have a shift-to-smooth modifier, you don't want to toggle this on/off during a sculpting stroke.
local UClickDragInputBehavior = {}

