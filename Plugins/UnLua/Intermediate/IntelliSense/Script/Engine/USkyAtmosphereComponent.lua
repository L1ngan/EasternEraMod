---A component that represents a planet atmosphere material and simulates sky and light scattering within it.
---@class USkyAtmosphereComponent : USceneComponent
---@field public TransformMode ESkyAtmosphereTransformMode @The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0.
---@field public BottomRadius number @The radius in kilometers from the center of the planet to the ground level.
---@field public GroundAlbedo FColor @The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0.
---@field public AtmosphereHeight number @The height of the atmosphere layer above the ground in kilometers.
---@field public MultiScatteringFactor number @Factor applied to multiple scattering only (after the sun light has bounced around in the atmosphere at least once). Multiple scattering is evaluated using a dual scattering approach. A value of 2 is recommended to better represent default atmosphere when r.SkyAtmosphere.MultiScatteringLUT.HighQuality=0.
---@field public TraceSampleCountScale number @Scale the atmosphere tracing sample count. Quality level scalability The sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 0. The sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.FastSkyLUT.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 1. The sample count is still clamped for aerial perspective according to  'r.SkyAtmosphere.AerialPerspectiveLUT.SampleCountMaxPerSlice'.
---@field public RayleighScatteringScale number @Rayleigh scattering coefficient scale.
---@field public RayleighScattering FLinearColor @The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer.
---@field public RayleighExponentialDistribution number @The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%.
---@field public MieScatteringScale number @Mie scattering coefficient scale.
---@field public MieScattering FLinearColor @The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more.
---@field public MieAbsorptionScale number @Mie absorption coefficient scale.
---@field public MieAbsorption FLinearColor @The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more.
---@field public MieAnisotropy number @A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources.
---@field public MieExponentialDistribution number @The altitude in kilometer at which Mie effects are reduced to 40%.
---@field public OtherAbsorptionScale number @Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere.
---@field public OtherAbsorption FLinearColor @Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere.
---@field public OtherTentDistribution FTentDistribution @Represents the altitude based tent distribution of absorption particles in the atmosphere.
---@field public SkyLuminanceFactor FLinearColor @Scales the luminance of pixels representing the sky. This will impact the captured sky light.
---@field public SkyAndAerialPerspectiveLuminanceFactor FLinearColor @Scales the luminance of pixels representing the sky and the aerial perspective. This will impact the captured sky light.
---@field public AerialPespectiveViewDistanceScale number @Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent).
---@field public HeightFogContribution number @Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true.
---@field public TransmittanceMinLightElevationAngle number @The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective.
---@field public AerialPerspectiveStartDepth number @The distance (kilometers) at which we start evaluating the aerial perspective. Having the aerial perspective starts away from the camera can help with performance: pixels not affected by the aerial perspective will have their computation skipped using early depth test.
---@field public bHoldout boolean @If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature requires activating the project setting(s) "Alpha Output", and "Support Primitive Alpha Holdout" if using the deferred renderer.
---@field public bRenderInMainPass boolean @If true, this component will be rendered in the main pass (basepass, transparency)
---@field private bStaticLightingBuiltGUID FGuid @GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels. The GUID changes whenever the atmospheric properties change, e.g. LUTs.
local USkyAtmosphereComponent = {}

---@param NewValue number
function USkyAtmosphereComponent:SetTransmittanceMinLightElevationAngle(NewValue) end

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetSkyLuminanceFactor(NewValue) end

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetSkyAndAerialPerspectiveLuminanceFactor(NewValue) end

---@param bValue boolean
function USkyAtmosphereComponent:SetRenderInMainPass(bValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetRayleighScatteringScale(NewValue) end

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetRayleighScattering(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetRayleighExponentialDistribution(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetOtherAbsorptionScale(NewValue) end

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetOtherAbsorption(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetMultiScatteringFactor(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetMieScatteringScale(NewValue) end

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetMieScattering(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetMieExponentialDistribution(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetMieAnisotropy(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetMieAbsorptionScale(NewValue) end

---@param NewValue FLinearColor
function USkyAtmosphereComponent:SetMieAbsorption(NewValue) end

---@param bNewHoldout boolean
function USkyAtmosphereComponent:SetHoldout(bNewHoldout) end

---@param NewValue number
function USkyAtmosphereComponent:SetHeightFogContribution(NewValue) end

---@param NewValue FColor
function USkyAtmosphereComponent:SetGroundAlbedo(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetBottomRadius(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetAtmosphereHeight(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetAerialPespectiveViewDistanceScale(NewValue) end

---@param NewValue number
function USkyAtmosphereComponent:SetAerialPerspectiveStartDepth(NewValue) end

---@param AtmosphereLightIndex integer
function USkyAtmosphereComponent:ResetAtmosphereLightDirectionOverride(AtmosphereLightIndex) end

---@param AtmosphereLightIndex integer
---@param LightDirection FVector
function USkyAtmosphereComponent:OverrideAtmosphereLightDirection(AtmosphereLightIndex, LightDirection) end

---@param AtmosphereLightIndex integer
---@return boolean
function USkyAtmosphereComponent:IsAtmosphereLightDirectionOverriden(AtmosphereLightIndex) end

---@param AtmosphereLightIndex integer
---@return FVector
function USkyAtmosphereComponent:GetOverridenAtmosphereLightDirection(AtmosphereLightIndex) end

---This function can be used for instance in order to evaluate a directional atmospheric light outer space illuminance for a desired illuminance on ground given a direction.
---This is given for the position at the top of the virtual planet. Plus the output outer space illuminance into the light intensity.
---@param LightDirection FVector @[opt] 
---@param IlluminanceOnGround number @[opt] 
---@return number
function USkyAtmosphereComponent:GetAtmosphericLightToMatchIlluminanceOnGround(LightDirection, IlluminanceOnGround) end

---@param DirectionalLight UDirectionalLightComponent
---@return FLinearColor
function USkyAtmosphereComponent:GetAtmosphereTransmitanceOnGroundAtPlanetTop(DirectionalLight) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkyAtmosphereComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USkyAtmosphereComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkyAtmosphereComponent:AddAssetUserDataOfClass(InUserDataClass) end

