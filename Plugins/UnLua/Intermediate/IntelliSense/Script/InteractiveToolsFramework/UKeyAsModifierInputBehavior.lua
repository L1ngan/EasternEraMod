---UKeyAsModifierInputBehavior converts a specific key press/release into
---a "Modifier" toggle via the IModifierToggleBehaviorTarget interface. It does
---not capture the key press; rather, it updates the modifier its WantsCapture call.
---This means that the modifier won't be updated if another behavior captures the
---keyboard.
---@class UKeyAsModifierInputBehavior : UInputBehavior
local UKeyAsModifierInputBehavior = {}

