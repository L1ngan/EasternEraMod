---Auto reimport settings for a specific directory
---@class FAutoReimportDirectoryConfig
---@field public SourceDirectory string @Path to a virtual package path (eg /Game/ or /MyPlugin/), or absolute paths on disk where your source content files reside.
---@field public MountPoint string @(Optional) Specify a virtual mout point (e.g. /Game/) to map this directory to on disk. Doing so allows auto-creation of assets when a source content file is created in this folder (see below).
---@field public Wildcards TArray<FAutoReimportWildcard> @(Optional) Specify a set of wildcards to include or exclude files from this auto-reimporter.
local FAutoReimportDirectoryConfig = {}
