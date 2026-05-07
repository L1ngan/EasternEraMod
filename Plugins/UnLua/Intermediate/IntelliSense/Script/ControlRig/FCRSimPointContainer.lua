---@class FCRSimPointContainer : FCRSimContainer
---@field public Points TArray<FRigVMSimPoint> @The points within the simulation
---@field public Springs TArray<FCRSimLinearSpring> @The springs within the simulation
---@field public Forces TArray<FCRSimPointForce> @The forces to apply to the points
---@field public CollisionVolumes TArray<FCRSimSoftCollision> @The collision volumes for the simulation
---@field public Constraints TArray<FCRSimPointConstraint> @The constraints within the simulation
---@field protected PreviousStep TArray<FRigVMSimPoint>
local FCRSimPointContainer = {}
