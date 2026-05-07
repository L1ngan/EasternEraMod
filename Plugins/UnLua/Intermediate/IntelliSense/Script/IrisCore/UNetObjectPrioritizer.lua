---NetObjectPrioritizers are responsible for determining how important it is to replicate an object. Priorities should be at least 0.0f,
---meaning no need to replicate. At 1.0f objects are being considered for replication. Priorities are acumulated per object and connection
---until it's replicated, at which point the priority is reset to zero. Bandwidth constraints and other factors may cause a highly prioritized
---object to still not be replicated to a particular connection a certain frame. There is no mechanism to force an object to be replicated a
---certain frame, but the priority is a major factor in the decision.
---@class UNetObjectPrioritizer : UObject
local UNetObjectPrioritizer = {}

