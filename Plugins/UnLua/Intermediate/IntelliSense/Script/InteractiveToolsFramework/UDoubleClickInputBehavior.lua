---UDoubleClickInputBehavior implements a standard "button-click"-style input behavior.
---The state machine works as follows:
---   1) on input-device-button-double-click, hit-test the target. If hit, begin capture
---   2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.
---The second hit-test is required to allow the click to be "cancelled" by moving away
---from the target. This is standard GUI behavior. You can disable this second hit test
---using the .HitTestOnRelease property. This is strongly discouraged.
---The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance.
---The expected sequence of mouse events for a double click is:
---   a. MouseDown
---   b. MouseUp
---   c. MouseDoubleClick   <-- State machine starts here.
---   d. MouseUp
---@class UDoubleClickInputBehavior : USingleClickInputBehavior
local UDoubleClickInputBehavior = {}

