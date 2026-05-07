---@class URenderDocPluginSettings : UDeveloperSettings
---@field public bCaptureAllActivity boolean @If checked, RenderDoc will capture all activity in all viewports and editor windows for the entire frame instead of only the current viewport.
---@field public bCaptureAllCallstacks boolean @If checked, RenderDoc will capture callstacks for all API calls.
---@field public bReferenceAllResources boolean @If checked, RenderDoc will include all rendering resources in the capture, even those that have not been used during the frame. Please note that doing this will significantly increase capture size.
---@field public bSaveAllInitials boolean @If checked, RenderDoc will always capture the initial state of all rendering resources even if they are not likely to be used during the frame. Please note that doing this will significantly increase capture size.
---@field public bCaptureDelayInSeconds boolean @If checked, the capture delay's unit will be in seconds instead of frames.
---@field public CaptureDelay integer @If > 0, RenderDoc will trigger the capture only after this amount of frames/seconds has passed.
---@field public CaptureFrameCount integer @If > 1, the RenderDoc capture will encompass more than a single frame. Note: this implies that all activity in all viewports and editor windows will be captured (i.e. same as CaptureAllActivity)
---@field public bAutoAttach boolean @If checked, then RenderDoc will attach on startup. Otherwise the command line argument '-AttachRenderDoc' is required.
---@field public bShowHelpOnStartup boolean @If checked, a help window will be shown on startup.
---@field public bEnableRenderDocCrashHandler boolean @If checked, the RenderDoc crash handler will be used if a crash occurs (Only use this if you know the problem is with RenderDoc and you want to notify the RenderDoc developers!).
---@field public RenderDocBinaryPath string @Path to the main RenderDoc executable to use.
local URenderDocPluginSettings = {}

