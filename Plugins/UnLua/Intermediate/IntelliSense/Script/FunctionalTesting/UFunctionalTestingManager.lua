---@class UFunctionalTestingManager : UBlueprintFunctionLibrary
---@field public TestsLeft TArray<AFunctionalTest>
---@field public AllTests TArray<AFunctionalTest>
---@field public OnSetupTests MulticastDelegate
---@field public OnTestsComplete MulticastDelegate
---@field public OnTestsBegin MulticastDelegate
local UFunctionalTestingManager = {}

---Triggers in sequence all functional tests found on the level.
---@param WorldContextObject UObject
---@param bNewLog boolean @[opt] 
---@param bRunLooped boolean @[opt] 
---@param FailedTestsReproString string
---@return boolean
function UFunctionalTestingManager.RunAllFunctionalTests(WorldContextObject, bNewLog, bRunLooped, FailedTestsReproString) end

