---If a clothing simulation is able to be interacted with at runtime then a derived
---interactor should be created, and at least the basic API implemented for that
---simulation.
---Only write to the simulation and context during the call to Sync, as that is
---guaranteed to be a safe place to access this data.
---@class UClothingSimulationInteractor : UObject
---@field public ClothingInteractors TMap<string, UClothingInteractor> @Cloth interactors currently created.
local UClothingSimulationInteractor = {}

---Set the number of substeps or subdivisions.
---@param NumSubsteps integer @[opt] 
function UClothingSimulationInteractor:SetNumSubsteps(NumSubsteps) end

---Set the number of time dependent solver iterations.
---@param NumIterations integer @[opt] 
function UClothingSimulationInteractor:SetNumIterations(NumIterations) end

---Set the maximum number of solver iterations.
---@param MaxNumIterations integer @[opt] 
function UClothingSimulationInteractor:SetMaxNumIterations(MaxNumIterations) end

---Set the stiffness of the spring force for the animation drive.
---@param InStiffness number
function UClothingSimulationInteractor:SetAnimDriveSpringStiffness(InStiffness) end

---Called to update collision status without restarting the simulation.
function UClothingSimulationInteractor:PhysicsAssetUpdated() end

---Return the instant average simulation time in ms.
---@return number
function UClothingSimulationInteractor:GetSimulationTime() end

---Return the solver number of subdivisions./
---This could be different from the number set if the simulation hasn't updated yet.
---@return integer
function UClothingSimulationInteractor:GetNumSubsteps() end

---Return the number of kinematic (animated) particles.
---@return integer
function UClothingSimulationInteractor:GetNumKinematicParticles() end

---Return the solver number of iterations.
---This could be different from the number set if the simulation hasn't updated yet.
---@return integer
function UClothingSimulationInteractor:GetNumIterations() end

---Return the number of dynamic (simulated) particles.
---@return integer
function UClothingSimulationInteractor:GetNumDynamicParticles() end

---Return the number of cloths run by the simulation.
---@return integer
function UClothingSimulationInteractor:GetNumCloths() end

---Return a cloth interactor for this simulation.
---@param ClothingAssetName string
---@return UClothingInteractor
function UClothingSimulationInteractor:GetClothingInteractor(ClothingAssetName) end

---Set a new gravity override and enable the override.
---@param InVector FVector
function UClothingSimulationInteractor:EnableGravityOverride(InVector) end

---Disable any currently set gravity override.
function UClothingSimulationInteractor:DisableGravityOverride() end

---Called to update the cloth config without restarting the simulation.
function UClothingSimulationInteractor:ClothConfigUpdated() end

