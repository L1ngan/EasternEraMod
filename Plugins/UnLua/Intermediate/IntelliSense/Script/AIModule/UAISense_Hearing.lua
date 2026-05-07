---@class UAISense_Hearing : UAISense
---@field protected NoiseEvents TArray<FAINoiseEvent>
---@field protected SpeedOfSoundSq number @Defaults to 0 to have instant notification. Setting to > 0 will result in delaying     when AI hears the sound based on the distance from the source
local UAISense_Hearing = {}

---Report a noise event.
---@param WorldContextObject UObject
---@param NoiseLocation FVector
---@param Loudness number @[opt] 
---@param Instigator AActor @[opt] 
---@param MaxRange number @[opt] 
---@param Tag string @[opt] 
function UAISense_Hearing.ReportNoiseEvent(WorldContextObject, NoiseLocation, Loudness, Instigator, MaxRange, Tag) end

