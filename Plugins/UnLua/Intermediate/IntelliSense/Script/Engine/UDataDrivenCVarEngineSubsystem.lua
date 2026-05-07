---@class UDataDrivenCVarEngineSubsystem : UEngineSubsystem
---@field public OnDataDrivenCVarDelegate MulticastDelegate
local UDataDrivenCVarEngineSubsystem = {}

---@param CVarName string
function UDataDrivenCVarEngineSubsystem:OnDataDrivenCVarChanged__DelegateSignature(CVarName) end

