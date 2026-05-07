---USingleClickInputBehavior implements a standard "button-click"-style input behavior.
---The state machine works as follows:
---   1) on input-device-button-press, hit-test the target. If hit, begin capture
---   2) on input-device-button-release, hit-test the target. If hit, call Target::OnClicked(). If not hit, ignore click.
---The second hit-test is required to allow the click to be "cancelled" by moving away
---from the target. This is standard GUI behavior. You can disable this second hit test
---using the .HitTestOnRelease property. This is strongly discouraged.
---The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance.
---@class USingleClickInputBehavior : UAnyButtonInputBehavior
---@field public HitTestOnRelease boolean @Hit-test is repeated on release (standard behavior). If false,
local USingleClickInputBehavior = {}

