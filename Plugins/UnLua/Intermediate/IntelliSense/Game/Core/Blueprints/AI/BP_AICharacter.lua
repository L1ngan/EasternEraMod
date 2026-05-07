---@class BP_AICharacter_C : BP_CharacterBase_C
---@field public Sphere USphereComponent
local BP_AICharacter_C = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function BP_AICharacter_C:GetModuleName() end

function BP_AICharacter_C:StopFire() end

function BP_AICharacter_C:StartFire() end

function BP_AICharacter_C:ChangeToRagdoll() end

---@param IsAiming boolean
function BP_AICharacter_C:UpdateAiming(IsAiming) end

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BP_AICharacter_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BP_AICharacter_C:NotifyEnemyDied() end

