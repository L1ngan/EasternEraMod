---@class ULightComponent : ULightComponentBase
---@field public Temperature number @Color temperature in Kelvin of the blackbody illuminant. White (D65) is 6500K.
---@field public MaxDrawDistance number
---@field public MaxDistanceFadeRange number
---@field public bUseTemperature boolean @false: use white (D65) as illuminant.
---@field public PreviewShadowMapChannel integer @Transient shadowmap channel used to preview the results of stationary light shadowmap packing.
---@field public SpecularScale number @Multiplier on specular highlights. Use only with great care! Any value besides 1 is not physical! Can be used to artistically remove highlights mimicking polarizing filters or photo touch up.
---@field public DiffuseScale number @Multiplier on diffuse lighting. Use only with great care! Any value besides 1 is not physical!
---@field public ShadowResolutionScale number @Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster. Setting the scale to zero disables shadow maps, but does not disable, e.g., contact shadows. Note: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'
---@field public ShadowBias number @Controls how accurate self shadowing of whole scene shadows from this light are. At 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts. larger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly. around 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows
---@field public ShadowSlopeBias number @Controls how accurate self shadowing of whole scene shadows from this light are. This works in addition to shadow bias, by increasing the amount of bias depending on the slope of a surface. At 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts. larger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly. around 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows
---@field public ShadowSharpen number @Amount to sharpen shadow filtering
---@field public ContactShadowLength number @Length of screen space ray trace for sharp contact shadows. Zero is disabled.
---@field public ContactShadowLengthInWS boolean @Where Length of screen space ray trace for sharp contact shadows is in world space units or in screen space units.
---@field public ContactShadowCastingIntensity number @Intensity of the shadows cast by primitives with "cast contact shadow" enabled. 0 = no shadow, 1 (default) = fully shadowed.
---@field public ContactShadowNonCastingIntensity number @Intensity of the shadows cast by primitives with "cast contact shadow" disabled. 0 (default) = no shadow, 1 = fully shadowed.
---@field public CastTranslucentShadows boolean @Whether the light is allowed to cast dynamic shadows from translucency.
---@field public bCastShadowsFromCinematicObjectsOnly boolean @Whether the light should only cast shadows from components marked as bCastCinematicShadows. This is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background. Note: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows.
---@field public bForceCachedShadowsForMovablePrimitives boolean @Enables cached shadows for movable primitives for this light even if r.shadow.cachedshadowscastfrommovableprimitives is 0
---@field public bAllowMegaLights boolean @Whether to allow this light to use MegaLights, if it is enabled in the project settings or Post Process Volume. When disabled, the renderer will no longer use stochastic sampling to solve this light's lighting, and will fall back to other shadowing methods, adding significant GPU cost.
---@field public MegaLightsShadowMethod integer @Selects which shadowing method should MegaLights use for this light. RayTracing - Preferred method, which guarantees fixed MegaLights cost and correct area shadows, but is dependent on the BVH representation quality. VirtualShadowMap - Has a significant per light cost, but can cast shadows directly from the Nanite geometry using rasterization.
---@field public LightingChannels FLightingChannels @Channels that this light should affect. These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing. Lighting channels are only supported on translucent materials using forward shading (i.e. when not using the translucency lighting volume).
---@field public ViewLightingChannels FViewLightingChannels @View / light masking support.  Controls which views this light should affect.
---@field public LightFunctionMaterial UMaterialInterface @The light function material to be applied to this light. Note that only non-lightmapped lights (UseDirectLightMap=False) can have a light function. Light functions are supported within VolumetricFog, but only for Directional, Point and Spot lights. Rect lights are not supported.
---@field public StashedLightFunctionMaterial UMaterialInterface @When clearing the light func, e.g. because the light is made static, this field remembers the last value
---@field public LightFunctionScale FVector @Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction.
---@field public IESTexture UTextureLightProfile @IES texture (light profiles from real world measured data)
---@field public bUseIESBrightness boolean @true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied.
---@field public IESBrightnessScale number @Global scale for IES brightness contribution. Only available when "Use IES Brightness" is selected, and a valid IES profile texture is set
---@field public LightFunctionFadeDistance number @Distance at which the light function should be completely faded to DisabledBrightness. This is useful for hiding aliasing from light functions applied in the distance.
---@field public DisabledBrightness number @Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows. This should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1.
---@field public bEnableLightShaftBloom boolean @Whether to render light shaft bloom from this light. For directional lights, the color around the light direction will be blurred radially and added back to the scene. for point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene.
---@field public BloomScale number @Scales the additive color.
---@field public BloomThreshold number @Scene color must be larger than this to create bloom in the light shafts.
---@field public BloomMaxBrightness number @After exposure is applied, scene color brightness larger than BloomMaxBrightness will be rescaled down to BloomMaxBrightness.
---@field public BloomTint FColor @Multiplies against scene color to create the bloom color.
---@field public bUseRayTracedDistanceFieldShadows boolean @Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect. Distance field shadows support area lights so they create soft shadows with sharp contacts. They have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation). These shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun.
---@field public RayStartOffsetDepthScale number @Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away. This can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes.
local ULightComponent = {}

---@param NewIntensity number
function ULightComponent:SetVolumetricScatteringIntensity(NewIntensity) end

---@param bNewValue boolean
function ULightComponent:SetUseTemperature(bNewValue) end

---@param bNewValue boolean
function ULightComponent:SetUseRayTracedDistanceFieldShadows(bNewValue) end

---@param bNewValue boolean
function ULightComponent:SetUseIESBrightness(bNewValue) end

---@param bNewValue boolean
function ULightComponent:SetTransmission(bNewValue) end

---@param NewTemperature number
function ULightComponent:SetTemperature(NewTemperature) end

---@param NewValue number
function ULightComponent:SetSpecularScale(NewValue) end

---@param NewValue number
function ULightComponent:SetShadowSlopeBias(NewValue) end

---@param NewValue number
function ULightComponent:SetShadowBias(NewValue) end

---@param bChannel0 boolean
---@param bChannel1 boolean
---@param bChannel2 boolean
function ULightComponent:SetLightingChannels(bChannel0, bChannel1, bChannel2) end

---@param NewLightFunctionScale FVector
function ULightComponent:SetLightFunctionScale(NewLightFunctionScale) end

---@param NewLightFunctionMaterial UMaterialInterface
function ULightComponent:SetLightFunctionMaterial(NewLightFunctionMaterial) end

---@param NewLightFunctionFadeDistance number
function ULightComponent:SetLightFunctionFadeDistance(NewLightFunctionFadeDistance) end

---@param NewValue number
function ULightComponent:SetLightFunctionDisabledBrightness(NewValue) end

---Set color of the light
---@param NewLightColor FColor
function ULightComponent:SetLightFColor(NewLightColor) end

---Set color of the light
---@param NewLightColor FLinearColor
---@param bSRGB boolean @[opt] 
function ULightComponent:SetLightColor(NewLightColor, bSRGB) end

---Set intensity of the light
---@param NewIntensity number
function ULightComponent:SetIntensity(NewIntensity) end

---@param NewIntensity number
function ULightComponent:SetIndirectLightingIntensity(NewIntensity) end

---@param NewValue UTextureLightProfile
function ULightComponent:SetIESTexture(NewValue) end

---@param NewValue number
function ULightComponent:SetIESBrightnessScale(NewValue) end

---@param bNewValue boolean
function ULightComponent:SetForceCachedShadowsForMovablePrimitives(bNewValue) end

---@param bNewValue boolean
function ULightComponent:SetEnableLightShaftBloom(bNewValue) end

---@param NewValue number
function ULightComponent:SetDiffuseScale(NewValue) end

---@param NewValue FColor
function ULightComponent:SetBloomTint(NewValue) end

---@param NewValue number
function ULightComponent:SetBloomThreshold(NewValue) end

---@param NewValue number
function ULightComponent:SetBloomScale(NewValue) end

---@param NewValue number
function ULightComponent:SetBloomMaxBrightness(NewValue) end

---@param bNewValue boolean
function ULightComponent:SetAffectTranslucentLighting(bNewValue) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULightComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULightComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULightComponent:AddAssetUserDataOfClass(InUserDataClass) end

