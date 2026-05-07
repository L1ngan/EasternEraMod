---AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem
---and gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)
---@class UAIPerceptionComponent : UActorComponent
---@field protected SensesConfig TArray<UAISenseConfig>
---@field protected DominantSense TSubclassOf<UAISense> @Indicated sense that takes precedence over other senses when determining sensed actor's location.     Should be set to one of the senses configured in SensesConfig, or None.
---@field protected AIOwner AAIController
---@field public OnPerceptionUpdated MulticastDelegate @Might want to move these to special "BP_AIPerceptionComponent"
---@field public OnTargetPerceptionForgotten MulticastDelegate @Notifies all bound delegates that the perception info has been forgotten for a given target. The notification gets broadcast when all stimuli of a given target expire or the target was explicitly forgotten.
---@field public OnTargetPerceptionUpdated MulticastDelegate @Notifies all bound objects that perception info has been updated for a given target. The notification is broadcast for any received stimulus or on change of state according to the stimulus configuration. Note - This delegate will not be called if source actor is no longer valid by the time a stimulus gets processed. Use OnTargetPerceptionInfoUpdated providing a source id to handle those cases.
---@field public OnTargetPerceptionInfoUpdated MulticastDelegate @Notifies all bound objects that perception info has been updated for a given target. The notification is broadcast for any received stimulus or on change of state according to the stimulus configuration. Note - This delegate will be called even if source actor is no longer valid by the time a stimulus gets processed so it is better to use source id for bookkeeping.
local UAIPerceptionComponent = {}

---Note that this works only if given sense has been already configured for
---    this component instance
---@param SenseClass TSubclassOf_UAISense_
---@param bEnable boolean
function UAIPerceptionComponent:SetSenseEnabled(SenseClass, bEnable) end

---Notifies AIPerceptionSystem to update properties for this "stimuli listener"
function UAIPerceptionComponent:RequestStimuliListenerUpdate() end

---@param Actor AActor
---@param EndPlayReason integer
function UAIPerceptionComponent:OnOwnerEndPlay(Actor, EndPlayReason) end

---Returns if a sense is active. Note that this works only if given sense has been
---     already configured for this component instance
---@param SenseClass TSubclassOf_UAISense_
---@return boolean
function UAIPerceptionComponent:IsSenseEnabled(SenseClass) end

---@param SenseToUse TSubclassOf_UAISense_
---@param OutActors TArray_AActor_ @[out] 
function UAIPerceptionComponent:GetPerceivedHostileActorsBySense(SenseToUse, OutActors) end

---blueprint interface
---@param OutActors TArray_AActor_ @[out] 
function UAIPerceptionComponent:GetPerceivedHostileActors(OutActors) end

---If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched
---@param SenseToUse TSubclassOf_UAISense_
---@param OutActors TArray_AActor_ @[out] 
function UAIPerceptionComponent:GetKnownPerceivedActors(SenseToUse, OutActors) end

---If SenseToUse is none all actors currently perceived in any way will get fetched
---@param SenseToUse TSubclassOf_UAISense_
---@param OutActors TArray_AActor_ @[out] 
function UAIPerceptionComponent:GetCurrentlyPerceivedActors(SenseToUse, OutActors) end

---Retrieves whatever has been sensed about given actor
---@param Actor AActor
---@param Info FActorPerceptionBlueprintInfo @[out] 
---@return boolean
function UAIPerceptionComponent:GetActorsPerception(Actor, Info) end

---basically cleans up PerceptualData, resulting in loss of all previous perception
function UAIPerceptionComponent:ForgetAll() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAIPerceptionComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAIPerceptionComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAIPerceptionComponent:AddAssetUserDataOfClass(InUserDataClass) end

