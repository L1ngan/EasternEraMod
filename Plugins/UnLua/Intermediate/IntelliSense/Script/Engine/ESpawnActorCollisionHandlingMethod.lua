---Defines available strategies for handling the case where an actor is spawned in such a way that it penetrates blocking collision.
---@class ESpawnActorCollisionHandlingMethod
---@field public Undefined integer
---@field public AlwaysSpawn integer
---@field public AdjustIfPossibleButAlwaysSpawn integer
---@field public AdjustIfPossibleButDontSpawnIfColliding integer
---@field public DontSpawnIfColliding integer
---@field public ESpawnActorCollisionHandlingMethod_MAX integer
local ESpawnActorCollisionHandlingMethod = {}
