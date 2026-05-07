---@class UKismetInternationalizationLibrary : UBlueprintFunctionLibrary
local UKismetInternationalizationLibrary = {}

---Set *only* the current locale (for internationalization).
---@param Culture string
---@param SaveToConfig boolean @[opt] 
---@return boolean
function UKismetInternationalizationLibrary.SetCurrentLocale(Culture, SaveToConfig) end

---Set the current language (for localization) and locale (for internationalization).
---@param Culture string
---@param SaveToConfig boolean @[opt] 
---@return boolean
function UKismetInternationalizationLibrary.SetCurrentLanguageAndLocale(Culture, SaveToConfig) end

---Set *only* the current language (for localization).
---@param Culture string
---@param SaveToConfig boolean @[opt] 
---@return boolean
function UKismetInternationalizationLibrary.SetCurrentLanguage(Culture, SaveToConfig) end

---Set the current culture.
---@param Culture string
---@param SaveToConfig boolean @[opt] 
---@return boolean
function UKismetInternationalizationLibrary.SetCurrentCulture(Culture, SaveToConfig) end

---Set the given asset group category culture from an IETF language tag (eg, "zh-Hans-CN").
---@param AssetGroup string
---@param Culture string
---@param SaveToConfig boolean @[opt] 
---@return boolean
function UKismetInternationalizationLibrary.SetCurrentAssetGroupCulture(AssetGroup, Culture, SaveToConfig) end

---Returns if the given culture reads left to right
---@param Culture string
---@return boolean
function UKismetInternationalizationLibrary.IsCultureRightToLeft(Culture) end

---Given a list of available cultures, try and find the most suitable culture from the list based on culture prioritization.
---  eg) If your list was [en, fr, de] and the given culture was "en-US", this function would return "en".
---  eg) If your list was [zh, ar, pl] and the given culture was "en-US", this function would return the fallback culture.
---@param AvailableCultures TArray_string_
---@param CultureToMatch string
---@param FallbackCulture string @[opt] 
---@return string
function UKismetInternationalizationLibrary.GetSuitableCulture(AvailableCultures, CultureToMatch, FallbackCulture) end

---Get the native culture for the given localization category.
---@param TextCategory ELocalizedTextSourceCategory
---@return string
function UKismetInternationalizationLibrary.GetNativeCulture(TextCategory) end

---Get the list of cultures that have localization data available for them.
---@param IncludeGame boolean @[opt] 
---@param IncludeEngine boolean @[opt] 
---@param IncludeEditor boolean @[opt] 
---@param IncludeAdditional boolean @[opt] 
---@return TArray_string_
function UKismetInternationalizationLibrary.GetLocalizedCultures(IncludeGame, IncludeEngine, IncludeEditor, IncludeAdditional) end

---Get the current locale (for internationalization) as an IETF language tag:
--- - A two-letter ISO 639-1 language code (eg, "zh").
--- - An optional four-letter ISO 15924 script code (eg, "Hans").
--- - An optional two-letter ISO 3166-1 country code (eg, "CN").
---@return string
function UKismetInternationalizationLibrary.GetCurrentLocale() end

---Get the current language (for localization) as an IETF language tag:
--- - A two-letter ISO 639-1 language code (eg, "zh").
--- - An optional four-letter ISO 15924 script code (eg, "Hans").
--- - An optional two-letter ISO 3166-1 country code (eg, "CN").
---@return string
function UKismetInternationalizationLibrary.GetCurrentLanguage() end

---Get the current culture as an IETF language tag:
--- - A two-letter ISO 639-1 language code (eg, "zh").
--- - An optional four-letter ISO 15924 script code (eg, "Hans").
--- - An optional two-letter ISO 3166-1 country code (eg, "CN").
---@return string
function UKismetInternationalizationLibrary.GetCurrentCulture() end

---Get the given asset group category culture.
---@param AssetGroup string
---@return string
function UKismetInternationalizationLibrary.GetCurrentAssetGroupCulture(AssetGroup) end

---Get the display name of the given culture.
---@param Culture string
---@param Localized boolean @[opt] 
---@return string
function UKismetInternationalizationLibrary.GetCultureDisplayName(Culture, Localized) end

---Clear the given asset group category culture.
---@param AssetGroup string
---@param SaveToConfig boolean @[opt] 
function UKismetInternationalizationLibrary.ClearCurrentAssetGroupCulture(AssetGroup, SaveToConfig) end

