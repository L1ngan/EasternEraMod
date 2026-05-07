---Damage subclass that handles damage with a source location and falloff radius
---@class FRadialDamageEvent : FDamageEvent
---@field public Params FRadialDamageParams @Static parameters describing damage falloff math
---@field public Origin FVector @Location of origin point
---@field public ComponentHits TArray<FHitResult> @Hit reslts of specific impacts
local FRadialDamageEvent = {}
