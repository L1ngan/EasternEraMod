---FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.
---IGizmoVec2ParameterSource implementations use this to track changes and emit delta information.
---@class FGizmoVec2ParameterChange
---@field public InitialValue FVector2D
---@field public CurrentValue FVector2D
local FGizmoVec2ParameterChange = {}
