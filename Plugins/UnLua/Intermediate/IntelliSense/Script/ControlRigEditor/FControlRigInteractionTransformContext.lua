---FControlRigInteractionTransformContext provides a way of passing the various transform parameters to functions that need to know what the transform context is.
---Extend it if necessary, particularly to avoid overloading some functions signatures.
---@class FControlRigInteractionTransformContext
---@field public Drag FVector
---@field public Rot FRotator
---@field public Scale FVector
---@field public Space EControlRigInteractionTransformSpace
local FControlRigInteractionTransformContext = {}
