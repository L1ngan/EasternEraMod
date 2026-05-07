---Wrapper class for scratch pad scripts in an emitter. This is needed because each emitter version can have it's own copy of a scratch pad with the same name and they can't all be outered to the emitter that way.
---@class UNiagaraScratchPadContainer : UObject
---@field public Scripts TArray<UNiagaraScript>
local UNiagaraScratchPadContainer = {}

