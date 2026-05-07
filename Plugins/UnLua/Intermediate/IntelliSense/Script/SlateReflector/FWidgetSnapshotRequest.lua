---Implements a message that is used to request a widget snapshot from a remote target.
---@class FWidgetSnapshotRequest
---@field public TargetInstanceId FGuid @The instance ID of the remote target we want to receive a snapshot from
---@field public SnapshotRequestId FGuid @The request ID of this snapshot (used to identify the correct response from the target)
local FWidgetSnapshotRequest = {}
