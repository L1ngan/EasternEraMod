---A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume.
---@class UDirectionalLightComponent : ULightComponent
---@field public ShadowCascadeBiasDistribution number @Controls the depth bias scaling across cascades. This allows to mitigage the shadow acne difference on shadow cascades transition. A value of 1 scales shadow bias based on each cascade size (Default). A value of 0 scales shadow bias uniformly accross all cacascade.
---@field public bEnableLightShaftOcclusion boolean @Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light.
---@field public OcclusionMaskDarkness number @Controls how dark the occlusion masking is, a value of 1 results in no darkening term.
---@field public OcclusionDepthRange number @Everything closer to the camera than this distance will occlude light shafts.
---@field public LightShaftOverrideDirection FVector @Can be used to make light shafts come from somewhere other than the light's actual direction. This will only be used when non-zero.  It does not have to be normalized.
---@field public DynamicShadowDistanceMovableLight number @How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera. A value of 0 disables the dynamic shadow.
---@field public DynamicShadowDistanceStationaryLight number @How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera. A value of 0 disables the dynamic shadow.
---@field public DynamicShadowCascades integer @Number of cascades to split the view frustum into for the whole scene dynamic shadow. More cascades result in better shadow resolution, but adds significant rendering cost.
---@field public CascadeDistributionExponent number @Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent). An exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution.
---@field public CascadeTransitionFraction number @Proportion of the fade region between cascades. Pixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels. A value of zero eliminates the fade region, creating hard transitions. Higher values increase the size of the fade region, creating a more gradual transition between cascades. The value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap). Ideal values are the smallest possible which still hide the transition. An increased fade region size causes an increase in shadow rendering cost.
---@field public ShadowDistanceFadeoutFraction number @Controls the size of the fade out region at the far extent of the dynamic shadow's influence. This is specified as a fraction of DynamicShadowDistance.
---@field public bUseInsetShadowsForMovableObjects boolean @Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled. This allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small. If DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off. Disabling this can reduce shadowing cost significantly with many movable objects.
---@field public FarShadowCascadeCount integer @0: no Far Shadow Cascades, otherwise the number of cascades between DynamicShadowDistance and FarShadowDistance that are covered by Far Shadow Cascades.
---@field public FarShadowDistance number @Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance.
---@field public DistanceFieldShadowDistance number @Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance.
---@field public ForwardShadingPriority integer @Forward lighting priority for the single directional light that will be used for forward shading, translucent, single layer water and volumetric fog. When two lights have equal priorities, the selection will be based on their overall brightness as a fallback.
---@field public LightSourceAngle number @Angle subtended by light source in degrees (also known as angular diameter). Defaults to 0.5357 which is the angle for our sun.
---@field public LightSourceSoftAngle number @Angle subtended by soft light source in degrees.
---@field public ShadowSourceAngleFactor number @Shadow source angle factor, relative to the light source angle. Defaults to 1.0 to coincide with light source angle.
---@field public TraceDistance number @Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost.
---@field public bAtmosphereSunLight boolean @Whether the directional light can interact with the atmosphere, cloud and generate a visual disk. All of which compose the visual sky.
---@field public AtmosphereSunLightIndex integer @Two atmosphere lights are supported. For instance: a sun and a moon, or two suns.
---@field public AtmosphereSunDiskColorScale FLinearColor @A color multiplied with the sun disk luminance.
---@field public bPerPixelAtmosphereTransmittance boolean @Whether to apply atmosphere transmittance per pixel on opaque meshes, instead of using the light global transmittance. Note: VolumetricCloud per pixel transmittance option is selectable on the VolumetricCloud component itself.
---@field public bCastShadowsOnClouds boolean @Whether the light should cast any shadows from opaque meshes onto clouds. This is disabled when 'Atmosphere Sun Light Index' is set to 1.
---@field public bCastShadowsOnAtmosphere boolean @Whether the light should cast any shadows from opaque meshes onto the atmosphere.
---@field public bCastCloudShadows boolean @Whether the light should cast any shadows from clouds onto the atmosphere and other scene elements.
---@field public CloudShadowStrength number @The overall strength of the cloud shadow, higher value will block more light.
---@field public CloudShadowOnAtmosphereStrength number @The strength of the shadow on atmosphere. Disabled when 0.
---@field public CloudShadowOnSurfaceStrength number @The strength of the shadow on opaque and transparent meshes. Disabled when 0.
---@field public CloudShadowDepthBias number @The bias applied to the shadow front depth of the volumetric cloud shadow map.
---@field public CloudShadowExtent number @The world space radius of the cloud shadow map around the camera in kilometers.
---@field public CloudShadowMapResolutionScale number @Scale the cloud shadow map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.ShadowMap.MaxResolution'.
---@field public CloudShadowRaySampleCountScale number @Scale the shadow map tracing sample count. The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ShadowMap.RaySampleMaxCount'.
---@field public CloudScatteredLuminanceScale FLinearColor @Scales the lights contribution when scattered in cloud participating media. This can help counter balance the fact that our multiple scattering solution is only an approximation.
---@field public LightmassSettings FLightmassDirectionalLightSettings @The Lightmass settings for this object.
---@field public bCastModulatedShadows boolean @Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True.
---@field public ModulatedShadowColor FColor @Color to modulate against the scene color when rendering modulated shadows. (mobile only)
---@field public ShadowAmount number @Control the amount of shadow occlusion. A value of 0 means no occlusion, thus no shadow.
local UDirectionalLightComponent = {}

---@param NewValue number
function UDirectionalLightComponent:SetShadowSourceAngleFactor(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetShadowDistanceFadeoutFraction(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetShadowCascadeBiasDistribution(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetShadowAmount(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetOcclusionMaskDarkness(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetOcclusionDepthRange(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetLightSourceSoftAngle(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetLightSourceAngle(NewValue) end

---@param NewValue FVector
function UDirectionalLightComponent:SetLightShaftOverrideDirection(NewValue) end

---@param NewValue integer
function UDirectionalLightComponent:SetForwardShadingPriority(NewValue) end

---@param bNewValue boolean
function UDirectionalLightComponent:SetEnableLightShaftOcclusion(bNewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetDynamicShadowDistanceStationaryLight(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetDynamicShadowDistanceMovableLight(NewValue) end

---@param NewValue integer
function UDirectionalLightComponent:SetDynamicShadowCascades(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetCascadeTransitionFraction(NewValue) end

---@param NewValue number
function UDirectionalLightComponent:SetCascadeDistributionExponent(NewValue) end

---@param NewValue integer
function UDirectionalLightComponent:SetAtmosphereSunLightIndex(NewValue) end

---@param bNewValue boolean
function UDirectionalLightComponent:SetAtmosphereSunLight(bNewValue) end

---@param NewValue FLinearColor
function UDirectionalLightComponent:SetAtmosphereSunDiskColorScale(NewValue) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDirectionalLightComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDirectionalLightComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDirectionalLightComponent:AddAssetUserDataOfClass(InUserDataClass) end

