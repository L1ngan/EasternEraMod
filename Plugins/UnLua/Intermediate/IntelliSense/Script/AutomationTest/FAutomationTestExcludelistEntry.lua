---@class FAutomationTestExcludelistEntry
---@field public Map string @Hold the name of the target functional test map
---@field public Test string @Hold the name of the target test - full test name is require here unless for functional tests
---@field public Reason string @Reason to why the test is excluded
---@field public RHIs TSet<string> @Option to target specific RHI. Empty array means it should be applied to all RHI
---@field public Warn boolean @Should the Reason be reported as a warning in the log
local FAutomationTestExcludelistEntry = {}
