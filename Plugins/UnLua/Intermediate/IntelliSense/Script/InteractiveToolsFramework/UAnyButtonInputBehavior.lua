---UAnyButtonInputBehavior is a base behavior that provides a generic
---interface to a TargetButton on a physical Input Device. You can subclass
---UAnyButtonInputBehavior to write InputBehaviors that can work independent
---of a particular device type or button, by using the UAnyButtonInputBehavior functions below.
---The target device button is selected using the .ButtonNumber property, or you can
---override the relevant GetXButtonState() function if you need more control.
--- @@todo spatial controllers
--- @@todo support tablet fingers
--- @@todo support gamepad?
---@class UAnyButtonInputBehavior : UInputBehavior
local UAnyButtonInputBehavior = {}

