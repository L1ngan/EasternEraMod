---UTextureAllMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.
---Derived classes from UTextureAllMipDataProviderFactory can be attached to UTexture2D
---to define a new source for all of the mip data (instead of the default disk file or ddc mips).
---Use cases include custom texture compression.
---@class UTextureAllMipDataProviderFactory : UTextureMipDataProviderFactory
local UTextureAllMipDataProviderFactory = {}

