---Define a test plan
---@class UInterchangeImportTestPlan : UObject
---@field public Description string @Test Description
---@field public WorldPath FSoftObjectPath @Level to use for taking Screenshot
---@field public ImportStep UInterchangeImportTestStepImport @File Import Step
---@field public ReimportStack TArray<UInterchangeImportTestStepReimport> @Set of re-imports that will follow the above import step
local UInterchangeImportTestPlan = {}

---Click here to immediately run this single test through the automation framework
function UInterchangeImportTestPlan:RunThisTest() end

