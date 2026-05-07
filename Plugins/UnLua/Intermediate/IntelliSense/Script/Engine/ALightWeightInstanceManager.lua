---@class ALightWeightInstanceManager : AActor
---@field protected RepresentedClass TSubclassOf<AActor>
---@field protected AcceptedClass TSubclassOf<AActor>
---@field protected InstanceTransforms TArray<FTransform> @Current per instance transforms
---@field protected Actors TMap<integer, AActor> @keep track of which instances are currently represented by an actor
---@field protected FreeIndices TArray<integer> @list of indices that we are no longer using
---@field protected ValidIndices TArray<boolean> @handy way to check indices quickly so we don't need to iterate through the free indices list
local ALightWeightInstanceManager = {}

---@param DestroyedActor AActor
function ALightWeightInstanceManager:OnSpawnedActorDestroyed(DestroyedActor) end

function ALightWeightInstanceManager:OnRep_Transforms() end

