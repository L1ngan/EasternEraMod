---@class UAISense_Touch : UAISense
---@field public RegisteredEvents TArray<FAITouchEvent>
local UAISense_Touch = {}

---@param WorldContextObject UObject
---@param TouchReceiver AActor
---@param OtherActor AActor
---@param Location FVector
function UAISense_Touch.ReportTouchEvent(WorldContextObject, TouchReceiver, OtherActor, Location) end

