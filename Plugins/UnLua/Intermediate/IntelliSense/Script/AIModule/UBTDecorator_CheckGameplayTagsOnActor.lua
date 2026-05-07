---GameplayTag decorator node.
---A decorator node that bases its condition on whether the specified Actor (in the blackboard) has a Gameplay Tag or
---Tags specified.
---@class UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
---@field protected ActorToCheck FBlackboardKeySelector
---@field protected TagsToMatch EGameplayContainerMatchType
---@field protected GameplayTags FGameplayTagContainer
---@field protected CachedDescription string @cached description
local UBTDecorator_CheckGameplayTagsOnActor = {}

