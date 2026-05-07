---@class USkyLightComponent : ULightComponentBase
---@field public bRealTimeCapture boolean @When enabled, the sky will be captured and convolved to achieve dynamic diffuse and specular environment lighting. SkyAtmosphere, VolumetricCloud Components as well as sky domes with Sky materials are taken into account.
---@field public SourceType integer @Indicates where to get the light contribution from.
---@field public Cubemap UTextureCube @Cubemap to use for sky lighting if SourceType is set to SLS_SpecifiedCubemap.
---@field public SourceCubemapAngle number @Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap.
---@field public CubemapResolution integer @Maximum resolution for the very top processed cubemap mip. Must be a power of 2.
---@field public SkyDistanceThreshold number @Distance from the sky light at which any geometry should be treated as part of the sky. This is also used by reflection captures, so update reflection captures to see the impact.
---@field public bCaptureEmissiveOnly boolean @Only capture emissive materials. Skips all lighting making the capture cheaper. Recomended when using CaptureEveryFrame
---@field public bLowerHemisphereIsBlack boolean @Whether all distant lighting from the lower hemisphere should be set to LowerHemisphereColor. Enabling this is accurate when lighting a scene on a planet where the ground blocks the sky, However disabling it can be useful to approximate skylight bounce lighting (eg Movable light).
---@field public LowerHemisphereColor FLinearColor
---@field public OcclusionMaxDistance number @Max distance that the occlusion of one point will affect another. Higher values increase the cost of Distance Field AO exponentially.
---@field public Contrast number @Contrast S-curve applied to the computed AO.  A value of 0 means no contrast increase, 1 is a significant contrast increase.
---@field public OcclusionExponent number @Exponent applied to the computed AO.  Values lower than 1 brighten occlusion overall without losing contact shadows.
---@field public MinOcclusion number @Controls the darkest that a fully occluded area can get.  This tends to destroy contact shadows, use Contrast or OcclusionExponent instead.
---@field public OcclusionTint FColor @Tint color on occluded areas, artistic control.
---@field public bCloudAmbientOcclusion boolean @Whether the cloud should occlude sky contribution within the atmosphere (progressively fading multiple scattering out) or not.
---@field public CloudAmbientOcclusionStrength number @The strength of the ambient occlusion, higher value will block more light.
---@field public CloudAmbientOcclusionExtent number @The world space radius of the cloud ambient occlusion map around the camera in kilometers.
---@field public CloudAmbientOcclusionMapResolutionScale number @Scale the cloud ambient occlusion map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.SkyAO.MaxResolution'.
---@field public CloudAmbientOcclusionApertureScale number @Controls the cone aperture angle over which the sky occlusion due to volumetric clouds is evaluated. A value of 1 means `take into account the entire hemisphere` resulting in blurry occlusion, while a value of 0 means `take into account a single up occlusion direction up` resulting in sharp occlusion.
---@field public OcclusionCombineMode integer @Controls how occlusion from Distance Field Ambient Occlusion is combined with Screen Space Ambient Occlusion.
---@field protected BlendDestinationCubemap UTextureCube
local USkyLightComponent = {}

---@param NewIntensity number
function USkyLightComponent:SetVolumetricScatteringIntensity(NewIntensity) end

---Sets the angle of the cubemap used when SourceType is set to SpecifiedCubemap and it is non static. It will cause the skylight to update on the next tick.
---@param NewValue number
function USkyLightComponent:SetSourceCubemapAngle(NewValue) end

---@param bInRealTimeCapture boolean
function USkyLightComponent:SetRealTimeCapture(bInRealTimeCapture) end

---@param InTint FColor
function USkyLightComponent:SetOcclusionTint(InTint) end

---@param InOcclusionExponent number
function USkyLightComponent:SetOcclusionExponent(InOcclusionExponent) end

---@param InOcclusionContrast number
function USkyLightComponent:SetOcclusionContrast(InOcclusionContrast) end

---@param InMinOcclusion number
function USkyLightComponent:SetMinOcclusion(InMinOcclusion) end

---@param InLowerHemisphereColor FLinearColor
function USkyLightComponent:SetLowerHemisphereColor(InLowerHemisphereColor) end

---Set color of the light
---@param NewLightColor FLinearColor
function USkyLightComponent:SetLightColor(NewLightColor) end

---@param NewIntensity number
function USkyLightComponent:SetIntensity(NewIntensity) end

---@param NewIntensity number
function USkyLightComponent:SetIndirectLightingIntensity(NewIntensity) end

---Creates sky lighting from a blend between two cubemaps, which is only valid when SourceType is set to SpecifiedCubemap.
---This can be used to seamlessly transition sky lighting between different times of day.
---The caller should continue to update the blend until BlendFraction is 0 or 1 to reduce rendering cost.
---The caller is responsible for avoiding pops due to changing the source or destination.
---@param SourceCubemap UTextureCube
---@param DestinationCubemap UTextureCube
---@param InBlendFraction number
function USkyLightComponent:SetCubemapBlend(SourceCubemap, DestinationCubemap, InBlendFraction) end

---Sets the cubemap used when SourceType is set to SpecifiedCubemap, and causes a skylight update on the next tick.
---@param NewCubemap UTextureCube
function USkyLightComponent:SetCubemap(NewCubemap) end

---Recaptures the scene for the skylight.
---This is useful for making sure the sky light is up to date after changing something in the world that it would capture.
---Warning: this is very costly and will definitely cause a hitch.
function USkyLightComponent:RecaptureSky() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkyLightComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USkyLightComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkyLightComponent:AddAssetUserDataOfClass(InUserDataClass) end

