---@class BP_TriggerArea_C : AActor
---@field public Plane UStaticMeshComponent
---@field public Box UBoxComponent
---@field public TriggerColor FLinearColor
---@field public NormalColor FLinearColor
local BP_TriggerArea_C = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function BP_TriggerArea_C:GetModuleName() end

