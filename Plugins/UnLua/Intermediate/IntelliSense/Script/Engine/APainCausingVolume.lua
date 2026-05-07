---Volume that causes damage over time to any Actor that overlaps its collision.
---@class APainCausingVolume : APhysicsVolume
---@field public bPainCausing boolean @Whether volume currently causes damage.
---@field public DamagePerSec number @Damage done per second to actors in this volume when bPainCausing=true
---@field public DamageType TSubclassOf<UDamageType> @Type of damage done
---@field public PainInterval number @If pain causing, time between damage applications.
---@field public bEntryPain boolean @if bPainCausing, cause pain when something enters the volume in addition to damage each second
---@field public BACKUP_bPainCausing boolean @Checkpointed bPainCausing value
---@field public DamageInstigator AController @Controller that gets credit for any damage caused by this volume
local APainCausingVolume = {}

