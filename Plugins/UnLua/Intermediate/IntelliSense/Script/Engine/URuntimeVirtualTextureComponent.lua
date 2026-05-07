---Component used to place a URuntimeVirtualTexture in the world.
---@class URuntimeVirtualTextureComponent : USceneComponent
---@field protected BoundsAlignActor TSoftObjectPtr<AActor> @Actor to align rotation to. If set this actor is always included in the bounds calculation.
---@field protected bSetBoundsButton boolean @Placeholder for details customization button.
---@field protected bSnapBoundsToLandscape boolean @If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions.
---@field protected ExpandBounds number @Amount to expand the Bounds during calculation.
---@field protected VirtualTexture URuntimeVirtualTexture @The virtual texture object to use.
---@field protected EnableInGamePerPlatform FPerPlatformBool @Per platform overrides for enabling the virtual texture. Only affects In-Game and PIE.
---@field protected bEnableForNaniteOnly boolean @Enable the virtual texture only when Nanite is enabled. Can be used for a Displacement virtual texture with Nanite tessellation.
---@field protected bUseMinMaterialQuality boolean @Use a minimum material quality to determine if we enable the virtual texture.
---@field protected MinInGameMaterialQuality ERuntimeVirtualTextureMaterialQuality @The minimum material quality for which we enable the virtual texture. Only affects In-Game and PIE.
---@field protected bEnableScalability boolean @Set to true to enable scalability settings for the virtual texture.
---@field protected ScalabilityGroup integer @Group index of the scalability settings to use for the virtual texture.
---@field protected bHidePrimitives boolean @Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'.
---@field protected StreamingTexture UVirtualTextureBuilder @Texture object containing streamed low mips. This can reduce rendering update cost.
---@field protected StreamLowMips integer @Number of streaming low mips to build for the virtual texture.
---@field protected bBuildStreamingMipsButton boolean @Placeholder for details customization button.
---@field protected LossyCompressionAmount integer @How aggressively should any relevant lossy compression be applied. For compressors that support EncodeSpeed (i.e. Oodle), this is only applied if enabled (see Project Settings -> Texture Encoding). Note that this is in addition to any unavoidable loss due to the target format. Selecting "No Lossy Compression" will not result in zero distortion for BCn formats.
---@field protected bUseStreamingMipsFixedColor boolean @Build the streaming low mips using a fixed color.
---@field protected StreamingMipsFixedColor FLinearColor @Fixed color to use when building the streaming low mips. This only affects BaseColor and Displacement attributes. The Red channel is used for fixed Displacement.
---@field protected bUseStreamingMipsOnly boolean @Whenever streaming low mips are in use, only show the streaming mips and never show runtime generated pages.
---@field protected UseStreamingMipsInEditorMode ERuntimeVirtualTextureUseStreamingMipsInEditorMode @Use streaming low mips when rendering this runtime virtual texture in the editor. Allows to visualize the baked streaming low mips. r.VT.RVT.StreamingMips.UseInEditor can also be used to allow this across all RVT components (for debugging purposes)
local URuntimeVirtualTextureComponent = {}

---Request preload of an area of the runtime virtual texture at a given mip level.
---@param WorldBounds FBoxSphereBounds
---@param Level integer
function URuntimeVirtualTextureComponent:RequestPreload(WorldBounds, Level) end

---This function marks an area of the runtime virtual texture as dirty.
---This allows increased responsiveness when there are more pages being updated than can be handled in a given frame (throttling)
---@param WorldBounds FBoxSphereBounds
---@param InvalidatePriority EVTInvalidatePriority @[opt] 
function URuntimeVirtualTextureComponent:Invalidate(WorldBounds, InvalidatePriority) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URuntimeVirtualTextureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URuntimeVirtualTextureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URuntimeVirtualTextureComponent:AddAssetUserDataOfClass(InUserDataClass) end

