---Base class for blueprint based decorator nodes. Do NOT use it for creating native c++ classes!
---Unlike task and services, decorator have two execution chains:
--- ExecutionStart-ExecutionFinish and ObserverActivated-ObserverDeactivated
---which makes automatic latent action cleanup impossible. Keep in mind, that
---you HAVE TO verify is given chain is still active after resuming from any
---latent action (like Delay, Timelines, etc).
---Helper functions:
---- IsDecoratorExecutionActive (true after ExecutionStart, until ExecutionFinish)
---- IsDecoratorObserverActive (true after ObserverActivated, until ObserverDeactivated)
---@class UBTDecorator_BlueprintBase : UBTDecorator
---@field protected AIOwner AAIController @Cached AIController owner of BehaviorTreeComponent.
---@field protected ActorOwner AActor @Cached AIController owner of BehaviorTreeComponent.
---@field protected ObservedKeyNames TArray<string> @blackboard key names that should be observed
---@field protected CustomDescription string
---@field protected bShowPropertyDetails boolean @show detailed information about properties
---@field protected bCheckConditionOnlyBlackBoardChanges boolean @Applies only if Decorator has any FBlackboardKeySelector property and if decorator is     set to abort BT flow. Is set to true ReceiveConditionCheck will be called only on changes    to observed BB keys. If false or no BB keys observed ReceiveConditionCheck will be called every tick
local UBTDecorator_BlueprintBase = {}

---Alternative AI version of ReceiveTick
---    @@see ReceiveTick for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds number
function UBTDecorator_BlueprintBase:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end

---tick function
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
---@param DeltaSeconds number
function UBTDecorator_BlueprintBase:ReceiveTick(OwnerActor, DeltaSeconds) end

---Alternative AI version of ReceiveObserverDeactivated
---    @@see ReceiveObserverDeactivated for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTDecorator_BlueprintBase:ReceiveObserverDeactivatedAI(OwnerController, ControlledPawn) end

---called when observer is deactivated (flow controller)
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
function UBTDecorator_BlueprintBase:ReceiveObserverDeactivated(OwnerActor) end

---Alternative AI version of ReceiveObserverActivated
---    @@see ReceiveObserverActivated for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTDecorator_BlueprintBase:ReceiveObserverActivatedAI(OwnerController, ControlledPawn) end

---called when observer is activated (flow controller)
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
function UBTDecorator_BlueprintBase:ReceiveObserverActivated(OwnerActor) end

---Alternative AI version of ReceiveExecutionStart
---    @@see ReceiveExecutionStart for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTDecorator_BlueprintBase:ReceiveExecutionStartAI(OwnerController, ControlledPawn) end

---called on execution of underlying node
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
function UBTDecorator_BlueprintBase:ReceiveExecutionStart(OwnerActor) end

---Alternative AI version of ReceiveExecutionFinish
---    @@see ReceiveExecutionFinish for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param NodeResult integer
function UBTDecorator_BlueprintBase:ReceiveExecutionFinishAI(OwnerController, ControlledPawn, NodeResult) end

---called when execution of underlying node is finished
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
---@param NodeResult integer
function UBTDecorator_BlueprintBase:ReceiveExecutionFinish(OwnerActor, NodeResult) end

---Alternative AI version of ReceiveConditionCheck
---    @@see ReceiveConditionCheck for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@return boolean
function UBTDecorator_BlueprintBase:PerformConditionCheckAI(OwnerController, ControlledPawn) end

---called when testing if underlying node can be executed, must call FinishConditionCheck
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
---@return boolean
function UBTDecorator_BlueprintBase:PerformConditionCheck(OwnerActor) end

---check if decorator's observer is currently active
---@return boolean
function UBTDecorator_BlueprintBase:IsDecoratorObserverActive() end

---check if decorator is part of currently active branch
---@return boolean
function UBTDecorator_BlueprintBase:IsDecoratorExecutionActive() end

