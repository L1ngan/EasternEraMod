---@class ARadialForceActor : ARigidBodyBase
---@field private ForceComponent URadialForceComponent @Force component
---@field private SpriteComponent UBillboardComponent
local ARadialForceActor = {}

function ARadialForceActor:ToggleForce() end

---BEGIN DEPRECATED (use component functions now in level script)
function ARadialForceActor:FireImpulse() end

function ARadialForceActor:EnableForce() end

function ARadialForceActor:DisableForce() end

