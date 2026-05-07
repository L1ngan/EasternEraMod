---@class ANavigationObjectBase : AActor
---@field private CapsuleComponent UCapsuleComponent
---@field private GoodSprite UBillboardComponent @Normal editor sprite.
---@field private BadSprite UBillboardComponent @Used to draw bad collision intersection in editor.
---@field public bIsPIEPlayerStart boolean @True if this nav point was spawned to be a PIE player start.
local ANavigationObjectBase = {}

