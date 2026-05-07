---UTickableTransformConstraint
---@class UTickableTransformConstraint : UTickableConstraint
---@field public ParentTRSHandle UTransformableHandle @The transformable handle representing the parent of that constraint.
---@field public ChildTRSHandle UTransformableHandle @The transformable handle representing the child of that constraint.
---@field public bMaintainOffset boolean @Should that constraint maintain the default offset.
---@field public Weight number @Defines how much the constraint will be applied. // UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Weight", meta = (Input, ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0")) //@@benoit when not EditAnywhere?
---@field public bDynamicOffset boolean @Should the child be able to change it's offset dynamically.
---@field protected Type ETransformConstraintType @Defines the constraint's type (Position, Parent, Aim...).
local UTickableTransformConstraint = {}

