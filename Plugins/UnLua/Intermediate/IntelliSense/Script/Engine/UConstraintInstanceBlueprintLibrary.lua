---@class UConstraintInstanceBlueprintLibrary : UBlueprintFunctionLibrary
local UConstraintInstanceBlueprintLibrary = {}

---Sets projection parameters of the constraint
---     @@param Accessor                                 Constraint accessor to change
---     @@param bEnableProjection                true to enable projection
---     @@param ProjectionLinearAlpha    how much linear projection to apply in [0,1] range
---     @@param ProjectionAngularAlpha   how much angular projection to apply in [0,1] range
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableProjection boolean
---@param ProjectionLinearAlpha number
---@param ProjectionAngularAlpha number
function UConstraintInstanceBlueprintLibrary.SetProjectionParams(Accessor, bEnableProjection, ProjectionLinearAlpha, ProjectionAngularAlpha) end

---Sets whether the parent body is not affected by it's child motion
---     @@param Accessor                         Constraint accessor to change
---     @@param bParentDominates         true to avoid the parent being affected by its child motion
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bParentDominates boolean
function UConstraintInstanceBlueprintLibrary.SetParentDominates(Accessor, bParentDominates) end

---Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param Accessor                         Constraint accessor to change
---     @@param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableTwistDrive boolean
---@param bEnableSwingDrive boolean
function UConstraintInstanceBlueprintLibrary.SetOrientationDriveTwistAndSwing(Accessor, bEnableTwistDrive, bEnableSwingDrive) end

---Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP
---     @@param Accessor                         Constraint accessor to change
---     @@param bEnableSLERP                     Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableSLERP boolean
function UConstraintInstanceBlueprintLibrary.SetOrientationDriveSLERP(Accessor, bEnableSLERP) end

---
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableMassConditioning boolean
function UConstraintInstanceBlueprintLibrary.SetMassConditioningEnabled(Accessor, bEnableMassConditioning) end

---Sets the target velocity for the linear drive.
---     @@param Accessor                         Constraint accessor to change
---     @@param InVelTarget                      Target velocity
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param InVelTarget FVector
function UConstraintInstanceBlueprintLibrary.SetLinearVelocityTarget(Accessor, InVelTarget) end

---Enables/Disables linear velocity drive
---     @@param Accessor                         Constraint accessor to change
---     @@param bEnableDriveX            Indicates whether the drive for the X-Axis should be enabled
---     @@param bEnableDriveY            Indicates whether the drive for the Y-Axis should be enabled
---     @@param bEnableDriveZ            Indicates whether the drive for the Z-Axis should be enabled
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableDriveX boolean
---@param bEnableDriveY boolean
---@param bEnableDriveZ boolean
function UConstraintInstanceBlueprintLibrary.SetLinearVelocityDrive(Accessor, bEnableDriveX, bEnableDriveY, bEnableDriveZ) end

---Sets Constraint Linear Soft Limit parameters
---     @@param Accessor                                         Constraint accessor to change
---*     @@param bSoftLinearLimit                         True is the linear limit is soft
---     @@param LinearLimitStiffness                     Stiffness of the soft linear limit. Only used when Soft limit is on ( positive value )
---     @@param LinearLimitDamping                       Damping of the soft linear limit. Only used when Soft limit is on ( positive value )
--- @@param LinearLimitRestitution               Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---     @@param LinearLimitContactDistance       Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bSoftLinearLimit boolean
---@param LinearLimitStiffness number
---@param LinearLimitDamping number
---@param LinearLimitRestitution number
---@param LinearLimitContactDistance number
function UConstraintInstanceBlueprintLibrary.SetLinearSoftLimitParams(Accessor, bSoftLinearLimit, LinearLimitStiffness, LinearLimitDamping, LinearLimitRestitution, LinearLimitContactDistance) end

---Sets the target position for the linear drive.
---     @@param Accessor                         Constraint accessor to change
---     @@param InPosTarget                      Target position
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param InPosTarget FVector
function UConstraintInstanceBlueprintLibrary.SetLinearPositionTarget(Accessor, InPosTarget) end

---Enables/Disables linear position drive
---     @@param Accessor                         Constraint accessor to change
---     @@param bEnableDriveX            Indicates whether the drive for the X-Axis should be enabled
---     @@param bEnableDriveY            Indicates whether the drive for the Y-Axis should be enabled
---     @@param bEnableDriveZ            Indicates whether the drive for the Z-Axis should be enabled
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableDriveX boolean
---@param bEnableDriveY boolean
---@param bEnableDriveZ boolean
function UConstraintInstanceBlueprintLibrary.SetLinearPositionDrive(Accessor, bEnableDriveX, bEnableDriveY, bEnableDriveZ) end

---Sets Constraint Linear Plasticity properties
---     @@param Accessor                                         Constraint accessor to change
---     @@param bLinearPlasticity                        Whether it is possible to reset the target position from the linear displacement
---     @@param LinearPlasticityThreshold        Delta from target needed to reset the target joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bLinearPlasticity boolean
---@param LinearPlasticityThreshold number
---@param PlasticityType integer
function UConstraintInstanceBlueprintLibrary.SetLinearPlasticity(Accessor, bLinearPlasticity, LinearPlasticityThreshold, PlasticityType) end

---Sets Constraint Linear Motion Ranges
---     @@param Accessor Constraint accessor to change
---     @@param XMotion  Type of motion along the X axis
---     @@param YMotion  Type of motion along the Y axis
---     @@param ZMotion  Type of motion along the Z axis
---     @@param Limit    linear limit to apply to all axis
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param XMotion integer
---@param YMotion integer
---@param ZMotion integer
---@param Limit number
function UConstraintInstanceBlueprintLibrary.SetLinearLimits(Accessor, XMotion, YMotion, ZMotion, Limit) end

---Sets the drive params for the linear drive.
---     @@param Accessor                         Constraint accessor to change
---     @@param PositionStrength         Positional strength for the drive (stiffness)
---     @@param VelocityStrength         Velocity strength of the drive (damping)
---     @@param InForceLimit                     Max force applied by the drive
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param PositionStrength number
---@param VelocityStrength number
---@param InForceLimit number
function UConstraintInstanceBlueprintLibrary.SetLinearDriveParams(Accessor, PositionStrength, VelocityStrength, InForceLimit) end

---Sets the Linear Breakable properties
---     @@param Accessor                         Constraint accessor to change
---     @@param bLinearBreakable         Whether it is possible to break the joint with linear force
---     @@param LinearBreakThreshold     Force needed to break the joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bLinearBreakable boolean
---@param LinearBreakThreshold number
function UConstraintInstanceBlueprintLibrary.SetLinearBreakable(Accessor, bLinearBreakable, LinearBreakThreshold) end

---Sets whether bodies attched to the constraint can collide or not
---     @@param Accessor                         Constraint accessor to change
---     @@param bDisableCollision        true to disable collision between constrained bodies
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bDisableCollision boolean
function UConstraintInstanceBlueprintLibrary.SetDisableCollision(Accessor, bDisableCollision) end

---Set Contact Transfer Scale
---     @@param Accessor                                         Constraint accessor to change
---     @@param ContactTransferScale                     Set Contact Transfer Scale onto joints parent
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param ContactTransferScale number
function UConstraintInstanceBlueprintLibrary.SetContactTransferScale(Accessor, ContactTransferScale) end

---Sets the target velocity for the angular drive.
---     @@param Accessor                         Constraint accessor to change
---     @@param InVelTarget                      Target velocity
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param InVelTarget FVector
function UConstraintInstanceBlueprintLibrary.SetAngularVelocityTarget(Accessor, InVelTarget) end

---Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param Accessor                         Constraint accessor to change
---     @@param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableTwistDrive boolean
---@param bEnableSwingDrive boolean
function UConstraintInstanceBlueprintLibrary.SetAngularVelocityDriveTwistAndSwing(Accessor, bEnableTwistDrive, bEnableSwingDrive) end

---Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP
---     @@param Accessor                         Constraint accessor to change
---     @@param bEnableSLERP                     Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableSLERP boolean
function UConstraintInstanceBlueprintLibrary.SetAngularVelocityDriveSLERP(Accessor, bEnableSLERP) end

---Sets Constraint Angular Soft Twist Limit parameters
---     @@param Accessor                                         Constraint accessor to change
---*     @@param bSoftTwistLimit                          True is the twist limit is soft
---     @@param TwistLimitStiffness                      Stiffness of the soft Twist limit. Only used when Soft limit is on ( positive value )
---     @@param TwistLimitDamping                        Damping of the soft Twist limit. Only used when Soft limit is on ( positive value )
--- @@param TwistLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---     @@param TwistLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bSoftTwistLimit boolean
---@param TwistLimitStiffness number
---@param TwistLimitDamping number
---@param TwistLimitRestitution number
---@param TwistLimitContactDistance number
function UConstraintInstanceBlueprintLibrary.SetAngularSoftTwistLimitParams(Accessor, bSoftTwistLimit, TwistLimitStiffness, TwistLimitDamping, TwistLimitRestitution, TwistLimitContactDistance) end

---Sets Constraint Angular Soft Swing Limit parameters
---     @@param Accessor                                         Constraint accessor to change
---*     @@param bSoftSwingLimit                          True is the swing limit is soft
---     @@param SwingLimitStiffness                      Stiffness of the soft swing limit. Only used when Soft limit is on ( positive value )
---     @@param SwingLimitDamping                        Damping of the soft swing limit. Only used when Soft limit is on ( positive value )
--- @@param SwingLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---     @@param SwingLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bSoftSwingLimit boolean
---@param SwingLimitStiffness number
---@param SwingLimitDamping number
---@param SwingLimitRestitution number
---@param SwingLimitContactDistance number
function UConstraintInstanceBlueprintLibrary.SetAngularSoftSwingLimitParams(Accessor, bSoftSwingLimit, SwingLimitStiffness, SwingLimitDamping, SwingLimitRestitution, SwingLimitContactDistance) end

---Sets Constraint Angular Plasticity properties
---     @@param Accessor                                         Constraint accessor to change
---     @@param bAngularPlasticity                       Whether it is possible to reset the target angle from the angular displacement
---     @@param AngularPlasticityThreshold       Degrees needed to reset the rest state of the joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bAngularPlasticity boolean
---@param AngularPlasticityThreshold number
function UConstraintInstanceBlueprintLibrary.SetAngularPlasticity(Accessor, bAngularPlasticity, AngularPlasticityThreshold) end

---Sets the target orientation for the angular drive.
---     @@param Accessor                         Constraint accessor to change
---     @@param InPosTarget                      Target orientation
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param InPosTarget FRotator
function UConstraintInstanceBlueprintLibrary.SetAngularOrientationTarget(Accessor, InPosTarget) end

---Sets COnstraint Angular Motion Ranges
---     @@param Accessor                         Constraint accessor to change
---     @@param Swing1MotionType         Type of swing motion ( first axis )
---     @@param Swing1LimitAngle         Size of limit in degrees in [0, 180] range
--- @@param Swing2MotionType             Type of swing motion ( second axis )
---     @@param Swing2LimitAngle         Size of limit in degrees in [0, 180] range
--- @@param TwistMotionType              Type of twist motion
---     @@param TwistLimitAngle          Size of limit in degrees in [0, 180] range
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param Swing1MotionType integer
---@param Swing1LimitAngle number
---@param Swing2MotionType integer
---@param Swing2LimitAngle number
---@param TwistMotionType integer
---@param TwistLimitAngle number
function UConstraintInstanceBlueprintLibrary.SetAngularLimits(Accessor, Swing1MotionType, Swing1LimitAngle, Swing2MotionType, Swing2LimitAngle, TwistMotionType, TwistLimitAngle) end

---Sets the drive params for the angular drive.
---     @@param Accessor                         Constraint accessor to change
---     @@param PositionStrength         Positional strength for the drive (stiffness)
---     @@param VelocityStrength         Velocity strength of the drive (damping)
---     @@param InForceLimit                     Max force applied by the drive
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param PositionStrength number
---@param VelocityStrength number
---@param InForceLimit number
function UConstraintInstanceBlueprintLibrary.SetAngularDriveParams(Accessor, PositionStrength, VelocityStrength, InForceLimit) end

---Switches the angular drive mode between SLERP and Twist And Swing
---     @@param Accessor         Constraint accessor to change
---     @@param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param DriveMode integer
function UConstraintInstanceBlueprintLibrary.SetAngularDriveMode(Accessor, DriveMode) end

---Sets Constraint Angular Breakable properties
---     @@param Accessor                                 Constraint accessor to change
---     @@param bAngularBreakable                Whether it is possible to break the joint with angular force
---     @@param AngularBreakThreshold    Torque needed to break the joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bAngularBreakable boolean
---@param AngularBreakThreshold number
function UConstraintInstanceBlueprintLibrary.SetAngularBreakable(Accessor, bAngularBreakable, AngularBreakThreshold) end

---Gets projection parameters of the constraint
---     @@param Accessor                                 Constraint accessor to query
---     @@param bEnableProjection                true to enable projection
---     @@param ProjectionLinearAlpha    how much linear projection to apply in [0,1] range
---     @@param ProjectionAngularAlpha   how much angular projection to apply in [0,1] range
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bEnableProjection boolean @[out] 
---@param ProjectionLinearAlpha number @[out] 
---@param ProjectionAngularAlpha number @[out] 
function UConstraintInstanceBlueprintLibrary.GetProjectionParams(Accessor, bEnableProjection, ProjectionLinearAlpha, ProjectionAngularAlpha) end

---Gets whether the parent body is not affected by it's child motion
---     @@param Accessor Constraint accessor to query
---@param Accessor FConstraintInstanceAccessor @[out] 
---@return boolean
function UConstraintInstanceBlueprintLibrary.GetParentDominates(Accessor) end

---Gets whether angular orientation drive are enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param Accessor                         Constraint accessor to query
---     @@param bOutEnableTwistDrive     Indicates whether the drive for the twist axis is enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param bOutEnableSwingDrive     Indicates whether the drive for the swing axis is enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bOutEnableTwistDrive boolean @[out] 
---@param bOutEnableSwingDrive boolean @[out] 
function UConstraintInstanceBlueprintLibrary.GetOrientationDriveTwistAndSwing(Accessor, bOutEnableTwistDrive, bOutEnableSwingDrive) end

---Gets whether the angular orientation slerp drive is enabled or not. Only relevant if the AngularDriveMode is set to SLERP
---     @@param Accessor                         Constraint accessor to query
---     @@param bOutEnableSLERP          Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bOutEnableSLERP boolean @[out] 
function UConstraintInstanceBlueprintLibrary.GetOrientationDriveSLERP(Accessor, bOutEnableSLERP) end

---
---@param Accessor FConstraintInstanceAccessor @[out] 
---@return boolean
function UConstraintInstanceBlueprintLibrary.GetMassConditioningEnabled(Accessor) end

---Gets the target velocity for the linear drive.
---     @@param Accessor                         Constraint accessor to query
---     @@param OutVelTarget                     Target velocity
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutVelTarget FVector @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearVelocityTarget(Accessor, OutVelTarget) end

---Gets whether linear velocity drive is enabled or not
---     @@param Accessor                         Constraint accessor to query
---     @@param bOutEnableDriveX         Indicates whether the drive for the X-Axis is enabled
---     @@param bOutEnableDriveY         Indicates whether the drive for the Y-Axis is enabled
---     @@param bOutEnableDriveZ         Indicates whether the drive for the Z-Axis is enabled
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bOutEnableDriveX boolean @[out] 
---@param bOutEnableDriveY boolean @[out] 
---@param bOutEnableDriveZ boolean @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearVelocityDrive(Accessor, bOutEnableDriveX, bOutEnableDriveY, bOutEnableDriveZ) end

---Gets Constraint Linear Soft Limit parameters
---     @@param Accessor                                         Constraint accessor to query
---*     @@param bSoftLinearLimit                         True is the Linear limit is soft
---     @@param LinearLimitStiffness                     Stiffness of the soft Linear limit. Only used when Soft limit is on ( positive value )
---     @@param LinearLimitDamping                       Damping of the soft Linear limit. Only used when Soft limit is on ( positive value )
--- @@param LinearLimitRestitution               Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---     @@param LinearLimitContactDistance       Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bSoftLinearLimit boolean @[out] 
---@param LinearLimitStiffness number @[out] 
---@param LinearLimitDamping number @[out] 
---@param LinearLimitRestitution number @[out] 
---@param LinearLimitContactDistance number @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearSoftLimitParams(Accessor, bSoftLinearLimit, LinearLimitStiffness, LinearLimitDamping, LinearLimitRestitution, LinearLimitContactDistance) end

---Gets the target position for the linear drive.
---     @@param Accessor                         Constraint accessor to query
---     @@param OutPosTarget                     Target position
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutPosTarget FVector @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearPositionTarget(Accessor, OutPosTarget) end

---Gets whether linear position drive is enabled or not
---     @@param Accessor                         Constraint accessor to query
---     @@param bOutEnableDriveX         Indicates whether the drive for the X-Axis is enabled
---     @@param bOutEnableDriveY         Indicates whether the drive for the Y-Axis is enabled
---     @@param bOutEnableDriveZ         Indicates whether the drive for the Z-Axis is enabled
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bOutEnableDriveX boolean @[out] 
---@param bOutEnableDriveY boolean @[out] 
---@param bOutEnableDriveZ boolean @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearPositionDrive(Accessor, bOutEnableDriveX, bOutEnableDriveY, bOutEnableDriveZ) end

---Gets Constraint Linear Plasticity properties
---     @@param Accessor                                         Constraint accessor to query
---     @@param bAngularPlasticity                       Whether it is possible to reset the target position from the linear displacement
---     @@param AngularPlasticityThreshold       Delta from target needed to reset the target joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bLinearPlasticity boolean @[out] 
---@param LinearPlasticityThreshold number @[out] 
---@param PlasticityType integer @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearPlasticity(Accessor, bLinearPlasticity, LinearPlasticityThreshold, PlasticityType) end

---Gets Constraint Linear Motion Ranges
---     @@param Accessor Constraint accessor to query
---     @@param XMotion  Type of motion along the X axis
---     @@param YMotion  Type of motion along the Y axis
---     @@param ZMotion  Type of motion along the Z axis
---     @@param Limit    linear limit applied to all axis
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param XMotion integer @[out] 
---@param YMotion integer @[out] 
---@param ZMotion integer @[out] 
---@param Limit number @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearLimits(Accessor, XMotion, YMotion, ZMotion, Limit) end

---Gets the drive params for the linear drive.
---     @@param Accessor                         Constraint accessor to query
---     @@param OutPositionStrength      Positional strength for the drive (stiffness)
---     @@param OutVelocityStrength      Velocity strength of the drive (damping)
---     @@param OutForceLimit            Max force applied by the drive
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutPositionStrength number @[out] 
---@param OutVelocityStrength number @[out] 
---@param OutForceLimit number @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearDriveParams(Accessor, OutPositionStrength, OutVelocityStrength, OutForceLimit) end

---Gets Constraint Linear Breakable properties
---     @@param Accessor                         Constraint accessor to query
---     @@param bLinearBreakable         Whether it is possible to break the joint with linear force
---     @@param LinearBreakThreshold     Force needed to break the joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bLinearBreakable boolean @[out] 
---@param LinearBreakThreshold number @[out] 
function UConstraintInstanceBlueprintLibrary.GetLinearBreakable(Accessor, bLinearBreakable, LinearBreakThreshold) end

---Gets whether bodies attched to the constraint can collide or not
---     @@param Accessor         Constraint accessor to query
---@param Accessor FConstraintInstanceAccessor @[out] 
---@return boolean
function UConstraintInstanceBlueprintLibrary.GetDisableCollsion(Accessor) end

---Gets Constraint Contact Transfer Scale properties
---     @@param Accessor                                         Constraint accessor to query
---     @@param ContactTransferScale                     Scale for transfer of child energy to parent.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param ContactTransferScale number @[out] 
function UConstraintInstanceBlueprintLibrary.GetContactTransferScale(Accessor, ContactTransferScale) end

---Gets Attached body names
---     @@param Accessor         Constraint accessor to query
---     @@param ParentBody       Parent body name of the constraint
---     @@param ChildBody        Child body name of the constraint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param ParentBody string @[out] 
---@param ChildBody string @[out] 
function UConstraintInstanceBlueprintLibrary.GetAttachedBodyNames(Accessor, ParentBody, ChildBody) end

---Gets the target velocity for the angular drive.
---     @@param Accessor                         Constraint accessor to query
---     @@param OutVelTarget                     Target velocity
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutVelTarget FVector @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularVelocityTarget(Accessor, OutVelTarget) end

---Gets whether angular velocity twist and swing drive is enabled or not. Only relevant if the AngularDriveMode is set to Twist and Swing
---     @@param Accessor                         Constraint accessor to query
---     @@param bOutEnableTwistDrive     Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
--- @@param bOutEnableSwingDrive Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bOutEnableTwistDrive boolean @[out] 
---@param bOutEnableSwingDrive boolean @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularVelocityDriveTwistAndSwing(Accessor, bOutEnableTwistDrive, bOutEnableSwingDrive) end

---Gets whether the angular velocity slerp drive is enabled or not. Only relevant if the AngularDriveMode is set to SLERP
---     @@param Accessor                         Constraint accessor to query
---     @@param bOutEnableSLERP          Indicates whether the SLERP drive is enabled. Only relevant if the AngularDriveMode is set to SLERP
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bOutEnableSLERP boolean @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularVelocityDriveSLERP(Accessor, bOutEnableSLERP) end

---Gets Constraint Angular Soft Twist Limit parameters
---     @@param Accessor                                         Constraint accessor to query
---*     @@param bSoftTwistLimit                          True is the Twist limit is soft
---     @@param TwistLimitStiffness                      Stiffness of the soft Twist limit. Only used when Soft limit is on ( positive value )
---     @@param TwistLimitDamping                        Damping of the soft Twist limit. Only used when Soft limit is on ( positive value )
--- @@param TwistLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---     @@param TwistLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bSoftTwistLimit boolean @[out] 
---@param TwistLimitStiffness number @[out] 
---@param TwistLimitDamping number @[out] 
---@param TwistLimitRestitution number @[out] 
---@param TwistLimitContactDistance number @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularSoftTwistLimitParams(Accessor, bSoftTwistLimit, TwistLimitStiffness, TwistLimitDamping, TwistLimitRestitution, TwistLimitContactDistance) end

---Gets Constraint Angular Soft Swing Limit parameters
---     @@param Accessor                                         Constraint accessor to query
---*     @@param bSoftSwingLimit                          True is the swing limit is soft
---     @@param SwingLimitStiffness                      Stiffness of the soft swing limit. Only used when Soft limit is on ( positive value )
---     @@param SwingLimitDamping                        Damping of the soft swing limit. Only used when Soft limit is on ( positive value )
--- @@param SwingLimitRestitution                Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead.
---     @@param SwingLimitContactDistance        Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate.
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bSoftSwingLimit boolean @[out] 
---@param SwingLimitStiffness number @[out] 
---@param SwingLimitDamping number @[out] 
---@param SwingLimitRestitution number @[out] 
---@param SwingLimitContactDistance number @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularSoftSwingLimitParams(Accessor, bSoftSwingLimit, SwingLimitStiffness, SwingLimitDamping, SwingLimitRestitution, SwingLimitContactDistance) end

---Sets Constraint Angular Plasticity properties
---     @@param Accessor                                         Constraint accessor to query
---     @@param bAngularPlasticity                       Whether it is possible to reset the target angle from the angular displacement
---     @@param AngularPlasticityThreshold       Degrees needed to reset the rest state of the joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bAngularPlasticity boolean @[out] 
---@param AngularPlasticityThreshold number @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularPlasticity(Accessor, bAngularPlasticity, AngularPlasticityThreshold) end

---Gets the target orientation for the angular drive.
---     @@param Accessor                         Constraint accessor to query
---     @@param OutPosTarget                     Target orientation
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutPosTarget FRotator @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularOrientationTarget(Accessor, OutPosTarget) end

---Gets Constraint Angular Motion Ranges
---     @@param Accessor                         Constraint accessor to query
---     @@param Swing1MotionType         Type of swing motion ( first axis )
---     @@param Swing1LimitAngle         Size of limit in degrees in [0, 180] range
--- @@param Swing2MotionType             Type of swing motion ( second axis )
---     @@param Swing2LimitAngle         Size of limit in degrees in [0, 180] range
--- @@param TwistMotionType              Type of twist motion
---     @@param TwistLimitAngle          Size of limit in degrees in [0, 180] range
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param Swing1MotionType integer @[out] 
---@param Swing1LimitAngle number @[out] 
---@param Swing2MotionType integer @[out] 
---@param Swing2LimitAngle number @[out] 
---@param TwistMotionType integer @[out] 
---@param TwistLimitAngle number @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularLimits(Accessor, Swing1MotionType, Swing1LimitAngle, Swing2MotionType, Swing2LimitAngle, TwistMotionType, TwistLimitAngle) end

---Gets the drive params for the angular drive.
---     @@param Accessor                         Constraint accessor to query
---     @@param OutPositionStrength      Positional strength for the drive (stiffness)
---     @@param OutVelocityStrength      Velocity strength of the drive (damping)
---     @@param OutForceLimit            Max force applied by the drive
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutPositionStrength number @[out] 
---@param OutVelocityStrength number @[out] 
---@param OutForceLimit number @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularDriveParams(Accessor, OutPositionStrength, OutVelocityStrength, OutForceLimit) end

---Gets the angular drive mode ( SLERP or Twist And Swing)
---     @@param Accessor         Constraint accessor to query
---     @@param OutDriveMode     The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param OutDriveMode integer @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularDriveMode(Accessor, OutDriveMode) end

---Gets Constraint Angular Breakable properties
---     @@param Accessor                                 Constraint accessor to query
---     @@param bAngularBreakable                Whether it is possible to break the joint with angular force
---     @@param AngularBreakThreshold    Torque needed to break the joint
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param bAngularBreakable boolean @[out] 
---@param AngularBreakThreshold number @[out] 
function UConstraintInstanceBlueprintLibrary.GetAngularBreakable(Accessor, bAngularBreakable, AngularBreakThreshold) end

---Copies all properties from one constraint to another
---@param Accessor FConstraintInstanceAccessor @[out] 
---@param SourceAccessor FConstraintInstanceAccessor @[out] 
---@param bKeepPosition boolean @[opt] 
---@param bKeepRotation boolean @[opt] 
function UConstraintInstanceBlueprintLibrary.CopyParams(Accessor, SourceAccessor, bKeepPosition, bKeepRotation) end

