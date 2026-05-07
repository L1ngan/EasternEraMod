---Component used to copy the bounds of another Actor.
---@class UBoundsCopyComponent : UActorComponent
---@field public BoundsSourceActor TSoftObjectPtr<AActor> @Actor to copy the bounds from to set up the transform.
---@field public bUseCollidingComponentsForSourceBounds boolean @If true, the source actor's bounds will include its colliding components bounds.
---@field public bKeepOwnBoundsScale boolean @If true, the actor's scale will be changed so that after adjustment, its own bounds match the source bounds.
---@field public bUseCollidingComponentsForOwnBounds boolean @If true, the actor's own bounds will include its colliding components bounds.
---@field public PostTransform FTransform @Transform to apply to final result.
---@field public bCopyXBounds boolean
---@field public bCopyYBounds boolean
---@field public bCopyZBounds boolean
local UBoundsCopyComponent = {}

---Set this component transform to include the BoundsSourceActor bounds
function UBoundsCopyComponent:SetTransformToBounds() end

---Copy the rotation from BoundsSourceActor to this component
function UBoundsCopyComponent:SetRotation() end

