---Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with
---the current locale, or a default set if an appropriate locale is not found
---@class ULocalizedOverlays : UOverlays
---@field public DefaultOverlays UBasicOverlays @The overlays to use if no overlays are found for the current culture
---@field public LocaleToOverlaysMap TMap<string, UBasicOverlays> @Maps a set of cultures to specific BasicOverlays assets. Cultures are comprised of three hyphen-separated parts:              A two-letter ISO 639-1 language code (e.g., "zh")              An optional four-letter ISO 15924 script code (e.g., "Hans")              An optional two-letter ISO 3166-1 country code  (e.g., "CN")
---@field public AssetImportData UAssetImportData @The import data used to make this overlays asset
local ULocalizedOverlays = {}

