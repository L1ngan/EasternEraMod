---UTextureMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.
---Derived classes from UTextureMipDataProviderFactory can be attached to UTexture::MipDataProviderFactory
---to define a new source for mip content (instead of the default disk file or ddc mips).
---Usecases include dynamic textures that need to be driven by the texture streaming or textures that
---get they data over the network.
---@class UTextureMipDataProviderFactory : UAssetUserData
local UTextureMipDataProviderFactory = {}

