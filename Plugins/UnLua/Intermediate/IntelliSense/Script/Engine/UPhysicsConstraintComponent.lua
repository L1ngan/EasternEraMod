---This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component.
---@class UPhysicsConstraintComponent : USceneComponent
---@field public ConstraintActor1 AActor @Pointer to first Actor to constrain.
---@field public ComponentName1 FConstrainComponentPropName @Name of first component property to constrain. If Actor1 is NULL, will look within Owner. If this is NULL, will use RootComponent of Actor1
---@field public ConstraintActor2 AActor @Pointer to second Actor to constrain.
---@field public ComponentName2 FConstrainComponentPropName @Name of second component property to constrain. If Actor2 is NULL, will look within Owner. If this is NULL, will use RootComponent of Actor2
---@field public OnConstraintBroken MulticastDelegate @Notification when constraint is broken.
---@field public OnPlasticDeformation MulticastDelegate @Notification when constraint plasticity drive target changes.
---@field public ConstraintInstance FConstraintInstance @All constraint settings
local UPhysicsConstraintComponent = {}

---Set the projection settings for use when projection is enabled. See SetProjectionEnabled.
---For ragdolls you usually require that ProjectionLinearAlpha and ProjectionAngularAlpha be zero. They are most useful for cosmetic chains etc. ProjectionLinearTolerance and ProjectionAngularTolerance
---are emergency error recovery settings and should only rarely affect the simulation. If the simulation is significantly affected by the Tolerance settings, it likely indicates a setup stability issue.
---@param ProjectionLinearAlpha number
---@param ProjectionAngularAlpha number
---@param ProjectionLinearTolerance number
---@param ProjectionAngularTolerance number
function UPhysicsConstraintComponent:SetProjectionParams(ProjectionLinearAlpha, ProjectionAngularAlpha, ProjectionLinearTolerance, ProjectionAngularTolerance) end

---If true, joint projection is enabled. Projection is a semi-physics post-solve correction for fixing small errors, and a teleport for fixing larger errors. See SetProjectionParams
---@param bProjectionEnabled boolean
function UPhysicsConstraintComponent:SetProjectionEnabled(bProjectionEnabled) end

---Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param bEnableTwistDrive boolean
---@param bEnableSwingDrive boolean
function UPhysicsConstraintComponent:SetOrientationDriveTwistAndSwing(bEnableTwistDrive, bEnableSwingDrive) end

---Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP
---     @@param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP
---@param bEnableSLERP boolean
function UPhysicsConstraintComponent:SetOrientationDriveSLERP(bEnableSLERP) end

---Sets the LinearZ Motion Type
---     @@param ConstraintType   New Constraint Type
---     @@param LimitSize                Size of limit
---@param ConstraintType integer
---@param LimitSize number
function UPhysicsConstraintComponent:SetLinearZLimit(ConstraintType, LimitSize) end

---Sets the LinearY Motion Type
---     @@param ConstraintType   New Constraint Type
---     @@param LimitSize                Size of limit
---@param ConstraintType integer
---@param LimitSize number
function UPhysicsConstraintComponent:SetLinearYLimit(ConstraintType, LimitSize) end

---Sets the LinearX Motion Type
---     @@param ConstraintType   New Constraint Type
---     @@param LimitSize                Size of limit
---@param ConstraintType integer
---@param LimitSize number
function UPhysicsConstraintComponent:SetLinearXLimit(ConstraintType, LimitSize) end

---Sets the target velocity for the linear drive.
---    @@param InVelTarget              Target velocity
---@param InVelTarget FVector
function UPhysicsConstraintComponent:SetLinearVelocityTarget(InVelTarget) end

---Enables/Disables linear position drive
---    @@param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled
---    @@param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled
---    @@param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled
---@param bEnableDriveX boolean
---@param bEnableDriveY boolean
---@param bEnableDriveZ boolean
function UPhysicsConstraintComponent:SetLinearVelocityDrive(bEnableDriveX, bEnableDriveY, bEnableDriveZ) end

---Sets the target position for the linear drive.
---    @@param InPosTarget              Target position
---@param InPosTarget FVector
function UPhysicsConstraintComponent:SetLinearPositionTarget(InPosTarget) end

---Enables/Disables linear position drive
---    @@param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled
---    @@param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled
---    @@param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled
---@param bEnableDriveX boolean
---@param bEnableDriveY boolean
---@param bEnableDriveZ boolean
function UPhysicsConstraintComponent:SetLinearPositionDrive(bEnableDriveX, bEnableDriveY, bEnableDriveZ) end

---Sets the Linear Plasticity properties
---     @@param bLinearPlasticity                    Whether it is possible to reset the target angle from the Linear displacement
---     @@param LinearPlasticityThreshold        Percent deformation needed to reset the rest length of the joint
---@param bLinearPlasticity boolean
---@param LinearPlasticityThreshold number
---@param PlasticityType integer
function UPhysicsConstraintComponent:SetLinearPlasticity(bLinearPlasticity, LinearPlasticityThreshold, PlasticityType) end

---Sets the drive params for the linear drive.
---    @@param PositionStrength         Positional strength for the drive (stiffness)
---    @@param VelocityStrength         Velocity strength of the drive (damping)
---    @@param InForceLimit     Max force applied by the drive
---@param PositionStrength number
---@param VelocityStrength number
---@param InForceLimit number
function UPhysicsConstraintComponent:SetLinearDriveParams(PositionStrength, VelocityStrength, InForceLimit) end

---Toggles the linear drive acceleration mode. When enabled, the acceleration of the angular drive is not affected by the inertia of the constrained objects along the drive axis.
---@param bAccelerationMode boolean
function UPhysicsConstraintComponent:SetLinearDriveAccelerationMode(bAccelerationMode) end

---Sets the Linear Breakable properties
---     @@param bLinearBreakable         Whether it is possible to break the joint with linear force
---     @@param LinearBreakThreshold     Force needed to break the joint
---@param bLinearBreakable boolean
---@param LinearBreakThreshold number
function UPhysicsConstraintComponent:SetLinearBreakable(bLinearBreakable, LinearBreakThreshold) end

---If true, the collision between the two rigid bodies of the constraint will be disabled.
---@param bDisableCollision boolean
function UPhysicsConstraintComponent:SetDisableCollision(bDisableCollision) end

---Sets the contact transfer scale properties
---     @@param ContactTransferScale                Set the contact transfer scale for the parent of the joint
---@param ContactTransferScale number
function UPhysicsConstraintComponent:SetContactTransferScale(ContactTransferScale) end

---Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.
---@param Frame integer
---@param RefPosition FVector
function UPhysicsConstraintComponent:SetConstraintReferencePosition(Frame, RefPosition) end

---Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.
---@param Frame integer
---@param PriAxis FVector
---@param SecAxis FVector
function UPhysicsConstraintComponent:SetConstraintReferenceOrientation(Frame, PriAxis, SecAxis) end

---Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.
---@param Frame integer
---@param RefFrame FTransform
function UPhysicsConstraintComponent:SetConstraintReferenceFrame(Frame, RefFrame) end

---Directly specify component to connect. Will update frames based on current position.
---@param Component1 UPrimitiveComponent
---@param BoneName1 string
---@param Component2 UPrimitiveComponent
---@param BoneName2 string
function UPhysicsConstraintComponent:SetConstrainedComponents(Component1, BoneName1, Component2, BoneName2) end

---Sets the target velocity for the angular drive.
---    @@param InVelTarget              Target velocity
---@param InVelTarget FVector
function UPhysicsConstraintComponent:SetAngularVelocityTarget(InVelTarget) end

---Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param bEnableTwistDrive boolean
---@param bEnableSwingDrive boolean
function UPhysicsConstraintComponent:SetAngularVelocityDriveTwistAndSwing(bEnableTwistDrive, bEnableSwingDrive) end

---Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP
---     @@param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP
---@param bEnableSLERP boolean
function UPhysicsConstraintComponent:SetAngularVelocityDriveSLERP(bEnableSLERP) end

---@param bEnableSwingDrive boolean
---@param bEnableTwistDrive boolean
function UPhysicsConstraintComponent:SetAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive) end

---Sets the Angular Twist Motion Type
---     @@param ConstraintType   New Constraint Type
---     @@param TwistLimitAngle  Size of limit in degrees
---@param ConstraintType integer
---@param TwistLimitAngle number
function UPhysicsConstraintComponent:SetAngularTwistLimit(ConstraintType, TwistLimitAngle) end

---Sets the Angular Swing2 Motion Type
---     @@param ConstraintType   New Constraint Type
---     @@param Swing2LimitAngle Size of limit in degrees
---@param MotionType integer
---@param Swing2LimitAngle number
function UPhysicsConstraintComponent:SetAngularSwing2Limit(MotionType, Swing2LimitAngle) end

---Sets the Angular Swing1 Motion Type
---     @@param ConstraintType   New Constraint Type
---     @@param Swing1LimitAngle Size of limit in degrees
---@param MotionType integer
---@param Swing1LimitAngle number
function UPhysicsConstraintComponent:SetAngularSwing1Limit(MotionType, Swing1LimitAngle) end

---Sets the Angular Plasticity properties
---     @@param bAngularPlasticity               Whether it is possible to reset the target angle from the angular displacement
---     @@param AngularPlasticityThreshold       Degrees needed to reset the rest state of the joint
---@param bAngularPlasticity boolean
---@param AngularPlasticityThreshold number
function UPhysicsConstraintComponent:SetAngularPlasticity(bAngularPlasticity, AngularPlasticityThreshold) end

---Sets the target orientation for the angular drive.
---    @@param InPosTarget              Target orientation
---@param InPosTarget FRotator
function UPhysicsConstraintComponent:SetAngularOrientationTarget(InPosTarget) end

---Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing
---    @@param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---    @@param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param bEnableSwingDrive boolean
---@param bEnableTwistDrive boolean
function UPhysicsConstraintComponent:SetAngularOrientationDrive(bEnableSwingDrive, bEnableTwistDrive) end

---Sets the drive params for the angular drive.
---    @@param PositionStrength         Positional strength for the drive (stiffness)
---    @@param VelocityStrength         Velocity strength of the drive (damping)
---    @@param InForceLimit     Max force applied by the drive
---@param PositionStrength number
---@param VelocityStrength number
---@param InForceLimit number
function UPhysicsConstraintComponent:SetAngularDriveParams(PositionStrength, VelocityStrength, InForceLimit) end

---Switches the angular drive mode between SLERP and Twist And Swing
---     @@param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock
---@param DriveMode integer
function UPhysicsConstraintComponent:SetAngularDriveMode(DriveMode) end

---Toggles the angular drive acceleration mode. When enabled, the acceleration of the angular drive is not affected by the inertia of the constrained objects around the drive axis.
---@param bAccelerationMode boolean
function UPhysicsConstraintComponent:SetAngularDriveAccelerationMode(bAccelerationMode) end

---Sets the Angular Breakable properties
---     @@param bAngularBreakable                Whether it is possible to break the joint with angular force
---     @@param AngularBreakThreshold    Torque needed to break the joint
---@param bAngularBreakable boolean
---@param AngularBreakThreshold number
function UPhysicsConstraintComponent:SetAngularBreakable(bAngularBreakable, AngularBreakThreshold) end

---Is projection enabled. See SetProjectionEnabled
---@return boolean
function UPhysicsConstraintComponent:IsProjectionEnabled() end

---Retrieve the status of constraint being broken.
---@return boolean
function UPhysicsConstraintComponent:IsBroken() end

---Gets the current Angular Twist of the constraint
---@return number
function UPhysicsConstraintComponent:GetCurrentTwist() end

---Gets the current Swing2 of the constraint
---@return number
function UPhysicsConstraintComponent:GetCurrentSwing2() end

---Gets the current Swing1 of the constraint
---@return number
function UPhysicsConstraintComponent:GetCurrentSwing1() end

---Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken.
---@param OutLinearForce FVector @[out] 
---@param OutAngularForce FVector @[out] 
function UPhysicsConstraintComponent:GetConstraintForce(OutLinearForce, OutAngularForce) end

---Gets the constraint object
---@return FConstraintInstanceAccessor
function UPhysicsConstraintComponent:GetConstraint() end

---Get connected components and potential related attachement bones
---@param OutComponent1 UPrimitiveComponent @[out] 
---@param OutBoneName1 string @[out] 
---@param OutComponent2 UPrimitiveComponent @[out] 
---@param OutBoneName2 string @[out] 
function UPhysicsConstraintComponent:GetConstrainedComponents(OutComponent1, OutBoneName1, OutComponent2, OutBoneName2) end

---Break this constraint
function UPhysicsConstraintComponent:BreakConstraint() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicsConstraintComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPhysicsConstraintComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicsConstraintComponent:AddAssetUserDataOfClass(InUserDataClass) end

