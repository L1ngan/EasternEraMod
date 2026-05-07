---Used to create fogging effects such as clouds but with a density that is related to the height of the fog.
---@class UExponentialHeightFogComponent : USceneComponent
---@field public FogDensity number @Global density factor.
---@field public FogHeightFalloff number @Height density factor, controls how the density increases as height decreases. Smaller values make the visible transition larger.
---@field public SecondFogData FExponentialHeightFogData @Settings for the second fog. Setting the density of this to 0 means it doesn't have any influence.
---@field public FogInscatteringLuminance FLinearColor @Note: when r.SupportExpFogMatchesVolumetricFog = 1, this value is ignored and the volumetric fog Emissive is used instead.
---@field public SkyAtmosphereAmbientContributionColorScale FLinearColor @Color used to modulate the SkyAtmosphere component contribution to the non directional component of the fog. Only effective when r.SupportSkyAtmosphereAffectsHeightFog>0
---@field public InscatteringColorCubemap UTextureCube @Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky. When the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled.
---@field public InscatteringColorCubemapAngle number @Angle to rotate the InscatteringColorCubemap around the Z axis.
---@field public InscatteringTextureTint FLinearColor @Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap.
---@field public FullyDirectionalInscatteringColorDistance number @Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color.
---@field public NonDirectionalInscatteringColorDistance number @Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color.
---@field public DirectionalInscatteringExponent number @Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light. Note:   - there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.   - When r.SupportExpFogMatchesVolumetricFog = 1, this value is ignored and the volumetric fog Scattering Distribution is used instead.
---@field public DirectionalInscatteringStartDistance number @Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light. Note:   - There must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.   - When r.SupportExpFogMatchesVolumetricFog = 1, this value is ignored.
---@field public DirectionalInscatteringLuminance FLinearColor @Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light. Note:   - there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.   - When r.SupportExpFogMatchesVolumetricFog = 1, this value is ignored.
---@field public FogMaxOpacity number @Maximum opacity of the fog. A value of 1 means the fog can become fully opaque at a distance and replace scene color completely, A value of 0 means the fog color will not be factored in at all.
---@field public StartDistance number @Distance from the camera that the fog will start, in world units.
---@field public EndDistance number @Distance from the camera, on the horizontal XY plane, that the fog will end integrating the lighting and transmittance. Disabled when 0.
---@field public FogCutoffDistance number @Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in.
---@field public bEnableVolumetricFog boolean @Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation. Note that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance. Volumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior.
---@field public VolumetricFogScatteringDistribution number @Controls the scattering phase function - how much incoming light scatters in various directions. A distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction. In order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0.
---@field public VolumetricFogAlbedo FColor @The height fog particle reflectiveness used by volumetric fog. Water particles in air have an albedo near white, while dust has slightly darker value.
---@field public VolumetricFogEmissive FLinearColor @Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog. In most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting, So stationary skylights are unshadowed and static skylights don't affect volumetric fog at all.
---@field public VolumetricFogExtinctionScale number @Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light.
---@field public VolumetricFogDistance number @Distance over which volumetric fog should be computed, after the start distance.  Larger values extend the effect into the distance but expose under-sampling artifacts in details.
---@field public VolumetricFogStartDistance number @Distance from the camera that the volumetric fog will start, in world units.
---@field public VolumetricFogNearFadeInDistance number @Distance over which volumetric fog will fade in from the start distance.
---@field public VolumetricFogStaticLightingScatteringIntensity number
---@field public bOverrideLightColorsWithFogInscatteringColors boolean @Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color. Make sure your directional light has 'Atmosphere Sun Light' enabled! Enabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting.
---@field public bHoldout boolean @If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature requires activating the project setting(s) "Alpha Output", and "Support Primitive Alpha Holdout" if using the deferred renderer.
---@field public bRenderInMainPass boolean @If true, this component will be rendered in the main pass (basepass, transparency)
---@field public bVisibleInReflectionCaptures boolean @If true, this component will be visible in reflection captures.
---@field public bVisibleInRealTimeSkyCaptures boolean @If true, this component will be visible in real-time sky light reflection captures.
local UExponentialHeightFogComponent = {}

---@param NewValue number
function UExponentialHeightFogComponent:SetVolumetricFogStartDistance(NewValue) end

---@param NewValue number
function UExponentialHeightFogComponent:SetVolumetricFogScatteringDistribution(NewValue) end

---@param NewValue number
function UExponentialHeightFogComponent:SetVolumetricFogNearFadeInDistance(NewValue) end

---@param NewValue number
function UExponentialHeightFogComponent:SetVolumetricFogExtinctionScale(NewValue) end

---@param NewValue FLinearColor
function UExponentialHeightFogComponent:SetVolumetricFogEmissive(NewValue) end

---@param NewValue number
function UExponentialHeightFogComponent:SetVolumetricFogDistance(NewValue) end

---@param NewValue FColor
function UExponentialHeightFogComponent:SetVolumetricFogAlbedo(NewValue) end

---@param bNewValue boolean
function UExponentialHeightFogComponent:SetVolumetricFog(bNewValue) end

---@param Value number
function UExponentialHeightFogComponent:SetStartDistance(Value) end

---@param NewValue FLinearColor
function UExponentialHeightFogComponent:SetSkyAtmosphereAmbientContributionColorScale(NewValue) end

---@param Value number
function UExponentialHeightFogComponent:SetSecondFogHeightOffset(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetSecondFogHeightFalloff(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetSecondFogDensity(Value) end

---@param NewValue FExponentialHeightFogData
function UExponentialHeightFogComponent:SetSecondFogData(NewValue) end

---@param bValue boolean
function UExponentialHeightFogComponent:SetRenderInMainPass(bValue) end

---@param Value number
function UExponentialHeightFogComponent:SetNonDirectionalInscatteringColorDistance(Value) end

---@param Value FLinearColor
function UExponentialHeightFogComponent:SetInscatteringTextureTint(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetInscatteringColorCubemapAngle(Value) end

---@param Value UTextureCube
function UExponentialHeightFogComponent:SetInscatteringColorCubemap(Value) end

---@param bNewHoldout boolean
function UExponentialHeightFogComponent:SetHoldout(bNewHoldout) end

---@param Value number
function UExponentialHeightFogComponent:SetFullyDirectionalInscatteringColorDistance(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetFogMaxOpacity(Value) end

---@param Value FLinearColor
function UExponentialHeightFogComponent:SetFogInscatteringColor(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetFogHeightFalloff(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetFogDensity(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetFogCutoffDistance(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetEndDistance(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetDirectionalInscatteringStartDistance(Value) end

---@param Value number
function UExponentialHeightFogComponent:SetDirectionalInscatteringExponent(Value) end

---@param Value FLinearColor
function UExponentialHeightFogComponent:SetDirectionalInscatteringColor(Value) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UExponentialHeightFogComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UExponentialHeightFogComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UExponentialHeightFogComponent:AddAssetUserDataOfClass(InUserDataClass) end

