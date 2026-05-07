---CharacterMovementComponent handles movement logic for the associated Character owner.
---It supports various movement modes including: walking, falling, swimming, flying, custom.
---Movement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame
---based on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).
---Networking is fully implemented, with server-client correction and prediction included.
---@class UCharacterMovementComponent : UPawnMovementComponent
---@field protected CharacterOwner ACharacter @Character movement component belongs to
---@field public GravityScale number @Custom gravity scale. Gravity is multiplied by this amount for the character.
---@field public MaxStepHeight number @Maximum height character can step up
---@field public JumpZVelocity number @Initial velocity (instantaneous vertical acceleration) when jumping.
---@field public JumpOffJumpZFactor number @Fraction of JumpZVelocity to use when automatically "jumping off" of a base actor that's not allowed to be a base for a character. (For example, if you're not allowed to stand on other players.)
---@field private WalkableFloorAngle number @Max angle in degrees of a walkable surface. Any greater than this and it is too steep to be walkable.
---@field private WalkableFloorZ number @Minimum Z value for floor normal. If less, not a walkable surface. Computed from WalkableFloorAngle.
---@field private GravityDirection FVector @A normalized vector representing the direction of gravity for gravity relative movement modes: walking, falling, and custom movement modes. Gravity direction remaps player input as being within the plane defined by the gravity direction. Movement simulation values like velocity and acceleration are maintained in their existing world coordinate space but are transformed internally as gravity relative (for instance moving forward up a vertical wall that gravity is defined to be perpendicular to and jump "up" from that wall). If ShouldRemainVertical() is true the character's capsule will be oriented to align with the gravity direction.
---@field private WorldToGravityTransform FQuat @A cached quaternion representing the rotation from world space to gravity relative space defined by GravityDirection.
---@field private GravityToWorldTransform FQuat @A cached quaternion representing the inverse rotation from world space to gravity relative space defined by GravityDirection.
---@field public MovementMode integer @Actor's current movement mode (walking, falling, etc).    - walking:  Walking on a surface, under the effects of friction, and able to "step up" barriers. Vertical velocity is zero.    - falling:  Falling under the effects of gravity, after jumping or walking off the edge of a surface.    - flying:   Flying, ignoring the effects of gravity.    - swimming: Swimming through a fluid volume, under the effects of gravity and buoyancy.    - custom:   User-defined custom movement mode, including many possible sub-modes. This is automatically replicated through the Character owner and for client-server movement functions.
---@field public CustomMovementMode integer @Current custom sub-mode if MovementMode is set to Custom. This is automatically replicated through the Character owner and for client-server movement functions.
---@field public NetworkSmoothingMode ENetworkSmoothingMode @Smoothing mode for simulated proxies in network game.
---@field public GroundFriction number @Setting that affects movement control. Higher values allow faster changes in direction. If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor. When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity. This can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).
---@field public MaxWalkSpeed number @The maximum ground speed when walking. Also determines maximum lateral speed when falling.
---@field public MaxWalkSpeedCrouched number @The maximum ground speed when walking and crouched.
---@field public MaxSwimSpeed number @The maximum swimming speed.
---@field public MaxFlySpeed number @The maximum flying speed.
---@field public MaxCustomMovementSpeed number @The maximum speed when using Custom movement mode.
---@field public MaxAcceleration number @Max Acceleration (rate of change of velocity)
---@field public MinAnalogWalkSpeed number @The ground speed that we should accelerate up to when walking at minimum analog stick tilt
---@field public BrakingFrictionFactor number @Factor used to multiply actual value of friction used when braking. This applies to any friction value that is currently used, which may depend on bUseSeparateBrakingFriction.
---@field public BrakingFriction number @Friction (drag) coefficient applied when braking (whenever Acceleration = 0, or if character is exceeding max speed); actual value used is this multiplied by BrakingFrictionFactor. When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity. Braking is composed of friction (velocity-dependent drag) and constant deceleration. This is the current value, used in all movement modes; if this is not desired, override it or bUseSeparateBrakingFriction when movement mode changes.
---@field public BrakingSubStepTime number @Time substepping when applying braking friction. Smaller time steps increase accuracy at the slight cost of performance, especially if there are large frame times.
---@field public BrakingDecelerationWalking number @Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.
---@field public BrakingDecelerationFalling number @Lateral deceleration when falling and not applying acceleration.
---@field public BrakingDecelerationSwimming number @Deceleration when swimming and not applying acceleration.
---@field public BrakingDecelerationFlying number @Deceleration when flying and not applying acceleration.
---@field public AirControl number @When falling, amount of lateral movement control available to the character. 0 = no control, 1 = full control at max speed of MaxWalkSpeed.
---@field public AirControlBoostMultiplier number @When falling, multiplier applied to AirControl when lateral velocity is less than AirControlBoostVelocityThreshold. Setting this to zero will disable air control boosting. Final result is clamped at 1.
---@field public AirControlBoostVelocityThreshold number @When falling, if lateral velocity magnitude is less than this value, AirControl is multiplied by AirControlBoostMultiplier. Setting this to zero will disable air control boosting.
---@field public FallingLateralFriction number @Friction to apply to lateral air movement when falling. If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero).
---@field public CrouchedHalfHeight number
---@field public Buoyancy number @Water buoyancy. A ratio (1.0 = neutral buoyancy, 0.0 = no buoyancy)
---@field public PerchRadiusThreshold number @Don't allow the character to perch on the edge of a surface if the contact is this close to the edge of the capsule. Note that characters will not fall off if they are within MaxStepHeight of a walkable surface below.
---@field public PerchAdditionalHeight number @When perching on a ledge, add this additional distance to MaxStepHeight when determining how high above a walkable floor we can perch. Note that we still enforce MaxStepHeight to start the step up; this just allows the character to hang off the edge or step slightly higher off the floor. (@@see PerchRadiusThreshold)
---@field public RotationRate FRotator @Change in rotation per second, used when UseControllerDesiredRotation or OrientRotationToMovement are true. Set a negative value for infinite rotation rate and instant turns.
---@field public bUseSeparateBrakingFriction boolean @If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration). If false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor. This setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.
---@field public bDontFallBelowJumpZVelocityDuringJump boolean @True means while the jump key is held, we will not allow the vertical speed to fall below the JumpZVelocity tuning value even if a stronger force, such as gravity, is opposing the jump.
---@field public bApplyGravityWhileJumping boolean @Apply gravity while the character is actively jumping (e.g. holding the jump key). Helps remove frame-rate dependent jump height, but may alter base jump height.
---@field public bUseControllerDesiredRotation boolean @If true, smoothly rotate the Character toward the Controller's desired rotation (typically Controller->ControlRotation), using RotationRate as the rate of rotation change. Overridden by OrientRotationToMovement. Normally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character.
---@field public bOrientRotationToMovement boolean @If true, rotate the Character toward the direction of acceleration, using RotationRate as the rate of rotation change. Overrides UseControllerDesiredRotation. Normally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character.
---@field public bSweepWhileNavWalking boolean @Whether or not the character should sweep for collision geometry while walking.
---@field protected bMovementInProgress boolean @True during movement update. Used internally so that attempts to change CharacterOwner and UpdatedComponent are deferred until after an update.
---@field public bEnableScopedMovementUpdates boolean @If true, high-level movement updates will be wrapped in a movement scope that accumulates updates and defers a bulk of the work until the end. When enabled, touch and hit events will not be triggered until the end of multiple moves within an update, which can improve performance.
---@field public bEnableServerDualMoveScopedMovementUpdates boolean @Optional scoped movement update to combine moves for cheaper performance on the server when the client sends two moves in one packet. Be warned that since this wraps a larger scope than is normally done with bEnableScopedMovementUpdates, this can result in subtle changes in behavior in regards to when overlap events are handled, when attached components are moved, etc.
---@field public bForceMaxAccel boolean @Ignores size of acceleration component, and forces max acceleration to drive character at full velocity.
---@field public bRunPhysicsWithNoController boolean @If true, movement will be performed even if there is no Controller for the Character owner. Normally without a Controller, movement will be aborted and velocity and acceleration are zeroed if the character is walking. Characters that are spawned without a Controller but with this flag enabled will initialize the movement mode to DefaultLandMovementMode or DefaultWaterMovementMode appropriately.
---@field public bForceNextFloorCheck boolean @Force the Character in MOVE_Walking to do a check for a valid floor even if it hasn't moved. Cleared after next floor check. Normally if bAlwaysCheckFloor is false we try to avoid the floor check unless some conditions are met, but this can be used to force the next check to always run.
---@field public bShrinkProxyCapsule boolean @If true, the capsule needs to be shrunk on this simulated proxy, to avoid replication rounding putting us in geometry. Whenever this is set to true, this will cause the capsule to be shrunk again on the next update, and then set to false.
---@field public bCanWalkOffLedges boolean @If true, Character can walk off a ledge.
---@field public bCanWalkOffLedgesWhenCrouching boolean @If true, Character can walk off a ledge when crouching.
---@field public bNetworkSkipProxyPredictionOnNetUpdate boolean @Whether we skip prediction on frames where a proxy receives a network update. This can avoid expensive prediction on those frames, with the side-effect of predicting with a frame of additional latency.
---@field public bNetworkAlwaysReplicateTransformUpdateTimestamp boolean @Flag used on the server to determine whether to always replicate ReplicatedServerLastTransformUpdateTimeStamp to clients. Normally this is only sent when the network smoothing mode on character movement is set to Linear smoothing (on the server), to save bandwidth. Setting this to true will force the timestamp to replicate regardless, in case the server doesn't know about the smoothing mode, or if the timestamp is used for another purpose.
---@field public bDeferUpdateMoveComponent boolean @true to update CharacterOwner and UpdatedComponent after movement ends
---@field public bEnablePhysicsInteraction boolean @If enabled, the player will interact with physics objects when walking into them.
---@field public bTouchForceScaledToMass boolean @If enabled, the TouchForceFactor is applied per kg mass of the affected object.
---@field public bPushForceScaledToMass boolean @If enabled, the PushForceFactor is applied per kg mass of the affected object.
---@field public bPushForceUsingZOffset boolean @If enabled, the PushForce location is moved using PushForcePointZOffsetFactor. Otherwise simply use the impact point.
---@field public bScalePushForceToVelocity boolean @If enabled, the applied push force will try to get the physics object to the same velocity than the player, not faster. This will only               scale the force down, it will never apply more force than defined by PushForceFactor.
---@field public DeferredUpdatedMoveComponent USceneComponent @What to update CharacterOwner and UpdatedComponent after movement ends
---@field public MaxOutOfWaterStepHeight number @Maximum step height for getting out of water
---@field public OutofWaterZ number @Z velocity applied when pawn tries to get out of water
---@field public Mass number @Mass of pawn (for when momentum is imparted to it).
---@field public StandingDownwardForceScale number @Force applied to objects we stand on (due to Mass and Gravity) is scaled by this amount.
---@field public InitialPushForceFactor number @Initial impulse force to apply when the player bounces into a blocking physics object.
---@field public PushForceFactor number @Force to apply when the player collides with a blocking physics object.
---@field public PushForcePointZOffsetFactor number @Z-Offset for the position the force is applied to. 0.0f is the center of the physics object, 1.0f is the top and -1.0f is the bottom of the object.
---@field public TouchForceFactor number @Force to apply to physics objects that are touched by the player.
---@field public MinTouchForce number @Minimum Force applied to touched physics objects. If < 0.0f, there is no minimum.
---@field public MaxTouchForce number @Maximum force applied to touched physics objects. If < 0.0f, there is no maximum.
---@field public RepulsionForce number @Force per kg applied constantly to all overlapping components.
---@field protected Acceleration FVector @Current acceleration vector (with magnitude). This is calculated each update based on the input vector and the constraints of MaxAcceleration and the current movement mode.
---@field protected LastUpdateRotation FQuat @Rotation after last PerformMovement or SimulateMovement update.
---@field protected LastUpdateLocation FVector @Location after last PerformMovement or SimulateMovement update. Used internally to detect changes in position from outside character movement to try to validate the current floor.
---@field protected LastUpdateVelocity FVector @Velocity after last PerformMovement or SimulateMovement update. Used internally to detect changes in velocity from external sources.
---@field protected ServerLastTransformUpdateTimeStamp number @Timestamp when location or rotation last changed during an update. Only valid on the server.
---@field protected ServerLastClientGoodMoveAckTime number @Timestamp of last client adjustment sent. See NetworkMinTimeBetweenClientAdjustments.
---@field protected ServerLastClientAdjustmentTime number @Timestamp of last client adjustment sent. See NetworkMinTimeBetweenClientAdjustments.
---@field protected PendingImpulseToApply FVector @Accumulated impulse to be added next tick.
---@field protected PendingForceToApply FVector @Accumulated force to be added next tick.
---@field protected AnalogInputModifier number @Modifier to applied to values such as acceleration and max speed due to analog input.
---@field public MaxSimulationTimeStep number @Max time delta for each discrete simulation step. Used primarily in the the more advanced movement modes that break up larger time steps (usually those applying gravity such as falling and walking). Lowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance. WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.
---@field public MaxSimulationIterations integer @Max number of iterations used for each discrete simulation step. Used primarily in the the more advanced movement modes that break up larger time steps (usually those applying gravity such as falling and walking). Increasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance. WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.
---@field public MaxJumpApexAttemptsPerSimulation integer @Max number of attempts per simulation to attempt to exactly reach the jump apex when falling movement reaches the top of the arc. Limiting this prevents deep recursion when special cases cause collision or other conditions which reactivate the apex condition.
---@field public MaxDepenetrationWithGeometry number @Max distance we allow simulated proxies to depenetrate when moving out of anything but Pawns. This is generally more tolerant than with Pawns, because other geometry is either not moving, or is moving predictably with a bit of delay compared to on the server.
---@field public MaxDepenetrationWithGeometryAsProxy number @Max distance we allow simulated proxies to depenetrate when moving out of anything but Pawns. This is generally more tolerant than with Pawns, because other geometry is either not moving, or is moving predictably with a bit of delay compared to on the server.
---@field public MaxDepenetrationWithPawn number @Max distance we are allowed to depenetrate when moving out of other Pawns.
---@field public MaxDepenetrationWithPawnAsProxy number @Max distance we allow simulated proxies to depenetrate when moving out of other Pawns. Typically we don't want a large value, because we receive a server authoritative position that we should not then ignore by pushing them out of the local player.
---@field public NetworkSimulatedSmoothLocationTime number @How long to take to smoothly interpolate from the old pawn position on the client to the corrected one sent by the server. Not used by Linear smoothing.
---@field public NetworkSimulatedSmoothRotationTime number @How long to take to smoothly interpolate from the old pawn rotation on the client to the corrected one sent by the server. Not used by Linear smoothing.
---@field public ListenServerNetworkSimulatedSmoothLocationTime number @Similar setting as NetworkSimulatedSmoothLocationTime but only used on Listen servers.
---@field public ListenServerNetworkSimulatedSmoothRotationTime number @Similar setting as NetworkSimulatedSmoothRotationTime but only used on Listen servers.
---@field public NetProxyShrinkRadius number @Shrink simulated proxy capsule radius by this amount, to account for network rounding that may cause encroachment. Changing during gameplay is not supported.
---@field public NetProxyShrinkHalfHeight number @Shrink simulated proxy capsule half height by this amount, to account for network rounding that may cause encroachment. Changing during gameplay is not supported.
---@field public NetworkMaxSmoothUpdateDistance number @Maximum distance character is allowed to lag behind server location when interpolating between updates.
---@field public NetworkNoSmoothUpdateDistance number @Maximum distance beyond which character is teleported to the new server location without any smoothing.
---@field public NetworkMinTimeBetweenClientAckGoodMoves number @Minimum time on the server between acknowledging good client moves. This can save on bandwidth. Set to 0 to disable throttling.
---@field public NetworkMinTimeBetweenClientAdjustments number @Minimum time on the server between sending client adjustments when client has exceeded allowable position error. Should be >= NetworkMinTimeBetweenClientAdjustmentsLargeCorrection (the larger value is used regardless). This can save on bandwidth. Set to 0 to disable throttling.
---@field public NetworkMinTimeBetweenClientAdjustmentsLargeCorrection number @Minimum time on the server between sending client adjustments when client has exceeded allowable position error by a large amount (NetworkLargeClientCorrectionDistance). Should be <= NetworkMinTimeBetweenClientAdjustments (the smaller value is used regardless).
---@field public NetworkLargeClientCorrectionDistance number @If client error is larger than this, sets bNetworkLargeClientCorrection to reduce delay between client adjustments.
---@field public LedgeCheckThreshold number @Used in determining if pawn is going off ledge.  If the ledge is "shorter" than this value then the pawn will be able to walk off it. *
---@field public JumpOutOfWaterPitch number @When exiting water, jump if control pitch angle is this high or above.
---@field public CurrentFloor FFindFloorResult @Information about the floor the Character is standing on (updated only during walking movement).
---@field public DefaultLandMovementMode integer @Default movement mode when not in water. Used at player startup or when teleported.
---@field public DefaultWaterMovementMode integer @Default movement mode when in water. Used at player startup or when teleported.
---@field private GroundMovementMode integer @Ground movement mode to switch to after falling and resuming ground movement. Only allowed values are: MOVE_Walking, MOVE_NavWalking.
---@field public bMaintainHorizontalGroundVelocity boolean @If true, walking movement always maintains horizontal velocity when moving up ramps, which causes movement up ramps to be faster parallel to the ramp surface. If false, then walking movement maintains velocity magnitude parallel to the ramp surface.
---@field public bImpartBaseVelocityX boolean @If true, impart the base actor's X velocity when falling off it (which includes jumping)
---@field public bImpartBaseVelocityY boolean @If true, impart the base actor's Y velocity when falling off it (which includes jumping)
---@field public bImpartBaseVelocityZ boolean @If true, impart the base actor's Z velocity when falling off it (which includes jumping)
---@field public bImpartBaseAngularVelocity boolean @If true, impart the base component's tangential components of angular velocity when jumping or falling off it. Only those components of the velocity allowed by the separate component settings (bImpartBaseVelocityX etc) will be applied.
---@field public bJustTeleported boolean @Used by movement code to determine if a change in position is based on normal movement or a teleport. If not a teleport, velocity can be recomputed based on the change in position.
---@field public bNetworkUpdateReceived boolean @True when a network replication update is received for simulated proxies.
---@field public bNetworkMovementModeChanged boolean @True when the networked movement mode has been replicated.
---@field public bNetworkGravityDirectionChanged boolean @True when the networked gravity direction has been replicated.
---@field public bIgnoreClientMovementErrorChecksAndCorrection boolean @If true, we should ignore server location difference checks for client error on this movement component. This can be useful when character is moving at extreme speeds for a duration and you need it to look smooth on clients without the server correcting the client. Make sure to disable when done, as this would break this character's server-client movement correction.
---@field public bServerAcceptClientAuthoritativePosition boolean @If true, and server does not detect client position error, server will copy the client movement location/velocity/etc after simulating the move. This can be useful for short bursts of movement that are difficult to sync over the network. Note that if bIgnoreClientMovementErrorChecksAndCorrection is used, this means the server will not detect an error. Also see GameNetworkManager->ClientAuthorativePosition which permanently enables this behavior.
---@field public bNotifyApex boolean @If true, event NotifyJumpApex() to CharacterOwner's controller when at apex of jump. Is cleared when event is triggered. By default this is off, and if you want the event to fire you typically set it to true when movement mode changes to "Falling" from another mode (see OnMovementModeChanged).
---@field public bCheatFlying boolean @Instantly stop when in flying mode and no acceleration is being applied.
---@field public bWantsToCrouch boolean @If true, try to crouch (or keep crouching) on next update. If false, try to stop crouching on next update.
---@field public bCrouchMaintainsBaseLocation boolean @If true, crouching should keep the base of the capsule in place by lowering the center of the shrunken capsule. If false, the base of the capsule moves up and the center stays in place. The same behavior applies when the character uncrouches: if true, the base is kept in the same location and the center moves up. If false, the capsule grows and only moves up if the base impacts something. By default this variable is set when the movement mode changes: set to true when walking and false otherwise. Feel free to override the behavior when the movement mode changes.
---@field public bIgnoreBaseRotation boolean @Whether the character ignores changes in rotation of the base it is standing on. If true, the character maintains current world rotation. If false, the character rotates with the moving base.
---@field public bFastAttachedMove boolean @Set this to true if riding on a moving base that you know is clear from non-moving world obstructions. Optimization to avoid sweeps during based movement, use with care.
---@field public bAlwaysCheckFloor boolean @Whether we always force floor checks for stationary Characters while walking. Normally floor checks are avoided if possible when not moving, but this can be used to force them if there are use-cases where they are being skipped erroneously (such as objects moving up into the character from below).
---@field public bUseFlatBaseForFloorChecks boolean @Performs floor checks as if the character is using a shape with a flat base. This avoids the situation where characters slowly lower off the side of a ledge (as their capsule 'balances' on the edge).
---@field public bPerformingJumpOff boolean @Used to prevent reentry of JumpOff()
---@field public bWantsToLeaveNavWalking boolean @Used to safely leave NavWalking movement mode
---@field public bUseRVOAvoidance boolean @If set, component will use RVO avoidance. This only runs on the server.
---@field public bRequestedMoveUseAcceleration boolean @Should use acceleration for path following? If true, acceleration is applied when path following to reach the target velocity. If false, path following velocity is set directly, disregarding acceleration.
---@field public bWasSimulatingRootMotion boolean @True when SimulatedProxies are simulating RootMotion
---@field public bAllowPhysicsRotationDuringAnimRootMotion boolean
---@field public FormerBaseVelocityDecayHalfLife number @When applying a root motion override while falling off a moving object, this controls how long it takes to lose half the former base's velocity (in seconds). Set to 0 to ignore former bases (default). Set to -1 for no decay. Any other positive value sets the half-life for exponential decay.
---@field protected bHasRequestedVelocity boolean @Was velocity requested by path following?
---@field protected bRequestedMoveWithMaxSpeed boolean @Was acceleration requested to be always max speed?
---@field protected bWasAvoidanceUpdated boolean @Was avoidance updated in this frame?
---@field protected bProjectNavMeshWalking boolean @Whether to raycast to underlying geometry to better conform navmesh-walking characters
---@field protected bProjectNavMeshOnBothWorldChannels boolean @Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming
---@field public AvoidanceConsiderationRadius number
---@field public RequestedVelocity FVector @Velocity requested by path following.
---@field public LastUpdateRequestedVelocity FVector @Velocity requested by path following during last Update Updated when we consume the value
---@field public AvoidanceUID integer @No default value, for now it's assumed to be valid if GetAvoidanceManager() returns non-NULL.
---@field public AvoidanceGroup FNavAvoidanceMask @Moving actor's group mask
---@field public GroupsToAvoid FNavAvoidanceMask @Will avoid other agents if they are in one of specified groups
---@field public GroupsToIgnore FNavAvoidanceMask @Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid
---@field public AvoidanceWeight number @De facto default value 0.5 (due to that being the default in the avoidance registration function), indicates RVO behavior.
---@field public PendingLaunchVelocity FVector @Temporarily holds launch velocity when pawn is to be launched so it happens at end of movement.
---@field public NavMeshProjectionInterval number @How often we should raycast to project from navmesh to underlying geometry
---@field public NavMeshProjectionTimer number
---@field public NavMeshProjectionInterpSpeed number @Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed")
---@field public NavMeshProjectionHeightScaleUp number @Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction. In other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh.
---@field public NavMeshProjectionHeightScaleDown number @Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction. In other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh.
---@field public NavWalkingFloorDistTolerance number @Ignore small differences in ground height between server and client data during NavWalking mode
---@field public bBasedMovementIgnorePhysicsBase boolean @Property to set if UpdateBasedMovement should ignore collision with actors part of the current MovementBase, if the base is simulated by physics
---@field public bBaseOnAttachmentRoot boolean @Property to set if characters should stay based on objects attachment root instead of the traced object
---@field public bStayBasedInAir boolean @Property to set if characters should stay based on objects while jumping
---@field public StayBasedInAirHeight number @Property used to set how high above base characters should stay based on objects while jumping if bStayBasedInAir is set
---@field public PostPhysicsTickFunction FCharacterMovementComponentPostPhysicsTickFunction @Post-physics tick function for this character
---@field public MinTimeBetweenTimeStampResets number @Minimum time between client TimeStamp resets.        !! This has to be large enough so that we don't confuse the server if the client can stall or timeout.        We do this as we use floats for TimeStamps, and server derives DeltaTime from two TimeStamps.        As time goes on, accuracy decreases from those floating point numbers.        So we trigger a TimeStamp reset at regular intervals to maintain a high level of accuracy.
---@field public CurrentRootMotion FRootMotionSourceGroup @Root Motion Group containing active root motion sources being applied to movement
---@field public ServerCorrectionRootMotion FRootMotionSourceGroup
---@field public RootMotionParams FRootMotionMovementParams @Root Motion movement params. Holds result of anim montage root motion during PerformMovement(), and is overridden  during autonomous move playback to force historical root motion for MoveAutonomous() calls
---@field public AnimRootMotionVelocity FVector @Velocity extracted from RootMotionParams when there is anim root motion active. Invalid to use when HasAnimRootMotion() returns false.
local UCharacterMovementComponent = {}

---Set the Z component of the normal of the steepest walkable surface for the character. Also computes WalkableFloorAngle.
---@param InWalkableFloorZ number
function UCharacterMovementComponent:SetWalkableFloorZ(InWalkableFloorZ) end

---Set the max angle in degrees of a walkable surface for the character. Also computes WalkableFloorZ.
---@param InWalkableFloorAngle number
function UCharacterMovementComponent:SetWalkableFloorAngle(InWalkableFloorAngle) end

---Change movement mode.
---@param NewMovementMode integer
---@param NewCustomMode integer @[opt] 
function UCharacterMovementComponent:SetMovementMode(NewMovementMode, NewCustomMode) end

---@param GroupMask FNavAvoidanceMask
function UCharacterMovementComponent:SetGroupsToIgnoreMask(GroupMask) end

---@param GroupFlags integer
function UCharacterMovementComponent:SetGroupsToIgnore(GroupFlags) end

---@param GroupMask FNavAvoidanceMask
function UCharacterMovementComponent:SetGroupsToAvoidMask(GroupMask) end

---@param GroupFlags integer
function UCharacterMovementComponent:SetGroupsToAvoid(GroupFlags) end

---Set a custom, local gravity direction to use during movement simulation.
---The gravity direction must be synchronized by external systems between the autonomous
---and authority processes. The gravity direction will be corrected as part of movement
---corrections should the movement state diverge.
---SetGravityDirection is responsible for initializing cached values used to tranform to
---from gravity relative space.
---@param GravityDir FVector
function UCharacterMovementComponent:SetGravityDirection(GravityDir) end

---Sets collision half-height when crouching and updates dependent computations
---@param NewValue number
function UCharacterMovementComponent:SetCrouchedHalfHeight(NewValue) end

---@param GroupMask FNavAvoidanceMask
function UCharacterMovementComponent:SetAvoidanceGroupMask(GroupMask) end

---@param GroupFlags integer
function UCharacterMovementComponent:SetAvoidanceGroup(GroupFlags) end

---Change avoidance state and registers in RVO manager if needed
---@param bEnable boolean
function UCharacterMovementComponent:SetAvoidanceEnabled(bEnable) end

---Get the Z component of the normal of the steepest walkable surface for the character. Any lower than this and it is not walkable.
---@return number
function UCharacterMovementComponent:K2_GetWalkableFloorZ() end

---Get the max angle in degrees of a walkable surface for the character.
---@return number
function UCharacterMovementComponent:K2_GetWalkableFloorAngle() end

---Sweeps a vertical trace to find the floor for the capsule at the given location. Will attempt to perch if ShouldComputePerchResult() returns true for the downward sweep result.
---No floor will be found if collision is disabled on the capsule!
---@param CapsuleLocation FVector
---@param FloorResult FFindFloorResult @[out] 
function UCharacterMovementComponent:K2_FindFloor(CapsuleLocation, FloorResult) end

---Compute distance to the floor from bottom sphere of capsule and store the result in FloorResult.
---This distance is the swept distance of the capsule to the first point impacted by the lower hemisphere, or distance from the bottom of the capsule in the case of a line trace.
---This function does not care if collision is disabled on the capsule (unlike FindFloor).
---@param CapsuleLocation FVector
---@param LineDistance number
---@param SweepDistance number
---@param SweepRadius number
---@param FloorResult FFindFloorResult @[out] 
function UCharacterMovementComponent:K2_ComputeFloorDist(CapsuleLocation, LineDistance, SweepDistance, SweepRadius, FloorResult) end

---Returns true if the character is in the 'Walking' movement mode.
---@return boolean
function UCharacterMovementComponent:IsWalking() end

---Return true if the hit result should be considered a walkable surface for the character.
---@param Hit FHitResult
---@return boolean
function UCharacterMovementComponent:IsWalkable(Hit) end

---Whether the gravity direction is different from UCharacterMovementComponent::DefaultGravityDirection.
---@return boolean
function UCharacterMovementComponent:HasCustomGravity() end

---Returns the radius within which we can stand on the edge of a surface without falling (if this is a walkable surface).
---Simply computed as the capsule radius minus the result of GetPerchRadiusThreshold().
---@return number
function UCharacterMovementComponent:GetValidPerchRadius() end

---Returns The distance from the edge of the capsule within which we don't allow the character to perch on the edge of a surface.
---@return number
function UCharacterMovementComponent:GetPerchRadiusThreshold() end

---Return PrimitiveComponent we are based on (standing and walking on).
---@return UPrimitiveComponent
function UCharacterMovementComponent:GetMovementBase() end

---Returns maximum acceleration for the current state.
---@return number
function UCharacterMovementComponent:GetMinAnalogSpeed() end

---Compute the max jump height based on the JumpZVelocity velocity and gravity.
---This does take into account the CharacterOwner's MaxJumpHoldTime.
---@return number
function UCharacterMovementComponent:GetMaxJumpHeightWithJumpTime() end

---Compute the max jump height based on the JumpZVelocity velocity and gravity.
---This does not take into account the CharacterOwner's MaxJumpHoldTime.
---@return number
function UCharacterMovementComponent:GetMaxJumpHeight() end

---Returns maximum deceleration for the current state when braking (ie when there is no acceleration).
---@return number
function UCharacterMovementComponent:GetMaxBrakingDeceleration() end

---Returns maximum acceleration for the current state.
---@return number
function UCharacterMovementComponent:GetMaxAcceleration() end

---Returns the velocity at the end of the last tick.
---@return FVector
function UCharacterMovementComponent:GetLastUpdateVelocity() end

---Returns the rotation at the end of the last tick.
---@return FRotator
function UCharacterMovementComponent:GetLastUpdateRotation() end

---Returns velocity requested by path following
---@return FVector
function UCharacterMovementComponent:GetLastUpdateRequestedVelocity() end

---Returns the location at the end of the last tick.
---@return FVector
function UCharacterMovementComponent:GetLastUpdateLocation() end

---If we have a movement base, get the velocity that should be imparted by that base, usually when jumping off of it.
---Only applies the components of the velocity enabled by bImpartBaseVelocityX, bImpartBaseVelocityY, bImpartBaseVelocityZ.
---@return FVector
function UCharacterMovementComponent:GetImpartedMovementBaseVelocity() end

---Returns the current gravity direction.
---@return FVector
function UCharacterMovementComponent:GetGravityDirection() end

---Returns current acceleration, computed from input vector each update.
---@return FVector
function UCharacterMovementComponent:GetCurrentAcceleration() end

---Returns the collision half-height when crouching (component scale is applied separately)
---@return number
function UCharacterMovementComponent:GetCrouchedHalfHeight() end

---Get the Character that owns UpdatedComponent.
---@return ACharacter
function UCharacterMovementComponent:GetCharacterOwner() end

---Returns modifier [0..1] based on the magnitude of the last input vector, which is used to modify the acceleration and max speed during movement.
---@return number
function UCharacterMovementComponent:GetAnalogInputModifier() end

---Make movement impossible (sets movement mode to MOVE_None).
function UCharacterMovementComponent:DisableMovement() end

---Clears forces accumulated through AddImpulse() and AddForce(), and also pending launch velocity.
function UCharacterMovementComponent:ClearAccumulatedForces() end

---Called when the collision capsule touches another primitive component
---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex integer
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UCharacterMovementComponent:CapsuleTouched(OverlappedComp, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end

---Updates Velocity and Acceleration based on the current state, applying the effects of friction and acceleration or deceleration. Does not apply gravity.
---This is used internally during movement updates. Normally you don't need to call this from outside code, but you might want to use it for custom movement modes.
---@param DeltaTime number
---@param Friction number
---@param bFluid boolean
---@param BrakingDeceleration number
function UCharacterMovementComponent:CalcVelocity(DeltaTime, Friction, bFluid, BrakingDeceleration) end

---Add impulse to character. Impulses are accumulated each tick and applied together
---so multiple calls to this function will accumulate.
---An impulse is an instantaneous force, usually applied once. If you want to continually apply
---forces each frame, use AddForce().
---Note that changing the momentum of characters like this can change the movement mode.
---@param Impulse FVector
---@param bVelocityChange boolean @[opt] 
function UCharacterMovementComponent:AddImpulse(Impulse, bVelocityChange) end

---Add force to character. Forces are accumulated each tick and applied together
---so multiple calls to this function will accumulate.
---Forces are scaled depending on timestep, so they can be applied each frame. If you want an
---instantaneous force, use AddImpulse.
---Adding a force always takes the actor's mass into account.
---Note that changing the momentum of characters like this can change the movement mode.
---@param Force FVector
function UCharacterMovementComponent:AddForce(Force) end

---Stops movement immediately (reset velocity) but keeps following current path
function UCharacterMovementComponent:StopMovementKeepPathing() end

---Stops applying further movement (usually zeros acceleration).
function UCharacterMovementComponent:StopActiveMovement() end

---path following: request movement through a new move input (normal vector = full strength)
---@param MoveInput FVector
function UCharacterMovementComponent:RequestPathMove(MoveInput) end

---path following: request movement through a velocity directly
---@param MoveVelocity FVector
---@param bForceMaxSpeed boolean
function UCharacterMovementComponent:RequestDirectMove(MoveVelocity, bForceMaxSpeed) end

---Returns true if currently swimming (moving through a fluid volume)
---@return boolean
function UCharacterMovementComponent:IsSwimming() end

---Returns true if currently moving on the ground (e.g. walking or driving)
---@return boolean
function UCharacterMovementComponent:IsMovingOnGround() end

---Returns true if currently flying (moving through a non-fluid volume without resting on the ground)
---@return boolean
function UCharacterMovementComponent:IsFlying() end

---Returns true if currently falling (not flying, in a non-fluid volume, and not on the ground)
---@return boolean
function UCharacterMovementComponent:IsFalling() end

---Returns true if currently crouching
---@return boolean
function UCharacterMovementComponent:IsCrouching() end

---Get the current velocity of the agent for nav movement
---@return FVector
function UCharacterMovementComponent:GetVelocityForNavMovement() end

---Get maximum movement speed of the agent
---@return number
function UCharacterMovementComponent:GetMaxSpeedForNavMovement() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCharacterMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCharacterMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCharacterMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end

