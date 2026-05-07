---Implements a message that is used to receive a widget snapshot from a remote target.
---@class FWidgetSnapshotResponse
---@field public SnapshotRequestId FGuid @The request ID of this snapshot (used to identify the correct response from the target)
---@field public SnapshotData TArray<integer> @The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer
local FWidgetSnapshotResponse = {}
