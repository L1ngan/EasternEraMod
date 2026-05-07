---@class FAIDamageEvent
---@field public Amount number @Damage taken by DamagedActor.     @@Note 0-damage events do not get ignored
---@field public Location FVector @Event's "Location", or what will be later treated as the perceived location for this sense.     If not set, HitLocation will be used, if that is unset too DamagedActor's location
---@field public HitLocation FVector @Event's additional spatial information     @@TODO document
---@field public DamagedActor AActor @Damaged actor
---@field public Instigator AActor @Actor that instigated damage. Can be None
---@field public Tag string @Optional named identifier for the damage.
local FAIDamageEvent = {}
