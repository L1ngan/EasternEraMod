---UMultiClickSequenceInputBehavior implements a generic multi-click-sequence input behavior.
---For example this behavior could be used to implement a multi-click polygon-drawing interaction.
---The internal state machine works as follows:
---  1) on input-device-button-press, check if target wants to begin sequence. If so, begin capture.
---  2) on button *release*, check if target wants to continue or terminate sequence
---      a) if terminate, release capture
---      b) if continue, do nothing (capture continues between presses)
---The target will receive "preview" notifications (basically hover) during updates where there is
---not a release. This can be used to (eg) update a rubber-band selection end point
---do the between-capture previews. holding capture across mouse release is not ideal.
---@class UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior
local UMultiClickSequenceInputBehavior = {}

