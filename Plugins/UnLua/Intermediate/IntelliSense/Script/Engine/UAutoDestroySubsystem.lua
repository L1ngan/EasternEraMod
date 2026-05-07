---The Auto destroy subsystem manages actors who have bAutoDestroyWhenFinished
---set as true. This ensures that even actors who do not have Tick enabled
---get properly destroyed, as well as decouple this behavior from AActor::Tick
---@class UAutoDestroySubsystem : UTickableWorldSubsystem
---@field private ActorsToPoll TArray<AActor> @Actors to check if they should auto destroy or not
local UAutoDestroySubsystem = {}

---Callback for a registered actor's End Play so we can remove it from our known actors
---@param Actor AActor
---@param EndPlayReason integer
function UAutoDestroySubsystem:OnActorEndPlay(Actor, EndPlayReason) end

