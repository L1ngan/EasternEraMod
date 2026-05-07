---Information about an overall collision, including contacts.
---@class FCollisionImpactData
---@field public ContactInfos TArray<FRigidBodyContactInfo> @All the contact points in the collision
---@field public TotalNormalImpulse FVector @The total impulse applied as the two objects push against each other
---@field public TotalFrictionImpulse FVector @The total counterimpulse applied of the two objects sliding against each other
---@field public bIsVelocityDeltaUnderThreshold boolean
local FCollisionImpactData = {}
