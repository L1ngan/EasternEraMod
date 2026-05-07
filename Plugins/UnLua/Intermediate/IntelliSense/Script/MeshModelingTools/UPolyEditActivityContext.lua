---@class UPolyEditActivityContext : UObject
---@field public CommonProperties UPolyEditCommonProperties
---@field public Preview UMeshOpPreviewWithBackgroundCompute @The mesh stored in the preview is not authoritative. It may be altered in various ways as the user previews potential changes, and may be reset back to CurrentMesh if an activity is cancelled.
---@field public SelectionMechanic UPolygonSelectionMechanic @The activity may use the selection mechanic to get (or alter) the current selection, though if selection is just being changed at the end of the activity, it should probably be done through EmitCurrentMeshChangeAndUpdate so that it is lumped with the same undo transaction.
local UPolyEditActivityContext = {}

