---@class FNiagaraID
---@field public Index integer @Index in the indirection table for this particle. Allows fast access to this particles data. Is always unique among currently living particles but will be reused after the particle dies.
---@field public AcquireTag integer @A unique tag for when this ID was acquired. Allows us to differentiate between particles when one dies and another reuses it's Index.
local FNiagaraID = {}
