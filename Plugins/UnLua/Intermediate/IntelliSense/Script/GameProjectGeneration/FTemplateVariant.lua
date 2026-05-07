---@class FTemplateVariant
---@field public Name string
---@field public LocalizedDisplayNames TArray<FLocalizedTemplateString>
---@field public LocalizedDescriptions TArray<FLocalizedTemplateString>
---@field public SharedContentPacks TArray<FFeaturePackLevelSet> @Shared feature packs. The files in these packs listed in these structures marked as 'additionalfiles' will be copied on project generation
local FTemplateVariant = {}
