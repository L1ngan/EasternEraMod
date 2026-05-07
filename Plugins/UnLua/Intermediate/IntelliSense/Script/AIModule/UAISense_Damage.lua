---@class UAISense_Damage : UAISense
---@field public RegisteredEvents TArray<FAIDamageEvent>
local UAISense_Damage = {}

---EventLocation will be reported as Instigator's location at the moment of event happening
---@param WorldContextObject UObject
---@param DamagedActor AActor
---@param Instigator AActor
---@param DamageAmount number
---@param EventLocation FVector
---@param HitLocation FVector
---@param Tag string @[opt] 
function UAISense_Damage.ReportDamageEvent(WorldContextObject, DamagedActor, Instigator, DamageAmount, EventLocation, HitLocation, Tag) end

