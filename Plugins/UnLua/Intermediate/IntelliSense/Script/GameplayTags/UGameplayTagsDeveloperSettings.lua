---@class UGameplayTagsDeveloperSettings : UDeveloperSettings
---@field public DeveloperConfigName string @Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file.
---@field public FavoriteTagSource string @Stores the favorite tag source, used as the default ini when adding new tags, can be toggled on/off using the button next to the tag source picker
local UGameplayTagsDeveloperSettings = {}

