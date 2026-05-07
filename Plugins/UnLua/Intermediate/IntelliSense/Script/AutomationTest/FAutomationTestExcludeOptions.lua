---@class FAutomationTestExcludeOptions
---@field public Test string @Name of the target test
---@field public Reason string @Reason to why the test is excluded
---@field public RHIs TSet<string> @Options to target specific RHI. No option means it should be applied to all RHIs
---@field public Platforms TSet<string> @Options to target specific platform. No option means it should be applied to all platforms
---@field public Warn boolean @Should the Reason be reported as a warning in the log
local FAutomationTestExcludeOptions = {}
