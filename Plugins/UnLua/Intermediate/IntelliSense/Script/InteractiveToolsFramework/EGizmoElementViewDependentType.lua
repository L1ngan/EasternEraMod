---View dependent type: automatically cull gizmo element based on view.
---  Axis  - Cull object when angle between axis and view direction is within a given tolerance
---  Plane - Cull object when angle between plane normal and view direction is perpendicular within a given tolerance
---@class EGizmoElementViewDependentType
---@field public None integer
---@field public Axis integer
---@field public Plane integer
---@field public EGizmoElementViewDependentType_MAX integer
local EGizmoElementViewDependentType = {}
