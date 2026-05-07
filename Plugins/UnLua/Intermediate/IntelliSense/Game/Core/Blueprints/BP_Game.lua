---@class BP_Game_C : AGameModeBase
---@field public UberGraphFrame FPointerToUberGraphFrame
---@field public DefaultSceneRoot USceneComponent
---@field public AICharacterClass TSubclassOf<ABP_AICharacter_C>
local BP_Game_C = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function BP_Game_C:GetModuleName() end

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BP_Game_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BP_Game_C:NotifyEnemyDied() end

---@param IsAiming boolean
function BP_Game_C:UpdateAiming(IsAiming) end

function BP_Game_C:ChangeToRagdoll() end

function BP_Game_C:StartFire() end

function BP_Game_C:StopFire() end

