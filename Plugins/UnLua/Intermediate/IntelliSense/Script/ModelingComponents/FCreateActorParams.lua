---FCreateActorParams is a collection of input data intended to be passed to
---UModelingObjectsCreationAPI::CreateNewActor().
---@class FCreateActorParams
---@field public TargetWorld UWorld @The World/Level the new Actor should be created in (if known).
---@field public BaseName string @The base name of the new Actor
---@field public Transform FTransform @The 3D local-to-world transform for the new actor
---@field public TemplateAsset UObject @A template Asset used to determine the type of Actor to spawn.
local FCreateActorParams = {}
