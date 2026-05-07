---@class UEditorUtilityTask : UObject
---@field protected bRunEditorUtilityOnStartup boolean @Run this editor utility on start-up (after asset discovery)?
---@field private MyTaskManager UEditorUtilitySubsystem
---@field private MyParentTask UEditorUtilityTask
---@field private bCancelRequested boolean
local UEditorUtilityTask = {}

---@return boolean
function UEditorUtilityTask:WasCancelRequested() end

---@param Text string
function UEditorUtilityTask:SetTaskNotificationText(Text) end

function UEditorUtilityTask:Run() end

function UEditorUtilityTask:ReceiveCancelRequested() end

function UEditorUtilityTask:ReceiveBeginExecution() end

---@return string
function UEditorUtilityTask:GetTaskTitleOverride() end

---@param bSuccess boolean @[opt] 
function UEditorUtilityTask:FinishExecutingTask(bSuccess) end

