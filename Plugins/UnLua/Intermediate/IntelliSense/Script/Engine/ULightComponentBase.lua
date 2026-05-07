---@class ULightComponentBase : USceneComponent
---@field public OriginalLightGuid FGuid @GUID used to associate a light component with precomputed shadowing information across levels. The GUID changes whenever the light position changes.
---@field public LightGuid FGuid
---@field public Intensity number @Total energy that the light emits.
---@field public LightColor FColor @Filter color of the light. Note that this can change the light's effective intensity.
---@field public bAffectsWorld boolean @Whether the light can affect the world, or whether it is disabled. A disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed. Setting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments.
---@field public CastShadows boolean @Whether the light should cast any shadows.
---@field public CastStaticShadows boolean @Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True.
---@field public CastDynamicShadows boolean @Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True.
---@field public bAffectTranslucentLighting boolean @Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights.
---@field public bTransmission boolean @Whether light from this light transmits through surfaces with subsurface scattering profiles. Requires light to be movable.
---@field public bCastVolumetricShadow boolean @Whether the light shadows volumetric fog.  Disabling this can save GPU time.
---@field public bCastDeepShadow boolean @Whether the light should cast high quality hair-strands self-shadowing. When this option is enabled, an extra GPU cost for this light.
---@field public CastRaytracedShadow integer
---@field public bAffectReflection boolean @Whether the light affects objects in reflections, when ray-traced reflection is enabled.
---@field public bAffectGlobalIllumination boolean @Whether the light affects global illumination, when ray-traced global illumination is enabled.
---@field public DeepShadowLayerDistribution number @Change the deep shadow layers distribution 0:linear distribution (uniform layer distribution), 1:exponential (more details on near small details).
---@field public IndirectLightingIntensity number @Scales the indirect lighting contribution from this light. A value of 0 disables any GI from this light. Default is 1.
---@field public VolumetricScatteringIntensity number @Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor.
---@field public SamplesPerPixel integer @Samples per pixel for ray tracing
---@field public StaticEditorTexture UTexture2D @Sprite for static light in the editor.
---@field public StaticEditorTextureScale number @Sprite scaling for static light in the editor.
---@field public DynamicEditorTexture UTexture2D @Sprite for dynamic light in the editor.
---@field public DynamicEditorTextureScale number @Sprite scaling for dynamic light in the editor.
local ULightComponentBase = {}

---@param NewValue integer
function ULightComponentBase:SetSamplesPerPixel(NewValue) end

---@param bNewValue boolean
function ULightComponentBase:SetCastVolumetricShadow(bNewValue) end

---Sets whether this light casts shadows
---@param bNewValue boolean
function ULightComponentBase:SetCastShadows(bNewValue) end

---@param bNewValue integer
function ULightComponentBase:SetCastRaytracedShadows(bNewValue) end

---@param bNewValue boolean
function ULightComponentBase:SetCastRaytracedShadow(bNewValue) end

---@param bNewValue boolean
function ULightComponentBase:SetCastDeepShadow(bNewValue) end

---@param bNewValue boolean
function ULightComponentBase:SetAffectReflection(bNewValue) end

---@param bNewValue boolean
function ULightComponentBase:SetAffectGlobalIllumination(bNewValue) end

---Gets the light color as a linear color
---@return FLinearColor
function ULightComponentBase:GetLightColor() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULightComponentBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULightComponentBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULightComponentBase:AddAssetUserDataOfClass(InUserDataClass) end

