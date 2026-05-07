---Generic escalation state definition used to implement attempted recovery from faults/errors in the NetConnection level netcode.
---Fault handlers may have their own separate escalation tracking.
---@class FNetFaultState : FEscalationState
---@field public bCloseConnection boolean @Whether or not the current escalation state should immediately Close the connection
---@field public EscalateQuotaFaultsPerPeriod integer @The number of faults per period before the next stage of escalation is triggered
---@field public EscalateQuotaFaultPercentPerPeriod integer @Percentage of faults out of total number of recent packets, before the next stage of escalation is triggered
---@field public DescalateQuotaFaultsPerPeriod integer @The number of faults per period before de-escalating into this state (adds hysteresis/lag to state changes)
---@field public DescalateQuotaFaultPercentPerPeriod integer @Percentage of faults out of total number of recent packets, before de-escalating into this state (adds hysteresis/lag to state changes)
---@field public EscalateQuotaTimePeriod integer @The time period to use for determining escalation/de-escalation quotas (Max: 16)
local FNetFaultState = {}
