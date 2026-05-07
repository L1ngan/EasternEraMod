---Minimal descriptor needed to generate a localization target for UGC localization.
---@class FUserGeneratedContentLocalizationDescriptor
---@field public NativeCulture string @The language that the source text is authored in.
---@field public CulturesToGenerate TArray<string> @The languages that we should generate localization data for.
---@field public PoFormat EPortableObjectFormat @What format of PO file should we use?
local FUserGeneratedContentLocalizationDescriptor = {}
