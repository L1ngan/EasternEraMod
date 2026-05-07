---@class BP_DefaultWeapon_C : BP_WeaponBase_C
---@field public ProjectileClass TSubclassOf<ABP_DefaultProjectile_C>
local BP_DefaultWeapon_C = {}

function BP_DefaultWeapon_C:StopFire() end

function BP_DefaultWeapon_C:StartFire() end

function BP_DefaultWeapon_C:ChangeToRagdoll() end

---@param IsAiming boolean
function BP_DefaultWeapon_C:UpdateAiming(IsAiming) end

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BP_DefaultWeapon_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BP_DefaultWeapon_C:NotifyEnemyDied() end

