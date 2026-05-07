---Runtime virtual texture UObject
---@class URuntimeVirtualTexture : UObject
---@field protected TileCount integer @Size of virtual texture in tiles. (Actual values increase in powers of 2). This is applied to the largest axis in world space and the size for any shorter axis is chosen to maintain aspect ratio.
---@field protected TileSize integer @Page tile size. (Actual values increase in powers of 2)
---@field protected TileBorderSize integer @Page tile border size divided by 2 (Actual values increase in multiples of 2). Higher values trigger a higher anisotropic sampling level.
---@field protected MaterialType ERuntimeVirtualTextureMaterialType @Contents of virtual texture.
---@field protected bCompressTextures boolean @Enable storing the virtual texture in GPU supported compression formats. Using uncompressed is only recommended for debugging and quality comparisons.
---@field protected bUseLowQualityCompression boolean @Use low quality textures (RGB565/RGB555A1) to replace runtime compression
---@field protected CustomPriority EVTProducerPriority @Allows to override the default priority that this runtime virtual texture has, relative to other virtual texture producers. This allows to get the pages from this virtual texture to update faster than others in case of high contention.
---@field protected bUseCustomPriority boolean
---@field protected bClearTextures boolean @Enable clear before rendering a page of the virtual texture. Disabling this can be an optimization if you know that the texture will always be fully covered by rendering.
---@field protected bSinglePhysicalSpace boolean @Enable page table channel packing. This reduces page table memory and update cost but can reduce the ability to share physical memory with other virtual textures.
---@field protected bPrivateSpace boolean @Enable private page table allocation. This can reduce total page table memory allocation but can also reduce the total number of virtual textures supported.
---@field protected bAdaptive boolean @Enable sparse adaptive page tables. This supports larger tile counts but adds an indirection cost when sampling the virtual texture. It is recommended only when very large virtual resolutions are necessary.
---@field protected bContinuousUpdate boolean @Enable continuous update of the virtual texture pages. This round-robin updates already mapped pages and can help fix pages that are mapped before dependent textures are fully streamed in.
---@field protected RemoveLowMips integer @Number of low mips to cut from the virtual texture. This can reduce peak virtual texture update cost but will also increase the probability of mip shimmering.
---@field protected CustomMaterialData FVector4f @A float4 custom value that can be read in the material that writes this virtual texture.
---@field protected LODGroup integer @Texture group this texture belongs to
local URuntimeVirtualTexture = {}

---Public getter for virtual texture tile size
---@return integer
function URuntimeVirtualTexture:GetTileSize() end

---Public getter for virtual texture tile count
---@return integer
function URuntimeVirtualTexture:GetTileCount() end

---Public getter for virtual texture tile border size
---@return integer
function URuntimeVirtualTexture:GetTileBorderSize() end

---Public getter for virtual texture size. This is derived from the TileCount and TileSize.
---@return integer
function URuntimeVirtualTexture:GetSize() end

---Public getter for virtual texture page table size. This is only different from GetTileCount() when using an adaptive page table.
---@return integer
function URuntimeVirtualTexture:GetPageTableSize() end

