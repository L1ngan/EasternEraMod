---Struct defining where gameplay tags are loaded/saved from. Mostly for the editor
---@class FGameplayTagSource
---@field public SourceName string @Name of this source
---@field public SourceType EGameplayTagSourceType @Type of this source
---@field public SourceTagList UGameplayTagsList @If this is bound to an ini object for saving, this is the one
---@field public SourceRestrictedTagList URestrictedGameplayTagsList @If this has restricted tags and is bound to an ini object for saving, this is the one
local FGameplayTagSource = {}
