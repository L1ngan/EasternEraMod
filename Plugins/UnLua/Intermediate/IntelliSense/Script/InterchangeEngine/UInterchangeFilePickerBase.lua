---@class UInterchangeFilePickerBase : UObject
local UInterchangeFilePickerBase = {}

---Non-virtual helper that allows Blueprint to implement an event-based function to implement FilePickerForTranslatorType().
---@param TranslatorType EInterchangeTranslatorType
---@param Parameters FInterchangeFilePickerParameters @[out] 
---@param OutFilenames TArray_string_ @[out] 
---@return boolean
function UInterchangeFilePickerBase:ScriptedFilePickerForTranslatorType(TranslatorType, Parameters, OutFilenames) end

---Non-virtual helper that allows Blueprint to implement an event-based function to implement FilePickerForTranslatorAssetType().
---@param TranslatorAssetType EInterchangeTranslatorAssetType
---@param Parameters FInterchangeFilePickerParameters @[out] 
---@param OutFilenames TArray_string_ @[out] 
---@return boolean
function UInterchangeFilePickerBase:ScriptedFilePickerForTranslatorAssetType(TranslatorAssetType, Parameters, OutFilenames) end

