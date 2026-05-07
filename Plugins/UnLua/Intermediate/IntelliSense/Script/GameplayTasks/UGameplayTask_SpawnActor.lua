---Convenience task for spawning actors (optionally limiting the spawning to the network authority). If not the net authority, we will not spawn
---and Success will not be called. The nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking
---network role before spawning.
---Though this task doesn't do much - games can implement similar tasks that carry out game specific rules. For example a 'SpawnProjectile'
---task that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining
---firing position from a weapon attachment).
---Long term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the
---actor down to it. We could potentially also use this to do predictive actor spawning / reconciliation.
---@class UGameplayTask_SpawnActor : UGameplayTask
---@field public Success MulticastDelegate
---@field public DidNotSpawn MulticastDelegate @Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)
---@field protected ClassToSpawn TSubclassOf<AActor>
local UGameplayTask_SpawnActor = {}

---Spawn new Actor on the network authority (server)
---@param TaskOwner TScriptInterface_UGameplayTaskOwnerInterface_
---@param SpawnLocation FVector
---@param SpawnRotation FRotator
---@param Class TSubclassOf_AActor_
---@param bSpawnOnlyOnAuthority boolean @[opt] 
---@return UGameplayTask_SpawnActor
function UGameplayTask_SpawnActor.SpawnActor(TaskOwner, SpawnLocation, SpawnRotation, Class, bSpawnOnlyOnAuthority) end

---@param WorldContextObject UObject
---@param SpawnedActor AActor
function UGameplayTask_SpawnActor:FinishSpawningActor(WorldContextObject, SpawnedActor) end

---@param WorldContextObject UObject
---@param SpawnedActor AActor @[out] 
---@return boolean
function UGameplayTask_SpawnActor:BeginSpawningActor(WorldContextObject, SpawnedActor) end

