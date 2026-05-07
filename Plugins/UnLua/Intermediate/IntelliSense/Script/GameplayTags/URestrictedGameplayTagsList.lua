---Base class for storing a list of restricted gameplay tags as an ini list. This is used for both the central list and additional lists
---@class URestrictedGameplayTagsList : UObject
---@field public ConfigFileName string @Relative path to the ini file that is backing this list
---@field public RestrictedGameplayTagList TArray<FRestrictedGameplayTagTableRow> @List of restricted tags saved to this file
local URestrictedGameplayTagsList = {}

