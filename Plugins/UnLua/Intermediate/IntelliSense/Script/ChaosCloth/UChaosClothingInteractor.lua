---@class UChaosClothingInteractor : UClothingInteractor
local UChaosClothingInteractor = {}

---@param Drag FVector2D @[opt] 
---@param Lift FVector2D @[opt] 
---@param AirDensity number @[opt] 
---@param WindVelocity FVector @[opt] 
---@param OuterDrag FVector2D @[opt] 
---@param OuterLift FVector2D @[opt] 
function UChaosClothingInteractor:SetWind(Drag, Lift, AirDensity, WindVelocity, OuterDrag, OuterLift) end

---@param LinearVelocityScale FVector @[opt] 
---@param AngularVelocityScale number @[opt] 
---@param FictitiousAngularScale number @[opt] 
function UChaosClothingInteractor:SetVelocityScale(LinearVelocityScale, AngularVelocityScale, FictitiousAngularScale) end

---@param bEnableLinearVelocityClamping boolean @[opt] 
---@param MaxLinearVelocity FVector @[opt] 
---@param bEnableLinearAccelerationClamping boolean @[opt] 
---@param MaxLinearAcceleration FVector @[opt] 
---@param bEnableAngularVelocityClamping boolean @[opt] 
---@param MaxAngularVelocity number @[opt] 
---@param bEnableAngularAccelerationClamping boolean @[opt] 
---@param MaxAngularAcceleration number @[opt] 
function UChaosClothingInteractor:SetVelocityClamps(bEnableLinearVelocityClamping, MaxLinearVelocity, bEnableLinearAccelerationClamping, MaxLinearAcceleration, bEnableAngularVelocityClamping, MaxAngularVelocity, bEnableAngularAccelerationClamping, MaxAngularAcceleration) end

---@param Pressure FVector2D @[opt] 
function UChaosClothingInteractor:SetPressure(Pressure) end

---@param EdgeStiffness number @[opt] 
---@param BendingStiffness number @[opt] 
---@param AreaStiffness number @[opt] 
function UChaosClothingInteractor:SetMaterialLinear(EdgeStiffness, BendingStiffness, AreaStiffness) end

---@param BucklingRatio FVector2D @[opt] 
---@param BucklingStiffness FVector2D @[opt] 
function UChaosClothingInteractor:SetMaterialBuckling(BucklingRatio, BucklingStiffness) end

---@param EdgeStiffness FVector2D @[opt] 
---@param BendingStiffness FVector2D @[opt] 
---@param AreaStiffness FVector2D @[opt] 
function UChaosClothingInteractor:SetMaterial(EdgeStiffness, BendingStiffness, AreaStiffness) end

---@param TetherStiffness number @[opt] 
---@param TetherScale number @[opt] 
function UChaosClothingInteractor:SetLongRangeAttachmentLinear(TetherStiffness, TetherScale) end

---@param TetherStiffness FVector2D @[opt] 
---@param TetherScale FVector2D @[opt] 
function UChaosClothingInteractor:SetLongRangeAttachment(TetherStiffness, TetherScale) end

---@param GravityScale number @[opt] 
---@param bIsGravityOverridden boolean @[opt] 
---@param GravityOverride FVector @[opt] 
function UChaosClothingInteractor:SetGravity(GravityScale, bIsGravityOverridden, GravityOverride) end

---@param DampingCoefficient number @[opt] 
---@param LocalDampingCoefficient number @[opt] 
function UChaosClothingInteractor:SetDamping(DampingCoefficient, LocalDampingCoefficient) end

---@param CollisionThickness number @[opt] 
---@param FrictionCoefficient number @[opt] 
---@param bUseCCD boolean @[opt] 
---@param SelfCollisionThickness number @[opt] 
function UChaosClothingInteractor:SetCollision(CollisionThickness, FrictionCoefficient, bUseCCD, SelfCollisionThickness) end

---@param bEnabled boolean @[opt] 
function UChaosClothingInteractor:SetBackstop(bEnabled) end

---@param AnimDriveStiffness number @[opt] 
function UChaosClothingInteractor:SetAnimDriveLinear(AnimDriveStiffness) end

---@param AnimDriveStiffness FVector2D @[opt] 
---@param AnimDriveDamping FVector2D @[opt] 
function UChaosClothingInteractor:SetAnimDrive(AnimDriveStiffness, AnimDriveDamping) end

---Deprecated. This function cannot set different Low and High values for the Drag and Lift weight maps. Use SetWind instead.
---@param DragCoefficient number @[opt] 
---@param LiftCoefficient number @[opt] 
---@param WindVelocity FVector @[opt] 
function UChaosClothingInteractor:SetAerodynamics(DragCoefficient, LiftCoefficient, WindVelocity) end

---@param bReset boolean @[opt] 
---@param bTeleport boolean @[opt] 
function UChaosClothingInteractor:ResetAndTeleport(bReset, bTeleport) end

