---@class UTestBTTask_SetValuesWithLogs : UBTTaskNode
---@field public LogIndex integer @Index logged when we execute the task
---@field public LogFinished integer @Index logged when we finish the task
---@field public ExecutionTicks1 integer @Number of execution ticks until we set Blackboard KeyName2 Value2
---@field public ExecutionTicks2 integer @Number of execution ticks after ExecutionTicks1 that we end the task
---@field public LogTickIndex integer @Index logged when we tick the task
---@field public KeyName1 string @Blackboard keyname used when we start the task
---@field public Value1 integer @Blackboard value set when we start the task
---@field public KeyName2 string @Blackboard keyname used after ExecutionTicks1 execution ticks
---@field public Value2 integer @Blackboard value set after ExecutionTicks1 execution ticks
---@field public OnAbortKeyName string @Blackboard keyname used when we abort the task
---@field public OnAbortValue integer @Blackboard value set when we abort the task
---@field public TaskResult integer @Result when we finish the task
local UTestBTTask_SetValuesWithLogs = {}

