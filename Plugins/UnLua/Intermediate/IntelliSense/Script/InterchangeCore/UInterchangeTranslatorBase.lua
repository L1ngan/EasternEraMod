---@class UInterchangeTranslatorBase : UObject
---@field public Results UInterchangeResultsContainer
---@field public SourceData UInterchangeSourceData
local UInterchangeTranslatorBase = {}

---Reimport will set the settings if they exist in UInterchangeAssetImportData
---@param InterchangeTranslatorSettings UInterchangeTranslatorSettings
function UInterchangeTranslatorBase:SetSettings(InterchangeTranslatorSettings) end

---Specifies the capabilities of a translator.
---@return EInterchangeTranslatorType
function UInterchangeTranslatorBase:GetTranslatorType() end

---List of formats supported by the translator. Each entry is of the form "ext;Description" where ext is the file extension.
---@return TArray_string_
function UInterchangeTranslatorBase:GetSupportedFormats() end

---@return EInterchangeTranslatorAssetType
function UInterchangeTranslatorBase:GetSupportedAssetTypes() end

---Get the associated source data for this translator.
---@return UInterchangeSourceData
function UInterchangeTranslatorBase:GetSourceData() end

---Return this translator settings
---@return UInterchangeTranslatorSettings
function UInterchangeTranslatorBase:GetSettings() end

---return true if the translator can translate the given source data.
---@param InSourceData UInterchangeSourceData
---@return boolean
function UInterchangeTranslatorBase:CanImportSourceData(InSourceData) end

