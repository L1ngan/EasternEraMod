---@class UConstraintSubsystem : UEngineSubsystem
---@field public OnConstraintAddedToSystem_BP MulticastDelegate @BP Delegate fired when constraints are added
---@field public OnConstraintRemovedFromSystem_BP MulticastDelegate @BP Delegate fired when constraints are removed
---@field private ConstraintsInWorld TArray<FConstraintsInWorld>
local UConstraintSubsystem = {}

---@param Mananger UConstraintSubsystem
---@param Constraint UTickableConstraint
---@param bDoNotCompensate boolean
function UConstraintSubsystem:OnConstraintRemovedFromSystem__DelegateSignature(Mananger, Constraint, bDoNotCompensate) end

---Dynamic blueprintable delegates for knowing when a constraints are added or deleted
---@param Mananger UConstraintSubsystem
---@param Constraint UTickableConstraint
function UConstraintSubsystem:OnConstraintAddedToSystem__DelegateSignature(Mananger, Constraint) end

