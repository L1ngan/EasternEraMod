---FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.
---IGizmoFloatParameterSource implementations use this to track changes and emit delta information.
---@class FGizmoFloatParameterChange
---@field public InitialValue number
---@field public CurrentValue number
local FGizmoFloatParameterChange = {}
