---Arguments that can be used when creating a new mapping profile
---@class FPlayerMappableKeyProfileCreationArgs
---@field public ProfileType TSubclassOf<UEnhancedPlayerMappableKeyProfile>
---@field public ProfileIdentifier FGameplayTag
---@field public ProfileStringIdentifier string @The unique identifier that this profile should have
---@field public UserId FPlatformUserId @The user ID of the ULocalPlayer that this profile is associated with
---@field public DisplayName string @The display name of this profile
---@field public bSetAsCurrentProfile boolean
local FPlayerMappableKeyProfileCreationArgs = {}
