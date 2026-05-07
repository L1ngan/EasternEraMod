---TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a "Initialize variable" node.
---TODO: Should we add an "Uninitialized" entry, or is that too much friction?
---@class ENiagaraDefaultMode
---@field public Value integer
---@field public Binding integer
---@field public Custom integer
---@field public FailIfPreviouslyNotSet integer
---@field public ENiagaraDefaultMode_MAX integer
local ENiagaraDefaultMode = {}
