---SendEvent is used to notify the engine / editor of a change that happend within the Control Rig.
---@class FRigUnit_SendEvent : FRigUnitMutable
---@field public Event ERigEvent @The event to send to the engine
---@field public Item FRigElementKey @The item to send the event for
---@field public OffsetInSeconds number @The time offset to use for the send event
---@field public bEnable boolean @The event will be sent if this is checked
---@field public bOnlyDuringInteraction boolean @The event will be sent if this only during an interaction
local FRigUnit_SendEvent = {}
