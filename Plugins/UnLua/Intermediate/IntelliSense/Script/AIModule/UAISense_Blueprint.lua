---@class UAISense_Blueprint : UAISense
---@field protected ListenerDataType TSubclassOf<UUserDefinedStruct>
---@field protected ListenerContainer TArray<UAIPerceptionComponent>
---@field protected UnprocessedEvents TArray<UAISenseEvent>
local UAISense_Blueprint = {}

---returns requested amount of time to pass until next frame.
---    Return 0 to get update every frame (WARNING: hits performance)
---@param EventsToProcess TArray_UAISenseEvent_
---@return number
function UAISense_Blueprint:OnUpdate(EventsToProcess) end

---
---@param ActorListener AActor
---@param PerceptionComponent UAIPerceptionComponent
function UAISense_Blueprint:OnListenerUpdated(ActorListener, PerceptionComponent) end

---called when a listener unregistered from this sense. Most often this is called due to actor's death
---    @@param PerceptionComponent is ActorListener's AIPerceptionComponent instance
---@param ActorListener AActor
---@param PerceptionComponent UAIPerceptionComponent
function UAISense_Blueprint:OnListenerUnregistered(ActorListener, PerceptionComponent) end

---
---@param ActorListener AActor
---@param PerceptionComponent UAIPerceptionComponent
function UAISense_Blueprint:OnListenerRegistered(ActorListener, PerceptionComponent) end

---called when sense's instance gets notified about new pawn that has just been spawned
---@param NewPawn APawn
function UAISense_Blueprint:K2_OnNewPawn(NewPawn) end

---@param ListenerComponents TArray_UAIPerceptionComponent_ @[out] 
function UAISense_Blueprint:GetAllListenerComponents(ListenerComponents) end

---@param ListenerActors TArray_AActor_ @[out] 
function UAISense_Blueprint:GetAllListenerActors(ListenerActors) end

