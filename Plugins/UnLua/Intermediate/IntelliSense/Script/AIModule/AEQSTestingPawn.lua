---@class AEQSTestingPawn : ACharacter
---@field public QueryTemplate UEnvQuery
---@field public QueryParams TArray<FEnvNamedValue>
---@field public QueryConfig TArray<FAIDynamicParam>
---@field public TimeLimitPerStep number
---@field public StepToDebugDraw integer
---@field public HighlightMode EEnvQueryHightlightMode
---@field public bDrawLabels boolean
---@field public bDrawFailedItems boolean
---@field public bReRunQueryOnlyOnFinishedMove boolean
---@field public bShouldBeVisibleInGame boolean
---@field public bTickDuringGame boolean
---@field public bRunQueryOnSelectionChanged boolean
---@field public QueryingMode integer
---@field public NavAgentProperties FNavAgentProperties
---@field private EdRenderComp UEQSRenderingComponent @Editor Preview
local AEQSTestingPawn = {}

