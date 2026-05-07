---Implements a message that is sent in containing a screen shot run during performance test.
---@class FAutomationWorkerScreenImage : FAutomationWorkerMessageBase
---@field public ScreenImage TArray<integer> @The screen shot data.
---@field public FrameTrace TArray<integer> @The frame trace data.
---@field public ScreenShotName string @The screen shot name.
---@field public Metadata FAutomationScreenshotMetadata
local FAutomationWorkerScreenImage = {}
