---@class FLandscapeImportDescriptor
---@field public ImportResolutions TArray<FLandscapeImportResolution> @Landscape Import Resolution based on File Coords + Resolutions
---@field public FileResolutions TArray<FLandscapeFileResolution> @Single File Resolutions
---@field public FileDescriptors TArray<FLandscapeImportFileDescriptor> @Files contributing to this descriptor
---@field public Scale FVector @Scale of Import data
local FLandscapeImportDescriptor = {}
