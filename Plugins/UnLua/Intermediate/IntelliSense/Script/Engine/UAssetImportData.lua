---todo: Make this class better suited to multiple import paths - maybe have FAssetImportInfo use a map rather than array?
---@class UAssetImportData : UObject
---@field public SourceData FAssetImportInfo @Source file data describing the files that were used to import this asset.
local UAssetImportData = {}

---Add or update a filename at the specified index. If the index is greater then the number of source file,
---it will add empty filenames to fill up to the specified index. The timespan and MD5 will be computed.
---@param InPath string
---@param Index integer
---@param SourceFileLabel string
function UAssetImportData:ScriptedAddFilename(InPath, Index, SourceFileLabel) end

---Helper function to return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset).
---@return string
function UAssetImportData:K2_GetFirstFilename() end

---@return TArray_string_
function UAssetImportData:K2_ExtractFilenames() end

