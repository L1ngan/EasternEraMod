---@class UControlRigTestData : UControlRigReplay
---@field public Initial FControlRigTestDataFrame
---@field public InputFrames TArray<FControlRigTestDataFrame>
---@field public OutputFrames TArray<FControlRigTestDataFrame>
---@field public EventQueue TArray<string>
local UControlRigTestData = {}

---@param InSeconds number
---@param bInput boolean @[opt] 
---@return integer
function UControlRigTestData:GetFrameIndexForTime(InSeconds, bInput) end

