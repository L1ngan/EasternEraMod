---Deprecated, legacy definition kept for backward compatibility only.
---Use FPointWeightMap instead.
---Redirected from the now defunct ClothingSystemRuntime module.
---@class FClothParameterMask_Legacy
---@field public MaskName string @Name of the mask, mainly for users to differentiate
---@field public CurrentTarget EWeightMapTargetCommon @The currently targeted parameter for the mask
---@field public Values TArray<number> @The actual values stored in the mask
---@field public bEnabled boolean @Whether this mask is enabled and able to effect final mesh values
local FClothParameterMask_Legacy = {}
