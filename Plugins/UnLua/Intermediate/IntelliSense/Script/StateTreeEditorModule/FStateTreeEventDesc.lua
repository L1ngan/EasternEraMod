---Editor representation of an event description.
---@class FStateTreeEventDesc
---@field public Tag FGameplayTag @Event Tag.
---@field public PayloadStruct UScriptStruct @Event Payload Struct.
---@field public bConsumeEventOnSelect boolean @If set to true, the event is consumed (later state selection cannot react to it) if state selection can be made.
---@field private TemporaryEvent FStateTreeEvent @Temporary event used as a source value in bindings.
local FStateTreeEventDesc = {}
