---/
--- Dynamic state for transform instance. Can be updated inside ticks
---@class FTransformDynamicState
---@field private LocalTransform FTransform @Transform relative Parent
---@field private BoneTransforms TArray<FTransform>
---@field private Parent FTransformHandle @Parent
---@field private bVisible boolean @UPROPERTY() uint8 ScaleRule = 0;
local FTransformDynamicState = {}
