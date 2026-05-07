---FDynamicMeshChangeInfo stores information about a change to a UDynamicMesh.
---This struct is emitted by the UDynamicMesh OnPreMeshChanged() and OnMeshChanged() delegates.
---@class FDynamicMeshChangeInfo
---@field public Type EDynamicMeshChangeType
---@field public Flags EDynamicMeshAttributeChangeFlags
---@field public bIsRevertChange boolean @for changes that are an FChange, indicates whether this is an 'Apply' or 'Revert' of the FChange
local FDynamicMeshChangeInfo = {}
