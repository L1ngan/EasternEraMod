---Base struct which defines an escalation state, which is subclassed to implement custom state variables and (de-)escalation quota's.
---NOTE: Subclasses must also implement the TEscalationStateStatics interface.
---@class FEscalationState : FStateStruct
---@field public bLogEscalate boolean @Whether or not to log when escalating to this state
---@field public bDormant boolean @This escalation state is considered to be dormant/inactive - and the escalation manager may no longer need ticking in this state
---@field public CooloffTime integer @The amount of time, in seconds, before the current severity state cools off and de-escalates
---@field public AutoEscalateTime integer @The amount of time, in seconds, spent in the current severity state before it automatically escalates to the next state
---@field protected HighestTimePeriod integer @Cached value for the highest time period in this config state
---@field protected AllTimePeriods TArray<integer> @Cached value for all different time periods in this state
local FEscalationState = {}
