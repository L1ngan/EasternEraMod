---AI Subsystem managing AI Perception through registered AI Senses between Listeners and Stimuli Sources
---@class UAIPerceptionSystem : UAISubsystem
---@field protected Senses TArray<UAISense>
---@field protected PerceptionAgingRate number
local UAIPerceptionSystem = {}

---@param WorldContextObject UObject
---@param PerceptionEvent UAISenseEvent
function UAIPerceptionSystem.ReportPerceptionEvent(WorldContextObject, PerceptionEvent) end

---@param PerceptionEvent UAISenseEvent
function UAIPerceptionSystem:ReportEvent(PerceptionEvent) end

---@param WorldContextObject UObject
---@param Sense TSubclassOf_UAISense_
---@param Target AActor
---@return boolean
function UAIPerceptionSystem.RegisterPerceptionStimuliSource(WorldContextObject, Sense, Target) end

---@param Actor AActor
---@param EndPlayReason integer
function UAIPerceptionSystem:OnPerceptionStimuliSourceEndPlay(Actor, EndPlayReason) end

---@param WorldContextObject UObject
---@param Stimulus FAIStimulus
---@return TSubclassOf_UAISense_
function UAIPerceptionSystem.GetSenseClassForStimulus(WorldContextObject, Stimulus) end

