---A base class for actors that can run a camera object.
---When the actor becomes the view target, it is able to start updating itself by instantiating
---a private instance of the camera system. It does this if no camera system was found attached
---under the player controller.
---@class AGameplayCameraActorBase : AActor
local AGameplayCameraActorBase = {}

