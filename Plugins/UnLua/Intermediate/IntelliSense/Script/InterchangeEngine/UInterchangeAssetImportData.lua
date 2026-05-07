---@class UInterchangeAssetImportData : UAssetImportData
---@field public SceneImportAsset FSoftObjectPath @On a level import, set to the UInterchangeSceneImportAsset created during the import.
---@field public NodeUniqueID string @The Node UID passed to the factory that existed in the graph that was used to create this asset.
---@field private TransientNodeContainer UInterchangeBaseNodeContainer
---@field private TransientPipelines TArray<UObject>
---@field private TransientTranslatorSettings UInterchangeTranslatorSettings
local UInterchangeAssetImportData = {}

---@param TranslatorSettings UInterchangeTranslatorSettings
function UInterchangeAssetImportData:SetTranslatorSettings(TranslatorSettings) end

---@param InPipelines TArray_UObject_
function UInterchangeAssetImportData:SetPipelines(InPipelines) end

---@param InNodeContainer UInterchangeBaseNodeContainer
function UInterchangeAssetImportData:SetNodeContainer(InNodeContainer) end

---Return the first filename stored in this data. The resulting filename will be absolute (that is, not relative to the asset).
---@return string
function UInterchangeAssetImportData:ScriptGetFirstFilename() end

---Extract all the (resolved) filenames.
---@return TArray_string_
function UInterchangeAssetImportData:ScriptExtractFilenames() end

---Extract all the filename labels.
---@return TArray_string_
function UInterchangeAssetImportData:ScriptExtractDisplayLabels() end

---@return UInterchangeTranslatorSettings
function UInterchangeAssetImportData:GetTranslatorSettings() end

---@param InNodeUniqueId string
---@return UInterchangeBaseNode
function UInterchangeAssetImportData:GetStoredNode(InNodeUniqueId) end

---@param InNodeUniqueId string
---@return UInterchangeFactoryBaseNode
function UInterchangeAssetImportData:GetStoredFactoryNode(InNodeUniqueId) end

---Returns Array of non-null pipelines
---@return TArray_UObject_
function UInterchangeAssetImportData:GetPipelines() end

---@return integer
function UInterchangeAssetImportData:GetNumberOfPipelines() end

---@return UInterchangeBaseNodeContainer
function UInterchangeAssetImportData:GetNodeContainer() end

