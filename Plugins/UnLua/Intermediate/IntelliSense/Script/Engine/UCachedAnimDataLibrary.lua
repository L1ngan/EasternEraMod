---A library of commonly used functionality from the CachedAnimData family, exposed to blueprint.
---@class UCachedAnimDataLibrary : UBlueprintFunctionLibrary
local UCachedAnimDataLibrary = {}

---CachedAnimStateData **// Returns whether a state is relevant (specified in the provided FCachedAnimStateData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimStateData FCachedAnimStateData
---@return boolean
function UCachedAnimDataLibrary.StateMachine_IsStateRelevant(InAnimInstance, CachedAnimStateData) end

---Returns true when the input state, or states, have any weight (specified in the provided FCachedAnimStateArray)
---@param InAnimInstance UAnimInstance
---@param CachedAnimStateArray FCachedAnimStateArray
---@return boolean
function UCachedAnimDataLibrary.StateMachine_IsRelevant(InAnimInstance, CachedAnimStateArray) end

---Returns true when the weight of the input state (or summed weight for multiple input states) is 1.0 of greater (specified in the provided FCachedAnimStateArray)
---@param InAnimInstance UAnimInstance
---@param CachedAnimStateArray FCachedAnimStateArray
---@return boolean
function UCachedAnimDataLibrary.StateMachine_IsFullWeight(InAnimInstance, CachedAnimStateArray) end

---CachedAnimStateArray **// Returns the summed weight of a state or states, relative to their state machine (specified in the provided FCachedAnimStateArray)
---@param InAnimInstance UAnimInstance
---@param CachedAnimStateArray FCachedAnimStateArray
---@return number
function UCachedAnimDataLibrary.StateMachine_GetTotalWeight(InAnimInstance, CachedAnimStateArray) end

---Gets the time to the end of the asset, as a fraction, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimRelevancyData FCachedAnimRelevancyData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetRelevantAnimTimeRemainingFraction(InAnimInstance, CachedAnimRelevancyData) end

---Gets the time to the end of the asset, in seconds, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimRelevancyData FCachedAnimRelevancyData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetRelevantAnimTimeRemaining(InAnimInstance, CachedAnimRelevancyData) end

---CachedAnimRelevancyData **// Gets the accumulated time, in seconds, of the most relevant asset player in the specified state (specified in the provided FCachedAnimRelevancyData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimRelevancyData FCachedAnimRelevancyData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetRelevantAnimTime(InAnimInstance, CachedAnimRelevancyData) end

---Returns the weight of a state, relative to its state machine (specified in the provided FCachedAnimStateData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimStateData FCachedAnimStateData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetLocalWeight(InAnimInstance, CachedAnimStateData) end

---Returns the weight of a state, relative to the graph (specified in the provided FCachedAnimStateData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimStateData FCachedAnimStateData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetGlobalWeight(InAnimInstance, CachedAnimStateData) end

---CachedAnimTransitionData **// Gets the crossfade duration of the transition between the two input states. If multiple transition rules exist, the first will be returned (specified in the provided FCachedAnimTransitionData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimTransitionData FCachedAnimTransitionData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetCrossfadeDuration(InAnimInstance, CachedAnimTransitionData) end

---Gets the accumulated time, as a fraction, of the asset player in the specified state. Assumes only one player in the state (specified in the provided FCachedAnimAssetPlayerData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimAssetPlayerData FCachedAnimAssetPlayerData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetAssetPlayerTimeRatio(InAnimInstance, CachedAnimAssetPlayerData) end

---CachedAnimAssetPlayerData **// Gets the accumulated time, in seconds, of the asset player in the specified state. Assumes only one player in the state (specified in the provided FCachedAnimAssetPlayerData)
---@param InAnimInstance UAnimInstance
---@param CachedAnimAssetPlayerData FCachedAnimAssetPlayerData
---@return number
function UCachedAnimDataLibrary.StateMachine_GetAssetPlayerTime(InAnimInstance, CachedAnimAssetPlayerData) end

