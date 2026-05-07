---A component that represents a participating media material around a planet, e.g. clouds.
---@class UVolumetricCloudComponent : USceneComponent
---@field public LayerBottomAltitude number @The altitude at which the cloud layer starts. (kilometers above the ground)
---@field public LayerHeight number @The height of the the cloud layer. (kilometers above the layer bottom altitude)
---@field public TracingStartMaxDistance number @The maximum distance of the volumetric surface, i.e. cloud layer upper and lower bound, before which we will accept to start tracing. (kilometers)
---@field public TracingStartDistanceFromCamera number @The distance from which the tracing will start. This is useful when the camera for instance is inside the layer of cloud. (kilometers)
---@field public TracingMaxDistanceMode EVolumetricCloudTracingMaxDistanceMode @Mode to select how the tracing max distance should be interpreted. DistanceFromPointOfView is useful to avoid the top of the cloud layer to be clipped when TracingMaxDistance is shorten for performance.
---@field public TracingMaxDistance number @The maximum distance that will be traced inside the cloud layer. (kilometers)
---@field public PlanetRadius number @The planet radius used when there is not SkyAtmosphere component present in the scene.
---@field public GroundAlbedo FColor @The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere. This is only used by the cloud material when the 'Volumetric Advanced' node have GroundContribution enabled.
---@field public Material TSoftObjectPtr<UMaterialInterface> @The material describing the cloud volume. It must be a Volume domain material.
---@field public bUsePerSampleAtmosphericLightTransmittance boolean @Whether to apply atmosphere transmittance per sample, instead of using the light global transmittance.
---@field public SkyLightCloudBottomOcclusion number @Occlude the sky light contribution at the bottom of the cloud layer. This is a fast approximation to sky lighting being occluded by cloud without having to trace rays or sample AO texture. Ignored if the cloud material explicitely sets the ambient occlusion value.
---@field public ViewSampleCountScale number @Scale the tracing sample count in primary views. Quality level scalability CVARs affect the maximum range. The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ViewRaySampleCountMax'.
---@field public ReflectionViewSampleCountScaleValue number @Scale the tracing sample count in reflection views. Quality level scalability CVARs affect the maximum range. The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ReflectionRaySampleMaxCount'.
---@field public ShadowViewSampleCountScale number @Scale the shadow tracing sample count in primary views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range. The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ViewRaySampleMaxCount'.
---@field public ShadowReflectionViewSampleCountScaleValue number @Scale the shadow tracing sample count in reflection views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range. The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ReflectionRaySampleMaxCount'.
---@field public ShadowTracingDistance number @The shadow tracing distance in kilometers, only used with Advanced Output ray marched shadows.
---@field public StopTracingTransmittanceThreshold number @When the mean transmittance is below this threshold, we stop tracing. This is a good way to reduce the ray marched sample count, and thus to increase performance.
---@field public AerialPespectiveRayleighScatteringStartDistance number @Specify the aerial perspective start distance on cloud for Rayleigh scattering only. (kilometers)
---@field public AerialPespectiveRayleighScatteringFadeDistance number @Specify the distance over which the Rayleigh scattering will linearly ramp up to full effect. (kilometers)
---@field public AerialPespectiveMieScatteringStartDistance number @Specify the aerial perspective start distance on cloud for Mie scattering only. (kilometers)
---@field public AerialPespectiveMieScatteringFadeDistance number @Specify the distance over which the Rayleigh scattering will linearly ramp up to full effect. (kilometers)
---@field public bHoldout boolean @If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature requires activating the project setting(s) "Alpha Output", and "Support Primitive Alpha Holdout" if using the deferred renderer.
---@field public bRenderInMainPass boolean @If true, this component will be rendered in the main pass (basepass, transparency)
---@field public bVisibleInRealTimeSkyCaptures boolean @If true, this component will be visible in real-time sky light reflection captures.
---@field private MaterialLifetimePtr UMaterialInterface @The material is assigned to a regular pointer so that the garbage collector to not get ride of it.
local UVolumetricCloudComponent = {}

---@param bValue boolean
function UVolumetricCloudComponent:SetVisibleInRealTimeSkyCaptures(bValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetViewSampleCountScale(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetTracingStartMaxDistance(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetTracingStartDistanceFromCamera(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetTracingMaxDistance(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetStopTracingTransmittanceThreshold(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetSkyLightCloudBottomOcclusion(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetShadowViewSampleCountScale(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetShadowTracingDistance(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetShadowReflectionViewSampleCountScale(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetShadowReflectionSampleCountScale(NewValue) end

---@param bValue boolean
function UVolumetricCloudComponent:SetRenderInMainPass(bValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetReflectionViewSampleCountScale(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetReflectionSampleCountScale(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetPlanetRadius(NewValue) end

---@param NewValue UMaterialInterface
function UVolumetricCloudComponent:SetMaterial(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetLayerHeight(NewValue) end

---@param NewValue number
function UVolumetricCloudComponent:SetLayerBottomAltitude(NewValue) end

---@param bNewHoldout boolean
function UVolumetricCloudComponent:SetHoldout(bNewHoldout) end

---@param NewValue FColor
function UVolumetricCloudComponent:SetGroundAlbedo(NewValue) end

---@param NewValue boolean
function UVolumetricCloudComponent:SetbUsePerSampleAtmosphericLightTransmittance(NewValue) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVolumetricCloudComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UVolumetricCloudComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UVolumetricCloudComponent:AddAssetUserDataOfClass(InUserDataClass) end

