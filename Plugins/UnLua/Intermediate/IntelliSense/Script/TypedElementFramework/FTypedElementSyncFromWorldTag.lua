---Tag to signal that data a processor copies out of the world must be synced to the data storage.
---Useful for when an Actor was recently spawned or reloaded in the world.
---Currently used if any property changes since there is no mechanism to selectively run
---queries for specific changed properties.
---@class FTypedElementSyncFromWorldTag : FEditorDataStorageTag
local FTypedElementSyncFromWorldTag = {}
