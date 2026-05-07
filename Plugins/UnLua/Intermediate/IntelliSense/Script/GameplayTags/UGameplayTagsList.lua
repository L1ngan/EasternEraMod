---Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists
---@class UGameplayTagsList : UObject
---@field public ConfigFileName string @Relative path to the ini file that is backing this list
---@field public GameplayTagRedirects TArray<FGameplayTagRedirect> @List of active tag redirects
---@field public GameplayTagList TArray<FGameplayTagTableRow> @List of tags saved to this file
local UGameplayTagsList = {}

