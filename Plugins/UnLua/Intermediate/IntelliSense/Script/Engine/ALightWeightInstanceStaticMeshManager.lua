---@class ALightWeightInstanceStaticMeshManager : ALightWeightInstanceManager
---@field protected StaticMesh TSoftObjectPtr<UStaticMesh>
---@field protected ISMComponent UInstancedStaticMeshComponent
---@field protected RenderingIndicesToDataIndices TArray<integer> @keep track of the relationship between our data and the rendering data stored in the instanced static mesh component
---@field protected DataIndicesToRenderingIndices TArray<integer>
local ALightWeightInstanceStaticMeshManager = {}

function ALightWeightInstanceStaticMeshManager:OnRep_StaticMesh() end

