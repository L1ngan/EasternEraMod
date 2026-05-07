---Implements per-project cooker settings exposed to the editor
---@class UCrashReporterSettings : UObject
---@field public UploadSymbolsPath string @Directory for uploading locally built binaries and .PDB files
---@field public DownstreamStorage string @Local downstream PDB storage path (used for caching remote .PDB files)
---@field public RemoteStorage TArray<string> @Remote PDB storage (directory path or http/https URL)
local UCrashReporterSettings = {}

