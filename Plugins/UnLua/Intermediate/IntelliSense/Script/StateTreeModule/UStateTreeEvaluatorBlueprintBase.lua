---* Base class for Blueprint based evaluators.
---@class UStateTreeEvaluatorBlueprintBase : UStateTreeNodeBlueprintBase
local UStateTreeEvaluatorBlueprintBase = {}

function UStateTreeEvaluatorBlueprintBase:ReceiveTreeStop() end

function UStateTreeEvaluatorBlueprintBase:ReceiveTreeStart() end

---@param DeltaTime number
function UStateTreeEvaluatorBlueprintBase:ReceiveTick(DeltaTime) end

