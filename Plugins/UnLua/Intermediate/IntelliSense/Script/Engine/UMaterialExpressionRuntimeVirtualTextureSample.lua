---Material expression for sampling from a runtime virtual texture.
---@class UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression
---@field public Coordinates FExpressionInput @Optional UV coordinates input if we want to override standard world position based coordinates.
---@field public WorldPosition FExpressionInput @Optional world position input to override the default world position.
---@field public MipValue FExpressionInput @Meaning depends on MipValueMode. A single unit is one mip level.
---@field public DDX FExpressionInput @Derivative over the X axis. Enabled only if MipValueMode is one of the derivative modes. Meaning depends on the derivative mode.
---@field public DDY FExpressionInput @Derivative over the Y axis. Enabled only if MipValueMode is one of the derivative modes. Meaning depends on the derivative mode.
---@field public VirtualTexture URuntimeVirtualTexture @The virtual texture object to sample.
---@field public MaterialType ERuntimeVirtualTextureMaterialType @How to interpret the virtual texture contents. Note that the bound Virtual Texture should have the same setting for sampling to work correctly.
---@field public bSinglePhysicalSpace boolean @Enable page table channel packing. Note that the bound Virtual Texture should have the same setting for sampling to work correctly.
---@field public bAdaptive boolean @Enable sparse adaptive page tables. Note that the bound Virtual Texture should have valid adaptive virtual texture settings for sampling to work correctly.
---@field public WorldPositionOriginType EPositionOrigin @Defines the reference space for the WorldPosition input.
---@field public TextureAddressMode integer @Defines the texture addressing mode.
---@field public MipValueMode integer @Defines how the mip level is calculated for the virtual texture lookup.
---@field public bEnableFeedback boolean @Enable virtual texture feedback. Disabling this can result in the virtual texture not reaching the correct mip level. It should only be used in cases where we don't care about the correct mip level being resident, or some other process is maintaining the correct level.
local UMaterialExpressionRuntimeVirtualTextureSample = {}

