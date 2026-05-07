---@class FTemplateCategoryDef
---@field public Key string @Key to use for identifying what category a template is in.
---@field public LocalizedDisplayNames TArray<FLocalizedTemplateString> @Localized name for this template category.
---@field public LocalizedDescriptions TArray<FLocalizedTemplateString> @Localized description for this template category.
---@field public Icon string @Reference to an icon to display for this category. Should be around 300x100.
---@field public IsMajorCategory boolean @Is this a major top-level category? Major categories are displayed as full rows, eg. the Game category.
local FTemplateCategoryDef = {}
