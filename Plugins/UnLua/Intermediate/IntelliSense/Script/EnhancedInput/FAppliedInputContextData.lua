---@class FAppliedInputContextData
---@field public Priority integer
---@field public RegistrationCount integer @Used when RegistrationTrackingMode is set to CountRegistrations This is how many times the IMC has been added minus how many times it has been removed. The IMC is unregistered when this hits 0.
local FAppliedInputContextData = {}
