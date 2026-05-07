---Container for detailing collision automated test data.
---@class UFbxTestPlan : UObject
---@field public TestPlanName string @Name of the Test Plan
---@field public Action integer @Tell the system what we want to do
---@field public LodIndex integer @The LOD index in case the user choose to add or reimport a LOD
---@field public bDeleteFolderAssets boolean @If true the test will delete all assets create in the import folder
---@field public ExpectedResult TArray<FFbxTestPlanExpectedResult> @Expected preset type
---@field public ImportUI UFbxImportUI @Options use for this test plan, Transient because we manually serialize the options.
local UFbxTestPlan = {}

