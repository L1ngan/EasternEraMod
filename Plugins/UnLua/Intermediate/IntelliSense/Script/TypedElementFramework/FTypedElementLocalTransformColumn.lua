---Column that stores a local transform.
---@class FTypedElementLocalTransformColumn : FEditorDataStorageColumn
---@field public Transform FTransform @Transform is not being initialized to avoid spending time on initialization when the Transform will be updated the first and following ticks after it's creation. If this isn't initialized at the correct time, then the sync from source or the true initialization need to be moved to an earlier phase or group.
local FTypedElementLocalTransformColumn = {}
