---Implements the Editor's user settings.
---@class UAutomationControllerSettings : UObject
---@field public Groups TArray<FAutomatedTestGroup> @List of user-defined test groups
---@field public bSuppressLogErrors boolean @Whether to suppress log from test results (default=false)
---@field public bSuppressLogWarnings boolean @Whether to suppress log warnings from test results (default=false)
---@field public bElevateLogWarningsToErrors boolean @Whether to treat log warnings as log errors (default=true)
---@field public SuppressedLogCategories TArray<string> @Log categories where warnings/errors will not affect the result of tests. A finer-grained way of preventing rogue systems from leading to test warnings/errors
---@field public bKeepPIEOpen boolean @Whether to keep the PIE Open in the editor at the end of a test pass (default=false)
---@field public bAutoExpandSingleItemSubgroups boolean @Whether to automatically expand Automation Tests tree subgroups that have single non-leaf item as a child (default=true)
---@field public bSortTestsByFailure boolean @Whether to Sort tests by failure type in json/html report
---@field public bPruneLogsOnSuccess boolean @Whether to prune log events from test report on success
---@field private bTreatLogWarningsAsTestErrors boolean @Whether to treat log warnings as test errors (default=true)
---@field public CheckTestIntervalSeconds number @How long to wait between test updates (default=1sec)
---@field public GameInstanceLostTimerSeconds number @The maximum response wait time for detecting a lost game instance (default=300sec)
---@field public TelemetryDirectory string @Path to where telemetry files are saved (default=<project>/Saved/Automation/Telemetry/)
---@field public bResetTelemetryStorageOnNewSession boolean @Whether to reset data stored in telemetry file (default=false)
local UAutomationControllerSettings = {}

