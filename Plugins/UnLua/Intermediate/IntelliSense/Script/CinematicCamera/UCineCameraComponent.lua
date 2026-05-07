---A specialized version of a camera component, geared toward cinematic usage.
---@class UCineCameraComponent : UCameraComponent
---@field public Filmback FCameraFilmbackSettings @Controls the filmback of the camera.
---@field public LensSettings FCameraLensSettings @Controls the camera's lens.
---@field public FocusSettings FCameraFocusSettings @Controls the camera's focus.
---@field public CropSettings FPlateCropSettings @Controls the crop settings.
---@field public CurrentFocalLength number @Current focal length of the camera (i.e. controls FoV, zoom)
---@field public CurrentAperture number @Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)
---@field public CurrentFocusDistance number @Read-only. Control this value via FocusSettings.
---@field public bOverride_CustomNearClippingPlane boolean
---@field public CustomNearClippingPlane number @Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane.
---@field public CurrentHorizontalFOV number @Read-only. Control this value with CurrentFocalLength (and filmback settings).
---@field protected FocusPlaneVisualizationMesh UStaticMesh @Mesh used for debug focus plane visualization
---@field protected FocusPlaneVisualizationMaterial UMaterial @Material used for debug focus plane visualization
---@field protected DebugFocusPlaneComponent UStaticMeshComponent @Component for the debug focus plane visualization
---@field protected DebugFocusPlaneMID UMaterialInstanceDynamic @Dynamic material instance for the debug focus plane visualization
---@field protected FilmbackPresets TArray<FNamedFilmbackPreset>
---@field protected LensPresets TArray<FNamedLensPreset>
---@field protected DefaultFilmbackPreset string
---@field protected DefaultLensPresetName string
---@field protected DefaultLensFocalLength number
---@field protected DefaultLensFStop number
local UCineCameraComponent = {}

---@param NewLensSettings FCameraLensSettings
function UCineCameraComponent:SetLensSettings(NewLensSettings) end

---Set the current lens settings by preset name.
---@param InPresetName string
function UCineCameraComponent:SetLensPresetByName(InPresetName) end

---@param NewFocusSettings FCameraFocusSettings
function UCineCameraComponent:SetFocusSettings(NewFocusSettings) end

---Set the current preset settings by preset name.
---@param InPresetName string
function UCineCameraComponent:SetFilmbackPresetByName(InPresetName) end

---@param NewFilmback FCameraFilmbackSettings
function UCineCameraComponent:SetFilmback(NewFilmback) end

---Sets near clipping plane of the cine camera.
---@param NewCustomNearClippingPlane number
function UCineCameraComponent:SetCustomNearClippingPlane(NewCustomNearClippingPlane) end

---@param InFocalLength number
function UCineCameraComponent:SetCurrentFocalLength(InFocalLength) end

---@param NewCurrentAperture number
function UCineCameraComponent:SetCurrentAperture(NewCurrentAperture) end

---@param NewCropSettings FPlateCropSettings
function UCineCameraComponent:SetCropSettings(NewCropSettings) end

---Set the current lens settings by preset name.
---@param InPresetName string
function UCineCameraComponent:SetCropPresetByName(InPresetName) end

---@return number
function UCineCameraComponent:GetVerticalProjectionOffset() end

---Returns the vertical FOV of the camera with current settings.
---@return number
function UCineCameraComponent:GetVerticalFieldOfView() end

---@return TArray_FNamedLensPreset_
function UCineCameraComponent.GetLensPresetsCopy() end

---Returns the lens name of the camera with the current settings.
---@return string
function UCineCameraComponent:GetLensPresetName() end

---@return number
function UCineCameraComponent:GetHorizontalProjectionOffset() end

---Returns the horizonal FOV of the camera with current settings.
---@return number
function UCineCameraComponent:GetHorizontalFieldOfView() end

---@return TArray_FNamedFilmbackPreset_
function UCineCameraComponent.GetFilmbackPresetsCopy() end

---Returns the filmback name of the camera with the current settings.
---@return string
function UCineCameraComponent:GetFilmbackPresetName() end

---@return string
function UCineCameraComponent:GetDefaultFilmbackPresetName() end

---Returns the lens name of the camera with the current settings.
---@return string
function UCineCameraComponent:GetCropPresetName() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCineCameraComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCineCameraComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCineCameraComponent:AddAssetUserDataOfClass(InUserDataClass) end

