---@class BPI_Interfaces_C : UInterface
local BPI_Interfaces_C = {}

function BPI_Interfaces_C:StopFire() end

function BPI_Interfaces_C:StartFire() end

function BPI_Interfaces_C:ChangeToRagdoll() end

---@param IsAiming boolean
function BPI_Interfaces_C:UpdateAiming(IsAiming) end

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BPI_Interfaces_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BPI_Interfaces_C:NotifyEnemyDied() end

