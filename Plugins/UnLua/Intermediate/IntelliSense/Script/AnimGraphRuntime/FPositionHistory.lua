---An easing type defining how to ease float values.
---The FPositionHistory is a container to record position changes
---over time. This is used to calculate velocity of a bone, for example.
---The FPositionArray also tracks the last index used to allow for
---reuse of entries (instead of appending to the array all the time).
---@class FPositionHistory
---@field public Positions TArray<FVector> @The recorded positions
---@field public Range number @The range for this particular history
local FPositionHistory = {}
