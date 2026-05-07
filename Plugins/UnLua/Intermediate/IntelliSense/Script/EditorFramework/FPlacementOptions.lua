---@class FPlacementOptions
---@field public InstancedPlacementGridGuid FGuid @The guid to use by factories for instanced placement. If unset, factories will not use instanced placement. This is used to reduce contention within one file per actor within a partition.
---@field public bPreferBatchPlacement boolean @If true, asset factory implementations should prefer a batch placement algorithm (like duplicating an object) over a single placement algorithm.
---@field public bIsCreatingPreviewElements boolean @If true, creates transient preview elements, which are transient and not saved to a level.
local FPlacementOptions = {}
