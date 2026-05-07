---@class UMaterialInterface : UObject
---@field protected EditorOnlyData UMaterialInterfaceEditorOnlyData
---@field public SubsurfaceProfile USubsurfaceProfile @SubsurfaceProfile, for Screen Space Subsurface Scattering..
---@field public SubsurfaceProfiles TArray<USubsurfaceProfile> @Subsurface Profiles. For internal usage, not editable/visible. For Substrate, there can be many in a material similarly to SpecularProfile (even though only one can be specified per pixel due to the post processing)
---@field public SpecularProfiles TArray<USpecularProfile> @Specular Profile. For internal usage, not editable/visible
---@field public NeuralProfile UNeuralProfile @Neural network profile. For internal usage, not editable/visible
---@field protected LightmassSettings FLightmassMaterialInterfaceSettings @The Lightmass settings for this object.
---@field protected bTextureStreamingDataSorted boolean @Because of redirector, the texture names need to be resorted at each load in case they changed.
---@field protected TextureStreamingDataVersion integer
---@field protected TextureStreamingData TArray<FMaterialTextureInfo> @Data used by the texture streaming to know how each texture is sampled by the material. Sorted by names for quick access.
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected CachedTexturesSamplingInfo Unknown @Pre-cached texture sampling information used for texture streaming (calculated on load) *
---@field public bIncludedInBaseGame boolean @Whether this material interface is included in the base game (and not in a DLC)
---@field public TextureStreamingDataMissingEntries TArray<FMaterialTextureInfo> @List of all used but missing texture indices in TextureStreamingData. Used for visualization / debugging only.
---@field public PreviewMesh FSoftObjectPath @The mesh used by the material editor to preview the material.
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
---@field public LayerParameterExpansion TMap<string, boolean>
---@field public ParameterOverviewExpansion TMap<string, boolean>
---@field public AssetImportData UAssetImportData @Importing data and options used for this material
---@field private LightingGuid FGuid @Unique ID for this material, used for caching during distributed lighting
local UMaterialInterface = {}

---Force the streaming system to disregard the normal logic for the specified duration and
---instead always load all mip-levels for all textures used by this material.
---@param OverrideForceMiplevelsToBeResident boolean
---@param bForceMiplevelsToBeResidentValue boolean
---@param ForceDuration number
---@param CinematicTextureGroups integer @[opt] 
---@param bFastResponse boolean @[opt] 
function UMaterialInterface:SetForceMipLevelsToBeResident(OverrideForceMiplevelsToBeResident, bForceMiplevelsToBeResidentValue, ForceDuration, CinematicTextureGroups, bFastResponse) end

---Return a pointer to the physical material mask used by this material instance.
---@return UPhysicalMaterialMask
function UMaterialInterface:GetPhysicalMaterialMask() end

---Return a pointer to the physical material from mask map at given index.
---@param Index integer
---@return UPhysicalMaterial
function UMaterialInterface:GetPhysicalMaterialFromMap(Index) end

---Return a pointer to the physical material used by this material instance.
---@return UPhysicalMaterial
function UMaterialInterface:GetPhysicalMaterial() end

---@param Association integer
---@param ParameterName string
---@param LayerFunction UMaterialFunctionInterface
---@return FMaterialParameterInfo
function UMaterialInterface:GetParameterInfo(Association, ParameterName, LayerFunction) end

---Get the associated nanite override material.
---@return UMaterialInterface
function UMaterialInterface:GetNaniteOverideMaterial() end

---@return integer
function UMaterialInterface:GetBlendMode() end

---Walks up parent chain and finds the base Material that this is an instance of. Just calls the virtual GetMaterial()
---@return UMaterial
function UMaterialInterface:GetBaseMaterial() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialInterface:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMaterialInterface:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialInterface:AddAssetUserDataOfClass(InUserDataClass) end

