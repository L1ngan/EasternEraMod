---A transition condition that matches the gameplay tags on the previous and next
---camera rigs and assets. Both queries need to pass. Empty queries pass by default.
---@class UGameplayTagTransitionCondition : UCameraRigTransitionCondition
---@field public PreviousGameplayTagQuery FGameplayTagQuery @The gameplay tags to look for on the previous camera rig/asset.
---@field public NextGameplayTagQuery FGameplayTagQuery @The gameplay tags to look for on the next camera rig/asset.
local UGameplayTagTransitionCondition = {}

