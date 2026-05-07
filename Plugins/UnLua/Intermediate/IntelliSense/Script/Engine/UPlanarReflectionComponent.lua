---UPlanarReflectionComponent
---@class UPlanarReflectionComponent : USceneCaptureComponent
---@field public PreviewBox UBoxComponent
---@field public NormalDistortionStrength number @Controls the strength of normals when distorting the planar reflection.
---@field public PrefilterRoughness number @The roughness value to prefilter the planar reflection texture with, useful for hiding low resolution.  Larger values have larger GPU cost.
---@field public PrefilterRoughnessDistance number @The distance at which the prefilter roughness value will be achieved.
---@field public ScreenPercentage integer @Downsample percent, can be used to reduce GPU time rendering the planar reflection.
---@field public ExtraFOV number @Additional FOV used when rendering to the reflection texture. This is useful when normal distortion is causing reads outside the reflection texture. Larger values increase rendering thread and GPU cost, as more objects and triangles have to be rendered into the planar reflection.
---@field public DistanceFromPlaneFadeoutStart number @Receiving pixels at this distance from the reflection plane will begin to fade out the planar reflection.
---@field public DistanceFromPlaneFadeoutEnd number @Receiving pixels at this distance from the reflection plane will have completely faded out the planar reflection.
---@field public AngleFromPlaneFadeStart number @Receiving pixels whose normal is at this angle from the reflection plane will begin to fade out the planar reflection.
---@field public AngleFromPlaneFadeEnd number @Receiving pixels whose normal is at this angle from the reflection plane will have completely faded out the planar reflection.
---@field public bShowPreviewPlane boolean
---@field public bRenderSceneTwoSided boolean @Whether to render the scene as two-sided, which can be useful to hide artifacts where normal distortion would read 'under' an object that has been clipped by the reflection plane. With this setting enabled, the backfaces of a mesh would be displayed in the clipped region instead of the background which is potentially a bright sky. Be sure to add the water plane to HiddenActors if enabling this, as the water plane will now block the reflection.
---@field protected CaptureMaterial UMaterial @The material to use on ProxyMeshComponent
local UPlanarReflectionComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlanarReflectionComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPlanarReflectionComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlanarReflectionComponent:AddAssetUserDataOfClass(InUserDataClass) end

