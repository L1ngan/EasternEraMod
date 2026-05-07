---@class UTexture : UStreamableRenderAsset
---@field public Source FTextureSource @Dynamic textures will have ! Source.IsValid() ;       Also in UEFN , Textures from the cooked-only texture library.  Always check Source.IsValid before using Source.
---@field private LightingGuid FGuid @Unique ID for this material, used for caching during distributed lighting
---@field public AssetImportData UAssetImportData
---@field public AdjustBrightness number @Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.)
---@field public AdjustBrightnessCurve number @Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)
---@field public AdjustVibrance number @Static texture "vibrance" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)
---@field public AdjustSaturation number @Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)
---@field public AdjustRGBCurve number @Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)
---@field public AdjustHue number @Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)
---@field public AdjustMinAlpha number @Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.)
---@field public AdjustMaxAlpha number @Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.)
---@field public CompressionNoAlpha boolean @If enabled, the texture's alpha channel will be forced to opaque for any compressed texture output format.  Does not apply if output format is uncompressed RGBA.
---@field public CompressionForceAlpha boolean @If true, force alpha channel in output format when possible, eg. for AutoDXT BC1/BC3 choice *
---@field public CompressionNone boolean @If true, force the texture to be uncompressed no matter the format.
---@field public CompressFinal boolean @If enabled, compress with Final quality during this Editor session.
---@field public DeferCompression boolean @If enabled, defer compression of the texture until save or manually compressed in the texture editor.
---@field public LossyCompressionAmount integer @How aggressively should any relevant lossy compression be applied. For compressors that support EncodeSpeed (i.e. Oodle), this is only      applied if enabled (see Project Settings -> Texture Encoding). Note that this is *in addition* to any      unavoidable loss due to the target format - selecting "No Lossy Compression" will not result in zero distortion for BCn formats.
---@field public OodleTextureSdkVersion string @Oodle Texture SDK Version to encode with.  Enter 'latest' to update; 'None' preserves legacy encoding to avoid patches.
---@field public MaxTextureSize integer @The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform.
---@field public CompressionQuality integer @The compression quality for generated ASTC textures (i.e. mobile platform textures).
---@field public CompressionCacheId FGuid @Change this optional ID to force the texture to be recompressed by changing its cache key.
---@field public bDoScaleMipsForAlphaCoverage boolean @Whether mip RGBA should be scaled to preserve the number of pixels with Value >= AlphaCoverageThresholds.  AlphaCoverageThresholds are ignored if this is off.
---@field public AlphaCoverageThresholds FVector4 @Alpha values per channel to compare to when preserving alpha coverage. 0 means disable channel.  Typical good values in 0.5 - 0.9, not 1.0
---@field public bUseNewMipFilter boolean @Disable for legacy compatibility.  New and changed textures should set this to use modern improved image processing.
---@field public bPreserveBorder boolean @When true the texture's border will be preserved during mipmap generation.
---@field public bFlipGreenChannel boolean @When true the texture's green channel will be inverted. This is useful for some normal maps.
---@field public PowerOfTwoMode integer @How to pad the texture to a power of 2 size (if necessary)
---@field public PaddingColor FColor @The color used to pad the texture out if it is padded due to PowerOfTwoMode
---@field public bPadWithBorderColor boolean @If set to true, texture padding will be performed using colors of the border pixels. This can be used to improve quality of the generated mipmaps for padded textures.
---@field public ResizeDuringBuildX integer @Width of the resized texture when using "Resize To Specific Resolution" padding and resizing option. If set to zero, original width will be used.
---@field public ResizeDuringBuildY integer @Width of the resized texture when using "Resize To Specific Resolution" padding and resizing option. If set to zero, original height will be used.
---@field public bChromaKeyTexture boolean @Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black
---@field public ChromaKeyThreshold number @The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match)
---@field public ChromaKeyColor FColor @The color that will be replaced with transparent black if chroma keying is enabled
---@field public MipGenSettings integer @Per asset specific setting to define the mip-map generation properties like sharpening and kernel size.
---@field public CompositeTexture UTexture
---@field public CompositeTextureMode integer @defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha
---@field public CompositePower number @default 1, high values result in a stronger effect e.g 1, 2, 4, 8 this is not a slider because the texture update would not be fast enough
---@field public LayerFormatSettings TArray<FTextureFormatSettings> @Array of settings used to control the format of given layer If this array doesn't include an entry for a given layer, values from UTexture will be used
---@field public LevelIndex integer @* Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index. * Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data. * It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids. * Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time, * -2 is also used to indicate that the texture has been processed but no entry were found in the level table. * After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task.
---@field public LODBias integer @A bias to the index of the top mip level to use.  That is, number of mip levels to drop when cooking.
---@field public CompressionSettings integer @Compression settings to use when building the texture.
---@field public Filter integer @The texture filtering mode to use when sampling this texture.
---@field public MipLoadOptions ETextureMipLoadOptions @The texture mip load options.
---@field public VirtualTextureStreamingPriority EVTProducerPriority @Priority to use when using virtual texture streaming for this texture.
---@field public VirtualTexturePrefetchMips integer @The number of mips that a virtual texture can stream using the traditional CPU texture streaming system. In most cases this should be 0 because the virtual texture GPU feedback is sufficient and will minimize memory usage. But CPU prefetching can be used in some cases to avoid late appearance of mips.
---@field public CookPlatformTilingSettings integer @If the platform supports it, tile the texture when cooking, or keep it linear and tile it when it's actually submitted to the GPU.
---@field public bOodlePreserveExtremes boolean @If set to true, then Oodle encoder preserves 0 and 255 (0.0 and 1.0) values exactly in alpha channel for BC3/BC7 and in all channels for BC4/BC5.
---@field public LODGroup integer @Texture group this texture belongs to
---@field public Downscale FPerPlatformFloat @Downscale source texture, applied only to 2d textures without mips < 1.0 - use scale value from texture group 1.0 - do not scale texture > 1.0 - scale texure
---@field public DownscaleOptions ETextureDownscaleOptions @Texture downscaling options
---@field public Availability ETextureAvailability @Whether the texture will be encoded to a gpu format and uploaded to the graphics card, or kept on the CPU for access by gamecode / blueprint. For CPU availability, the texture will still upload a tiny black texture as a placeholder. Only applies to 2d textures.
---@field public SRGB boolean @Whether Texture and its source are in SRGB Gamma color space.  Can only be used with 8-bit and compressed formats.  This should be unchecked if using alpha channels individually as masks.
---@field public bNormalizeNormals boolean @Normalize colors in Normal Maps after mip generation for better and sharper quality; recommended on if not required to match legacy behavior.
---@field public bUseLegacyGamma boolean @A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB.
---@field public SourceColorSettings FTextureSourceColorSettings @Texture color management settings: source encoding and color space.
---@field public bNoTiling boolean @If true, the RHI texture will be created using TexCreate_NoTiling
---@field public VirtualTextureStreaming boolean @Is this texture streamed in using VT
---@field public bUseVirtualTextureStreamingPriority boolean @Override the virtual texture streaming priority set on this texture by the texture LOD group.
---@field public CompressionYCoCg boolean @If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression.
---@field public bNotOfflineProcessed boolean @If true, the RHI texture will be created without TexCreate_OfflineProcessed. This controls what format the data will be uploaded to RHI. Offline processed textures may have platform specific tiling applied, and/or have their mip tails pre-combined into a single mip's data. If NotOffline, then it will expect data to be uploaded in standard per-mip layouts.
---@field private bAsyncResourceReleaseHasBeenStarted boolean @Whether the async resource release process has already been kicked off or not
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local UTexture = {}

---@param bVirtualTextureStreaming boolean
function UTexture:SetVirtualTextureStreaming(bVirtualTextureStreaming) end

---Scan the texture source pixels to compute the min & max values of the RGBA channels.
---Uses texture source, not available in runtime games.
---Causes texture source data to be loaded, is computed by scanning pixels when called.
---Will set Min=Max=zero and return false on failure
---@param OutColorMin FLinearColor @[out] 
---@param OutColorMax FLinearColor @[out] 
---@return boolean
function UTexture:ComputeTextureSourceChannelMinMax(OutColorMin, OutColorMax) end

---Return the ID for the texture source.
---If the source isn't valid or editor data isn't available, returns false.
---@param OutTextureSourceId string @[out] 
---@return boolean
function UTexture:Blueprint_GetTextureSourceIdString(OutTextureSourceId) end

---Gets the memory size of the texture source top mip, in bytes, and the size on disk of the asset, which may be compressed.
---Uses texture source, not available in runtime games.
---Does not cause texture source to be loaded, queries cached values.
---Returns zero for error.
---@param OutDiskSize integer @[out] 
---@param OutMemorySize integer @[out] 
function UTexture:Blueprint_GetTextureSourceDiskAndMemorySize(OutDiskSize, OutMemorySize) end

---Gets the memory size of the texture, in bytes.
---This is the size in GPU memory of the built platformdata, accounting for LODBias, etc.
---Returns zero for error.
---@return integer
function UTexture:Blueprint_GetMemorySize() end

---Get the dimensions of the largest mip of the texture when built, accounting for LODBias and other constraints
---      Returns the 3d size when built for the current platform.  Does not cause texture to get built.
---@return FVector3f
function UTexture:Blueprint_GetBuiltTextureSize() end

---This function is used to control access to the Downscale and DownscaleOptions properties from the Texture Editor UI
---in order to make it more clear to the user whether these properties will or will not be used when building the texture.
---@return boolean
function UTexture:AreDownscalePropertiesEditable() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTexture:AddAssetUserDataOfClass(InUserDataClass) end

