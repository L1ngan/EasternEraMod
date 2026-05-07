---@class BP_PlayerCharacter_C : BP_CharacterBase_C
---@field public UberGraphFrame FPointerToUberGraphFrame
---@field public Camera UCameraComponent
---@field public SpringArm USpringArmComponent
---@field public ZoomInOut_Alpha_31E880C245F99B0652A7719A773109AD number
---@field public ZoomInOut__Direction_31E880C245F99B0652A7719A773109AD integer
---@field public ZoomInOut UTimelineComponent
local BP_PlayerCharacter_C = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function BP_PlayerCharacter_C:GetModuleName() end

function BP_PlayerCharacter_C:ZoomInOut__FinishedFunc() end

function BP_PlayerCharacter_C:ZoomInOut__UpdateFunc() end

function BP_PlayerCharacter_C:Dummy() end

function BP_PlayerCharacter_C:StopFire() end

function BP_PlayerCharacter_C:StartFire() end

function BP_PlayerCharacter_C:ChangeToRagdoll() end

---@param IsAiming boolean
function BP_PlayerCharacter_C:UpdateAiming(IsAiming) end

---@param TraceLocation FVector @[out] 
---@param TraceDirection FVector @[out] 
function BP_PlayerCharacter_C:GetWeaponTraceInfo(TraceLocation, TraceDirection) end

function BP_PlayerCharacter_C:NotifyEnemyDied() end

