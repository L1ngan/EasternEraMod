---@class FStaticSwitchTypeData
---@field public SwitchType ENiagaraStaticSwitchType @This determines how the switch value is interpreted
---@field public Enum UEnum @If the type is enum, this is the enum being switched on, otherwise it holds no sensible value
---@field public SwitchConstant string @If set, then this switch is not exposed but will rather be evaluated by the given compile-time constant
---@field public bAutoRefreshEnabled boolean @If true, a node will auto refresh under certain circumstances, like in post load or if the assigned enum changes
---@field public bExposeAsPin boolean
local FStaticSwitchTypeData = {}
