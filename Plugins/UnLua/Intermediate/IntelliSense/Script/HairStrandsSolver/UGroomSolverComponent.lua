---Groom solver component in which groom component could be added to be solver together
---@class UGroomSolverComponent : UMeshComponent
---@field private SolverSettings FGroomSolverSettings @Solver settings used to control the simulation
---@field private SimulationAsset FDataflowSimulationAsset @Solver dataflow asset used to advance in time
---@field private GroomComponents TSet<UGroomComponent> @List of physics objects registered to the solver
---@field private MeshDeformer UMeshDeformer @Graph deformer solver the component is using
---@field private DeformerInstance UMeshDeformerInstance @Object containing state for the MeshDeformer.
---@field private DeformerSettings UMeshDeformerInstanceSettings @Object containing instance settings for the MeshDeformer.
local UGroomSolverComponent = {}

---Change the MeshDeformer solver that is used for this Component.
---@param DeformerSolver UMeshDeformer
function UGroomSolverComponent:SetDeformerSolver(DeformerSolver) end

---Reset the groom physics components
function UGroomSolverComponent:ResetGroomComponents() end

---Add a groom component to the solver
---@param GroomComponent UGroomComponent
function UGroomSolverComponent:RemoveGroomComponent(GroomComponent) end

---Add a groom component to the solver
---@param GroomComponent UGroomComponent
function UGroomSolverComponent:AddGroomComponent(GroomComponent) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomSolverComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGroomSolverComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGroomSolverComponent:AddAssetUserDataOfClass(InUserDataClass) end

