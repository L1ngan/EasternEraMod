---FAITestSpawnInfoBase
---Base struct defining where & when to spawn. Used within a FAITestSpawnSetBase class.
---@class FAITestSpawnInfoBase
---@field public SpawnLocation AActor @Where should AI be spawned
---@field public NumberToSpawn integer
---@field public SpawnDelay number @delay between consecutive spawn attempts
---@field public PreSpawnDelay number @delay before attempting first spawn
local FAITestSpawnInfoBase = {}
