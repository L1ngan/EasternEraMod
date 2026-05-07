---@class BTService_CheckPlayer_C : UBTService_BlueprintBase
---@field public UberGraphFrame FPointerToUberGraphFrame
---@field public PlayerKey FBlackboardKeySelector
local BTService_CheckPlayer_C = {}

---Alternative AI version of ReceiveTick function.
---    @@see ReceiveTick for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds number
function BTService_CheckPlayer_C:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end

