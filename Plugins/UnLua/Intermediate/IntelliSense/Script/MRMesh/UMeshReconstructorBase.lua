---@class UMeshReconstructorBase : UObject
local UMeshReconstructorBase = {}

function UMeshReconstructorBase:StopReconstruction() end

function UMeshReconstructorBase:StartReconstruction() end

function UMeshReconstructorBase:PauseReconstruction() end

---@return boolean
function UMeshReconstructorBase:IsReconstructionStarted() end

---@return boolean
function UMeshReconstructorBase:IsReconstructionPaused() end

function UMeshReconstructorBase:DisconnectMRMesh() end

---@param Mesh UMRMeshComponent
function UMeshReconstructorBase:ConnectMRMesh(Mesh) end

