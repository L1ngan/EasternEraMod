---@class FCRSimPointForce
---@field public ForceType ECRSimPointForceType @The type of force.
---@field public Vector FVector @The point / direction to use for the force. This is a direction for direction based forces, while this is a position for attractor / repel based forces.
---@field public Coefficient number @The strength of the force (a multiplier for direction based forces)
---@field public bNormalize boolean @If set to true the input vector will be normalized.
local FCRSimPointForce = {}
