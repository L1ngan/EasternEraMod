---A script's stack hierarchy root, representing a UNiagaraHierarchyRoot object in the stack.
---It creates categories and inputs equivalent to the children of the UNiagaraHierarchyRoot it represents.
---In addition, input parameters that have not been added to the hierarchy explicitly are added at the end as well.
---This avoids that hierarchy setup is _required_, and instead becomes optional
---@class UNiagaraStackScriptHierarchyRoot : UNiagaraStackItemContent
local UNiagaraStackScriptHierarchyRoot = {}

