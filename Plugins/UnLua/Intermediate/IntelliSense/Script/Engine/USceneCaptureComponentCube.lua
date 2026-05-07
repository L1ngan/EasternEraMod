---Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target.
---@class USceneCaptureComponentCube : USceneCaptureComponent
---@field public TextureTarget UTextureRenderTargetCube @Temporary render target that can be used by the editor.
---@field public bCaptureRotation boolean @Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system.
---@field public PostProcessSettings FPostProcessSettings
---@field public PostProcessBlendWeight number @Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect.
local USceneCaptureComponentCube = {}

---Render the scene to the texture target immediately.
---This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly.
---If r.SceneCapture.CullByDetailMode is set, nothing will happen if DetailMode is higher than r.DetailMode.
function USceneCaptureComponentCube:CaptureScene() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USceneCaptureComponentCube:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USceneCaptureComponentCube:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USceneCaptureComponentCube:AddAssetUserDataOfClass(InUserDataClass) end

