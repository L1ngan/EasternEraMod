---Asset user data that can be used on Camera Actors to manage lens distortion state and utilities
---@class ULensDistortionModelHandlerBase : UObject
---@field protected LensModelClass TSubclassOf<ULensModel> @Lens Model describing how to interpret the distortion parameters
---@field protected DistortionPostProcessMID UMaterialInstanceDynamic @Dynamically created post-process material instance for the currently specified lens model
---@field protected CurrentState FLensDistortionState @Current state as set by the most recent call to Update()
---@field protected CameraFilmback FCameraFilmbackSettings @Filmback settings of the camera that is being used for distortion
---@field protected DisplayName string @Display name, used to identify handler in-editor details panels
---@field protected OverscanFactor number @Computed overscan factor needed to scale the camera's FOV (read-only)
---@field protected UndistortionDisplacementMapMID UMaterialInstanceDynamic @MID used to draw the undistortion displacement map
---@field protected DistortionDisplacementMapMID UMaterialInstanceDynamic @MID used to draw the distortion displacement map
---@field protected UndistortionDisplacementMapRT UTextureRenderTarget2D @UV displacement map used to undistort a distorted image
---@field protected DistortionDisplacementMapRT UTextureRenderTarget2D @UV displacement map used to distort an undistorted image
---@field protected DistortionProducerID FGuid @UObject that is producing the distortion state for this handler
local ULensDistortionModelHandlerBase = {}

---Update the lens distortion state, recompute the overscan factor, and set all material parameters
---@param InNewState FLensDistortionState
function ULensDistortionModelHandlerBase:SetDistortionState(InNewState) end

---Returns true if the input model is supported by this model handler, false otherwise.
---@param ModelToSupport TSubclassOf_ULensModel_
---@return boolean
function ULensDistortionModelHandlerBase:IsModelSupported(ModelToSupport) end

---Get the UV displacement map used to undistort a distorted image
---@return UTextureRenderTarget2D
function ULensDistortionModelHandlerBase:GetUndistortionDisplacementMap() end

---Get the UV displacement map used to distort an undistorted image
---@return UTextureRenderTarget2D
function ULensDistortionModelHandlerBase:GetDistortionDisplacementMap() end

