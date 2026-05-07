---@class BP_CharacterBase_C : ATPSCharacter
---@field public UberGraphFrame FPointerToUberGraphFrame
---@field public WeaponPoint USceneComponent
local BP_CharacterBase_C = {}

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BP_CharacterBase_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BP_CharacterBase_C:NotifyEnemyDied() end

---@param IsAiming boolean
function BP_CharacterBase_C:UpdateAiming(IsAiming) end

function BP_CharacterBase_C:ChangeToRagdoll() end

function BP_CharacterBase_C:StartFire() end

function BP_CharacterBase_C:StopFire() end

function BP_CharacterBase_C:StartFire_Server() end

function BP_CharacterBase_C:StopFire_Server() end

function BP_CharacterBase_C:Died_Multicast() end

function BP_CharacterBase_C:StartFire_Multicast() end

function BP_CharacterBase_C:StopFire_Multicast() end

