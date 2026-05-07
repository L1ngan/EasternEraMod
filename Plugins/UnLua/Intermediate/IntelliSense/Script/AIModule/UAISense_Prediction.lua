---@class UAISense_Prediction : UAISense
---@field public RegisteredEvents TArray<FAIPredictionEvent>
local UAISense_Prediction = {}

---Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds
---    Location is being predicted based on PredicterActor's current location and velocity
---@param Requestor APawn
---@param PredictedActor AActor
---@param PredictionTime number
function UAISense_Prediction.RequestPawnPredictionEvent(Requestor, PredictedActor, PredictionTime) end

---Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds
---    Location is being predicted based on PredicterActor's current location and velocity
---@param Requestor AAIController
---@param PredictedActor AActor
---@param PredictionTime number
function UAISense_Prediction.RequestControllerPredictionEvent(Requestor, PredictedActor, PredictionTime) end

