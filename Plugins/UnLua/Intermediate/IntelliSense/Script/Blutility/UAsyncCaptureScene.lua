---@class UAsyncCaptureScene : UBlueprintAsyncActionBase
---@field public Complete MulticastDelegate
---@field private SceneCapture ASceneCapture2D
---@field private SceneCaptureRT UTextureRenderTarget2D
local UAsyncCaptureScene = {}

---@param ViewCamera UCameraComponent
---@param SceneCaptureClass TSubclassOf_ASceneCapture2D_
---@param ResX integer
---@param ResY integer
---@param WarmUpFrames integer
---@return UAsyncCaptureScene
function UAsyncCaptureScene.CaptureSceneWithWarmupAsync(ViewCamera, SceneCaptureClass, ResX, ResY, WarmUpFrames) end

---@param ViewCamera UCameraComponent
---@param SceneCaptureClass TSubclassOf_ASceneCapture2D_
---@param ResX integer
---@param ResY integer
---@return UAsyncCaptureScene
function UAsyncCaptureScene.CaptureSceneAsync(ViewCamera, SceneCaptureClass, ResX, ResY) end

