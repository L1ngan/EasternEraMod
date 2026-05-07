---Project-wide settings for data validation
---@class UDataValidationSettings : UDeveloperSettings
---@field public bValidateOnSave boolean @Whether or not to validate assets on save
---@field public bLoadAssetsWhenValidatingChangelists boolean @Whether or not to load & validate assets in changelists by default
---@field public bEnableMaterialValidation boolean
---@field public bMaterialValidationAllowCompilingShaders boolean
---@field public MaterialValidationPlatforms TArray<FMaterialEditorValidationPlatform>
local UDataValidationSettings = {}

