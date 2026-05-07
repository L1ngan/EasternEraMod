---@class FFileManifestData
---@field public Filename string
---@field public FileHash FSHAHashData
---@field public FileChunkParts TArray<FChunkPartData>
---@field public InstallTags TArray<string>
---@field public bIsUnixExecutable boolean
---@field public SymlinkTarget string
---@field public bIsReadOnly boolean
---@field public bIsCompressed boolean
local FFileManifestData = {}
