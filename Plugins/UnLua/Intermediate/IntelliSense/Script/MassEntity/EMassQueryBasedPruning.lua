---Values determining whether a processor wants to be pruned at runtime. The value is not used when
---processing graph is generated for project configuration purposes or debug-time graph visualization purposes
---This behavior can be overridden by UMassProcessor::ShouldAllowQueryBasedPruning child class overrides
---@class EMassQueryBasedPruning
---@field public Prune integer
---@field public Never integer
---@field public Default integer
---@field public EMassQueryBasedPruning_MAX integer
local EMassQueryBasedPruning = {}
