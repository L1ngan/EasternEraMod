---@class UBuildPatchManifest : UObject
---@field public ManifestFileVersion integer
---@field public bIsFileData boolean
---@field public AppID integer
---@field public AppName string
---@field public BuildVersion string
---@field public LaunchExe string
---@field public LaunchCommand string
---@field public PrereqIds TSet<string>
---@field public PrereqName string
---@field public PrereqPath string
---@field public PrereqArgs string
---@field public FileManifestList TArray<FFileManifestData>
---@field public ChunkList TArray<FChunkInfoData>
---@field public CustomFields TArray<FCustomFieldData>
local UBuildPatchManifest = {}

