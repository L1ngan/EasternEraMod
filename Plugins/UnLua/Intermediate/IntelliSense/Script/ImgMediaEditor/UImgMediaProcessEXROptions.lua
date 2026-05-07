---@class UImgMediaProcessEXROptions : UObject
---@field public InputPath FFilePath @The directory that contains the image sequence files.
---@field public OutputPath FDirectoryPath @The directory to output the processed image sequence files to.
---@field public bEnableMipMapping boolean @If checked, then enable mip mapping.
---@field public bEnableTiling boolean @If checked, then enable tiling.
---@field public TileSizeX integer @Width of a tile in pixels. If 0, then do not make tiles.
---@field public TileSizeY integer @Height of a tile in pixels. If 0, then do not make tiles.
---@field public NumThreads integer @Number of threads to use when processing. If 0 then this number is set automatically.
---@field public bUsePlayer boolean @Use a player to read in the image.
---@field public bRemoveAlphaChannel boolean @This option removes alpha channel. Since alpha channel adds 25% reading cost, it is suggested to have alpha channel removed if it is not used.
---@field public bEnableMipLevelTint boolean @Tint each mip level a different colour to help with debugging.
---@field public MipLevelTints TArray<FLinearColor> @Colour to tint each mip level.
local UImgMediaProcessEXROptions = {}

