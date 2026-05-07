---UKeyInputBehavior provides a keyboard capturing behavior that works with single or multiple keys. Provided with a single key, the behavior triggers
---OnKeyPressed and OnKeyReleased events upon seeing the target key pressed down and released for the first time, ignoring any other key presses.
---When provided with multiple keys, the Behavior has variable behavior depending on whether bRequireAllKeys is set.
---If true, the behavior sequence is as follows:
---  1. Initiate capture when any of the target keys are pressed.
---  2. Continue capture until all target keys are pressed simultaneously
---  3. Upon seeing the last key to complete the full set of target keys, issue an OnKeyPressed for whichever key completed the requirement.
---            3b. If any of the target keys are released after the full set was pressed, issue an OnKeyReleased for whichever key was released, then end Capture.
---  4. If at any point all target keys are released after capture begins, end capture.
---If false, the behavior sequence is as follows:
---  1. Initiate capture when any of the target keys are pressed.
---  2. Continue capture while any of the target keys are still pressed.
---  3. Issue an OnKeyPressed for any target key pressed during the capture period.
---  4. Issue an OnKeyReleased for any target key released during the capture period.
---  5. If at any point all target keys are released, end capture.
---@class UKeyInputBehavior : UInputBehavior
local UKeyInputBehavior = {}

