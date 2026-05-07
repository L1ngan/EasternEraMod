---@class USequenceCameraShakeTestUtil : UBlueprintFunctionLibrary
local USequenceCameraShakeTestUtil = {}

---@param PlayerController APlayerController
---@param PPIndex integer
---@param OutPPSettings FPostProcessSettings @[out] 
---@param OutPPBlendWeight number @[out] 
---@return boolean
function USequenceCameraShakeTestUtil.GetPostProcessBlendCache(PlayerController, PPIndex, OutPPSettings, OutPPBlendWeight) end

---@param PlayerController APlayerController
---@return FMinimalViewInfo
function USequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV(PlayerController) end

---@param PlayerController APlayerController
---@return FMinimalViewInfo
function USequenceCameraShakeTestUtil.GetCameraCachePOV(PlayerController) end

