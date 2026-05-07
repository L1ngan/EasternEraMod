---@class BP_WeaponBase_C : AActor
---@field public UberGraphFrame FPointerToUberGraphFrame
---@field public SkeletalMesh USkeletalMeshComponent
local BP_WeaponBase_C = {}

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BP_WeaponBase_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BP_WeaponBase_C:NotifyEnemyDied() end

---@param IsAiming boolean
function BP_WeaponBase_C:UpdateAiming(IsAiming) end

function BP_WeaponBase_C:ChangeToRagdoll() end

function BP_WeaponBase_C:StartFire() end

function BP_WeaponBase_C:StopFire() end

