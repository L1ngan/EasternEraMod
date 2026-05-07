---@class UEditorUtilityTest : UObject
---@field public OnTestPrepare MulticastDelegate @Called when the test is ready to prepare
---@field public OnTestStart MulticastDelegate @Called when the test is started
---@field public OnTestFinished MulticastDelegate @Called when the test is finished. Use it to clean up
---@field public Owner string @The owner is the group or person responsible for the test. Generally you should use a group name like 'Editor' or 'Rendering'. When a test fails it may not be obvious who should investigate so this provides a associate responsible groups with tests.
---@field public Description string @A description of the test, like what is this test trying to determine.
---@field public PreparationTimeLimit number @The Test's time limit for preparation, this is the time it has to trigger IsReadyToStart(). '0' means no limit.
---@field public TimeLimit number @Test's total run time limit. '0' means no limit
local UEditorUtilityTest = {}

---Actual run the test, must call FinishTest at then end of test with a state to signify the test is done.
function UEditorUtilityTest:StartTest() end

---Blueprint Utility Editor entry point
function UEditorUtilityTest:Run() end

---Use to add clean up steps, the call is blocking.
---@param TestState EEditorUtilityTestResult
---@param FinalState EEditorUtilityTestResult @[out] 
function UEditorUtilityTest:ReceiveFinishedTest(TestState, FinalState) end

---Use to setup test before running, must call FinishPrepareTest at the end to actual start the test.
function UEditorUtilityTest:PrepareTest() end

---Is test ruuning
---@return boolean
function UEditorUtilityTest:IsRunning() end

---Get test state
---@return EEditorUtilityTestResult
function UEditorUtilityTest:GetState() end

---Tell the VM the test is finished with specify state.
---@param TestState EEditorUtilityTestResult
---@param Message string
function UEditorUtilityTest:FinishTest(TestState, Message) end

---Tell the blueprint VM to start the test (to use at the end of Prepare Test event).
function UEditorUtilityTest:FinishPrepareTest() end

---Add error if expected condition is false
---@param Condition boolean
---@param ErrorMessage string
function UEditorUtilityTest:ExpectTrue(Condition, ErrorMessage) end

---Add error if expected condition is true
---@param Condition boolean
---@param ErrorMessage string
function UEditorUtilityTest:ExpectFalse(Condition, ErrorMessage) end

---Add Warning
---@param Message string
function UEditorUtilityTest:AddWarning(Message) end

---Add Info
---@param Message string
function UEditorUtilityTest:AddInfo(Message) end

---Add Error
---@param Message string
function UEditorUtilityTest:AddError(Message) end

