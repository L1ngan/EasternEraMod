---A mask is simply some storage for a physical mesh parameter painted onto clothing.
---Used in the editor for users to paint onto and then target to a parameter, which
---is then later applied to a phys mesh
---@class FPointWeightMap
---@field public Values TArray<number> @The actual values stored in the mask
---@field public Name string @Name of the mask, mainly for users to differentiate
---@field public CurrentTarget integer @The currently targeted parameter for the mask, @@seealso EWeightMapTargetCommon
---@field public bEnabled boolean @Whether this mask is enabled and able to effect final mesh values
local FPointWeightMap = {}
