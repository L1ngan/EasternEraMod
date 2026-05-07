---Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.
---The default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings.
---@class UCameraComponent : USceneComponent
---@field public FieldOfView number @The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode) If the aspect ratio axis constraint (from ULocalPlayer, ALevelSequenceActor, etc.) is set to maintain vertical FOV, the AspectRatio property will be used to convert this property's value to a vertical FOV.
---@field public FirstPersonFieldOfView number @The horizontal field of view (in degrees) used for primitives tagged as "IsFirstPerson".
---@field public FirstPersonScale number @The scale to apply to primitives tagged as "IsFirstPerson". This is used to scale down primitives towards the camera such that they are small enough not to intersect with the scene.
---@field public OrthoWidth number @The desired width (in world units) of the orthographic view (ignored in Perspective mode)
---@field public bAutoCalculateOrthoPlanes boolean @Automatically determine a min/max Near/Far clip plane position depending on OrthoWidth value
---@field public AutoPlaneShift number @Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane
---@field public OrthoNearClipPlane number @The near plane distance of the orthographic view (in world units)
---@field public OrthoFarClipPlane number @The far plane distance of the orthographic view (in world units)
---@field public bUpdateOrthoPlanes boolean @Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting
---@field public bUseCameraHeightAsViewTarget boolean @If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present)
---@field public AspectRatio number @Aspect Ratio (Width/Height)
---@field public AspectRatioAxisConstraint integer @Override for the default aspect ratio axis constraint defined on the local player
---@field public bConstrainAspectRatio boolean @If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested.
---@field public bOverrideAspectRatioAxisConstraint boolean @Whether to override the default aspect ratio axis constraint defined on the local player
---@field public bUseFieldOfViewForLOD boolean @If true, account for the field of view angle when computing which level of detail to use for meshes.
---@field public Overscan number @Amount to increase the view frustum by, from 0.0 for no increase to 1.0 for 100% increase
---@field public AsymmetricOverscan FVector4f @Experimental: Amount to increase each side of the view frustum by, from 0.0 for no increase to 1.0 for 100% increase. By convention, X is the left overscan, Y is the right overscan, Z is the top overscan, and W is the bottom overscan. Stacks with uniform Overscan. Not currently exposed to the editor or blueprints, intended for internal use for now
---@field public bScaleResolutionWithOverscan boolean @Indicates that the resolution should be scaled by the overscan amount so that the original view frustum remains the same resolution. Note that when enabled, increasing overscan will result in increased rendering workload, potentially decreasing performance as resolution increases
---@field public bCropOverscan boolean @Indicates that the overscanned pixels should be cropped at the end of the rendering pipeline, allowing the overscanned pixels to be used in post process effects that need extra pixels beyond the view frustum (e.g. lens distortion) without having to render those pixels to the screen. When bScaleResolutionWithOverscan is enabled, the cropped image will have the same resolution as the original non-overscanned image, but when disabled, the cropped image will be a lower resolution.
---@field public bDrawFrustumAllowed boolean @The Frustum visibility flag for draw frustum component initialization
---@field public bCameraMeshHiddenInGame boolean @If the camera mesh is visible in game. Only relevant when running editor builds.
---@field public bLockToHmd boolean @True if the camera's orientation and position should be locked to the HMD
---@field public bUsePawnControlRotation boolean @If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?
---@field public bEnableFirstPersonFieldOfView boolean @True if the first person field of view should be used for primitives tagged as "IsFirstPerson".
---@field public bEnableFirstPersonScale boolean @True if the first person scale should be used for primitives tagged as "IsFirstPerson".
---@field public ProjectionMode integer @The type of camera
---@field protected CameraMesh UStaticMesh
---@field public PostProcessBlendWeight number @Indicates if PostProcessSettings should be used when using this Camera to view through.
---@field public PostProcessSettings FPostProcessSettings @Post process settings to use for this camera. Don't forget to check the properties you want to override
local UCameraComponent = {}

---@param bInUseFieldOfViewForLOD boolean
function UCameraComponent:SetUseFieldOfViewForLOD(bInUseFieldOfViewForLOD) end

---@param bInUseCameraHeightAsViewTarget boolean
function UCameraComponent:SetUseCameraHeightAsViewTarget(bInUseCameraHeightAsViewTarget) end

---@param bInUpdateOrthoPlanes boolean
function UCameraComponent:SetUpdateOrthoPlanes(bInUpdateOrthoPlanes) end

---Sets whether to scale the resolution by the amount of overscan so that the original view frustum remains the same resolution.
---Note that when enabled, increasing overscan will result in increased rendering workload, potentially decreasing performance as resolution increases
---@param bInScaleResolutionWithOverscan boolean
function UCameraComponent:SetScaleResolutionWithOverscan(bInScaleResolutionWithOverscan) end

---@param InProjectionMode integer
function UCameraComponent:SetProjectionMode(InProjectionMode) end

---@param InPostProcessBlendWeight number
function UCameraComponent:SetPostProcessBlendWeight(InPostProcessBlendWeight) end

---@param InOverscan number
function UCameraComponent:SetOverscan(InOverscan) end

---@param InOrthoWidth number
function UCameraComponent:SetOrthoWidth(InOrthoWidth) end

---@param InOrthoNearClipPlane number
function UCameraComponent:SetOrthoNearClipPlane(InOrthoNearClipPlane) end

---@param InOrthoFarClipPlane number
function UCameraComponent:SetOrthoFarClipPlane(InOrthoFarClipPlane) end

---@param InFirstPersonScale number
function UCameraComponent:SetFirstPersonScale(InFirstPersonScale) end

---@param InFirstPersonFieldOfView number
function UCameraComponent:SetFirstPersonFieldOfView(InFirstPersonFieldOfView) end

---@param InFieldOfView number
function UCameraComponent:SetFieldOfView(InFieldOfView) end

---@param bInEnableFirstPersonScale boolean
function UCameraComponent:SetEnableFirstPersonScale(bInEnableFirstPersonScale) end

---@param bInEnableFirstPersonFieldOfView boolean
function UCameraComponent:SetEnableFirstPersonFieldOfView(bInEnableFirstPersonFieldOfView) end

---Sets whether to crop the overscanned pixels at the end of the rendering pipeline, allowing the overscanned pixels to be used in post process effects
---that need extra pixels beyond the view frustum (e.g. lens distortion) without having to render those pixels to the screen. When bScaleResolutionWithOverscan is enabled,
---the cropped image will have the same resolution as the original non-overscanned image, but when disabled, the cropped image will be a lower resolution.
---@param bInCropOverscan boolean
function UCameraComponent:SetCropOverscan(bInCropOverscan) end

---@param bInConstrainAspectRatio boolean
function UCameraComponent:SetConstraintAspectRatio(bInConstrainAspectRatio) end

---@param InAutoPlaneShift number
function UCameraComponent:SetAutoPlaneShift(InAutoPlaneShift) end

---@param bAutoCalculate boolean
function UCameraComponent:SetAutoCalculateOrthoPlanes(bAutoCalculate) end

---@param InAsymmetricOverscan FVector4f
function UCameraComponent:SetAsymmetricOverscan(InAsymmetricOverscan) end

---@param InAspectRatioAxisConstraint integer
function UCameraComponent:SetAspectRatioAxisConstraint(InAspectRatioAxisConstraint) end

---@param InAspectRatio number
function UCameraComponent:SetAspectRatio(InAspectRatio) end

---Internal function for updating the camera mesh visibility in PIE
function UCameraComponent:OnCameraMeshHiddenChanged() end

---Returns the filmback text used for burnins on preview viewports
---@return string
function UCameraComponent:GetFilmbackText() end

---Returns camera's Point of View.
---Called by Camera class. Subclass and postprocess to add any effects.
---@param DeltaTime number
---@param DesiredView FMinimalViewInfo @[out] 
function UCameraComponent:GetCameraView(DeltaTime, DesiredView) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCameraComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCameraComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCameraComponent:AddAssetUserDataOfClass(InUserDataClass) end

