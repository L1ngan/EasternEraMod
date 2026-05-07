---A Tag Container holds a collection of FGameplayTags, tags are included explicitly by adding them, and implicitly from adding child tags
---@class FGameplayTagContainer
---@field protected GameplayTags TArray<FGameplayTag> @Array of gameplay tags
---@field protected ParentTags TArray<FGameplayTag> @Array of expanded parent tags, in addition to GameplayTags. Used to accelerate parent searches. May contain duplicates in some cases
local FGameplayTagContainer = {}
