---Structure that fill the same role as FAssetImportInfo, but for SourceUri.
---Eventually, the SourceUri should be directly added to FAssetImportInfo and replace the "RelativeFilename".
---@class FDatasmithImportInfo
---@field public SourceUri string @The Uri of to the source that this asset was imported from.
---@field public SourceHash string @The MD5 hash of the source when it was imported. Should be updated alongside the SourceUri
local FDatasmithImportInfo = {}
