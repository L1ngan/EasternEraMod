---AIntervalGizmoActor is an Actor type intended to be used with UIntervalGizmo,
---as the in-scene visual representation of the Gizmo.
---FIntervalGizmoActorFactory returns an instance of this Actor type (or a subclass).
---If a particular sub-Gizmo is not required, simply set that UProperty to null.
---@class AIntervalGizmoActor : AGizmoActor
---@field public UpIntervalComponent UGizmoLineHandleComponent
---@field public DownIntervalComponent UGizmoLineHandleComponent
---@field public ForwardIntervalComponent UGizmoLineHandleComponent
---@field public BackwardIntervalComponent UGizmoLineHandleComponent
---@field public RightIntervalComponent UGizmoLineHandleComponent
---@field public LeftIntervalComponent UGizmoLineHandleComponent
local AIntervalGizmoActor = {}

