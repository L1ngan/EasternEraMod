---Data for a single data channel island.
---@class FNDCIsland
---@field private Owner UNiagaraDataChannelHandler_Islands @The owning handler for this island.
---@field private Bounds FBoxSphereBounds @Current bounds of this island. The bounds of any handler systems are modified to match these bounds.
---@field private SpawnedComponents TArray<UNiagaraComponent> @Niagara components spawned for this island.
local FNDCIsland = {}
