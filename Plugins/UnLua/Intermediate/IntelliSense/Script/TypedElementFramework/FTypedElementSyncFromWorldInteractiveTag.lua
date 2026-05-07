---Tag to signal that data a processor copies out of the world must be synced to the data storage.
---Useful for when an Actor was recently spawned or reloaded in the world. This version is not
---automatically removed and intended for interactive operations that will take a few frames
---to complete such as dragging.
---Currently used if any property changes since there is no mechanism to selectively run
---queries for specific changed properties.
---@class FTypedElementSyncFromWorldInteractiveTag : FEditorDataStorageTag
local FTypedElementSyncFromWorldInteractiveTag = {}
