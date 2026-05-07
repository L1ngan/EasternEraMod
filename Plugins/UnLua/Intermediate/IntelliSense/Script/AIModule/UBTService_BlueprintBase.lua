---Base class for blueprint based service nodes. Do NOT use it for creating native c++ classes!
---When service receives Deactivation event, all latent actions associated this instance are being removed.
---This prevents from resuming activity started by Activation, but does not handle external events.
---Please use them safely (unregister at abort) and call IsServiceActive() when in doubt.
---@class UBTService_BlueprintBase : UBTService
---@field protected AIOwner AAIController @Cached AIController owner of BehaviorTreeComponent.
---@field protected ActorOwner AActor @Cached actor owner of BehaviorTreeComponent.
---@field protected CustomDescription string
---@field protected bShowPropertyDetails boolean @show detailed information about properties
---@field protected bShowEventDetails boolean @show detailed information about implemented events
local UBTService_BlueprintBase = {}

---Alternative AI version of ReceiveTick function.
---    @@see ReceiveTick for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds number
function UBTService_BlueprintBase:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end

---tick function
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
---@param DeltaSeconds number
function UBTService_BlueprintBase:ReceiveTick(OwnerActor, DeltaSeconds) end

---Alternative AI version of ReceiveSearchStart function.
---    @@see ReceiveSearchStart for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTService_BlueprintBase:ReceiveSearchStartAI(OwnerController, ControlledPawn) end

---task search enters branch of tree
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
function UBTService_BlueprintBase:ReceiveSearchStart(OwnerActor) end

---Alternative AI version of ReceiveDeactivation function.
---    @@see ReceiveDeactivation for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTService_BlueprintBase:ReceiveDeactivationAI(OwnerController, ControlledPawn) end

---service became inactive
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
function UBTService_BlueprintBase:ReceiveDeactivation(OwnerActor) end

---Alternative AI version of ReceiveActivation function.
---    @@see ReceiveActivation for more details
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTService_BlueprintBase:ReceiveActivationAI(OwnerController, ControlledPawn) end

---service became active
---    @@Note that if both generic and AI event versions are implemented only the more
---    suitable one will be called, meaning the AI version if called for AI, generic one otherwise
---@param OwnerActor AActor
function UBTService_BlueprintBase:ReceiveActivation(OwnerActor) end

---check if service is currently being active
---@return boolean
function UBTService_BlueprintBase:IsServiceActive() end

