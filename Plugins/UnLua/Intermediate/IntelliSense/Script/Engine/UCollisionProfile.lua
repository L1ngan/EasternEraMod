---Set up and modify collision settings.
---@class UCollisionProfile : UDeveloperSettings
---@field private Profiles TArray<FCollisionResponseTemplate> @List of all profiles, engine and game-specific
---@field private DefaultChannelResponses TArray<FCustomChannelSetup> @Game-specific overrides to default responses to collision channels
---@field private EditProfiles TArray<FCustomProfile> @Game-specific overrides to engine profiles
---@field private ProfileRedirects TArray<FRedirector> @Used to handle renaming profiles
---@field private CollisionChannelRedirects TArray<FRedirector> @Used to handle renaming collision channels
local UCollisionProfile = {}

