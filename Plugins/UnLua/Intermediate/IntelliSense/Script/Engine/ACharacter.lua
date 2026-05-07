---Characters are Pawns that have a mesh, collision, and built-in movement logic.
---They are responsible for all physical interaction between the player or AI and the world, and also implement basic networking and input models.
---They are designed for a vertically-oriented player representation that can walk, jump, fly, and swim through the world using CharacterMovementComponent.
---@class ACharacter : APawn
---@field private Mesh USkeletalMeshComponent @The main skeletal mesh associated with this Character (optional sub-object).
---@field private CharacterMovement UCharacterMovementComponent @Movement component used for movement logic in various movement modes (walking, falling, etc), containing relevant settings and functions to control movement.
---@field private CapsuleComponent UCapsuleComponent @The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions.
---@field private ArrowComponent UArrowComponent @Component shown in the editor only to indicate character facing
---@field protected BasedMovement FBasedMovementInfo @Info about our current movement base (object we are standing on).
---@field protected ReplicatedBasedMovement FBasedMovementInfo @Replicated version of relative movement. Read-only on simulated proxies!
---@field protected ReplicatedServerLastTransformUpdateTimeStamp number @CharacterMovement ServerLastTransformUpdateTimeStamp value, replicated to simulated proxies.
---@field protected ReplayLastTransformUpdateTimeStamp number
---@field protected BaseRotationOffset FQuat @Saved rotation offset of mesh.
---@field protected BaseTranslationOffset FVector @Saved translation offset of mesh.
---@field protected ReplicatedGravityDirection FVector_NetQuantizeNormal @CharacterMovement Custom gravity direction replicated for simulated proxies.
---@field protected AnimRootMotionTranslationScale number @Scale to apply to root motion translation on this Character
---@field public CrouchedEyeHeight number @Default crouched eye height
---@field protected bInBaseReplication boolean @Flag that we are receiving replication of the based movement.
---@field public bIsCrouched boolean @Set by character movement to specify that this Character is currently crouched.
---@field public bProxyIsJumpForceApplied boolean @Set to indicate that this Character is currently under the force of a jump (if JumpMaxHoldTime is non-zero). IsJumpProvidingForce() handles this as well.
---@field public bPressedJump boolean @When true, player wants to jump
---@field public bClientUpdating boolean @When true, applying updates to network client (replaying saved moves for a locally controlled character)
---@field public bClientWasFalling boolean @True if Pawn was initially falling when started to replay network moves.
---@field public bClientResimulateRootMotion boolean @If server disagrees with root motion track position, client has to resimulate root motion from last AckedMove.
---@field public bClientResimulateRootMotionSources boolean @If server disagrees with root motion state, client has to resimulate root motion from last AckedMove.
---@field public bSimGravityDisabled boolean @Disable simulated gravity (set when character encroaches geometry on client, to keep it from falling through floors)
---@field public bClientCheckEncroachmentOnNetUpdate boolean
---@field public bServerMoveIgnoreRootMotion boolean @Disable root motion on the server. When receiving a DualServerMove, where the first move is not root motion and the second is.
---@field public bWasJumping boolean @Tracks whether or not the character was already jumping last frame.
---@field protected ReplicatedMovementMode integer @CharacterMovement MovementMode (and custom mode) replicated for simulated proxies. Use CharacterMovementComponent::UnpackNetworkMovementMode() to translate it.
---@field public JumpKeyHoldTime number @Jump key Held Time. This is the time that the player has held the jump key, in seconds.
---@field public JumpForceTimeRemaining number @Amount of jump force time remaining, if JumpMaxHoldTime > 0.
---@field public ProxyJumpForceStartedTime number @Track last time a jump force started for a proxy.
---@field public JumpMaxHoldTime number @The max time the jump key can be held. Note that if StopJumping() is not called before the max jump hold time is reached, then the character will carry on receiving vertical velocity. Therefore it is usually best to call StopJumping() when jump input has ceased (such as a button up event).
---@field public JumpMaxCount integer @The max number of jumps the character can perform. Note that if JumpMaxHoldTime is non zero and StopJumping is not called, the player may be able to perform and unlimited number of jumps. Therefore it is usually best to call StopJumping() when jump input has ceased (such as a button up event).
---@field public JumpCurrentCount integer @Tracks the current number of jumps performed. This is incremented in CheckJumpInput, used in CanJump_Implementation, and reset in OnMovementModeChanged. When providing overrides for these methods, it's recommended to either manually increment / reset this value, or call the Super:: method.
---@field public JumpCurrentCountPreJump integer @Represents the current number of jumps performed before CheckJumpInput modifies JumpCurrentCount. This is set in CheckJumpInput and is used in SetMoveFor and PrepMoveFor instead of JumpCurrentCount since CheckJumpInput can modify JumpCurrentCount. When providing overrides for these methods, it's recommended to either manually set this value, or call the Super:: method.
---@field public OnReachedJumpApex MulticastDelegate @Broadcast when Character's jump reaches its apex. Needs CharacterMovement->bNotifyApex = true
---@field public LandedDelegate MulticastDelegate @Called upon landing when falling, to perform actions based on the Hit result. Note that movement mode is still "Falling" during this event. Current Velocity value is the velocity at the time of landing. Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).
---@field public MovementModeChangedDelegate MulticastDelegate @Multicast delegate for MovementMode changing.
---@field public OnCharacterMovementUpdated MulticastDelegate @Event triggered at the end of a CharacterMovementComponent movement update. This is the preferred event to use rather than the Tick event when performing custom updates to CharacterMovement properties based on the current state. This is mainly due to the nature of network updates, where client corrections in position from the server can cause multiple iterations of a movement update, which allows this event to update as well, while a Tick event would not.
---@field public SavedRootMotion FRootMotionSourceGroup @For LocallyControlled Autonomous clients. During a PerformMovement() after root motion is prepared, we save it off into this and then record it into our SavedMoves. During SavedMove playback we use it as our "Previous Move" SavedRootMotion which includes last received root motion from the Server
---@field public ClientRootMotionParams FRootMotionMovementParams @For LocallyControlled Autonomous clients. Saved root motion data to be used by SavedMoves.
---@field public RootMotionRepMoves TArray<FSimulatedRootMotionReplicatedMove> @Array of previously received root motion moves from the server.
---@field public RepRootMotion FRepRootMotionMontage @Replicated Root Motion montage
local ACharacter = {}

---Request the character to stop crouching. The request is processed on the next update of the CharacterMovementComponent.
---@param bClientSimulation boolean @[opt] 
function ACharacter:UnCrouch(bClientSimulation) end

---Stop the character from jumping on the next update.
---Call this from an input event (such as a button 'up' event) to cease applying
---jump Z-velocity. If this is not called, then jump z-velocity will be applied
---until JumpMaxHoldTime is reached.
function ACharacter:StopJumping() end

---Stop Animation Montage. If nullptr, it will stop what's currently active. The Blend Out Time is taken from the montage asset that is being stopped. *
---@param AnimMontage UAnimMontage @[opt] 
function ACharacter:StopAnimMontage(AnimMontage) end

---Server RPC that passes through to CharacterMovement (avoids RPC overhead for components).
---The base RPC function (eg 'ServerMove') is auto-generated for clients to trigger the call to the server function,
---eventually going to the _Implementation function (which we just pass to the CharacterMovementComponent).
---@param PackedBits FCharacterServerMovePackedBits
function ACharacter:ServerMovePacked(PackedBits) end

---@param OldTimeStamp number
---@param OldAccel FVector_NetQuantize10
---@param OldMoveFlags integer
function ACharacter:ServerMoveOld(OldTimeStamp, OldAccel, OldMoveFlags) end

---@param TimeStamp number
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param CompressedMoveFlags integer
---@param ClientRoll integer
---@param View integer
---@param ClientMovementMode integer
function ACharacter:ServerMoveNoBase(TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementMode) end

---@param TimeStamp0 number
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags integer
---@param View0 integer
---@param TimeStamp number
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags integer
---@param ClientRoll integer
---@param View integer
---@param ClientMovementMode integer
function ACharacter:ServerMoveDualNoBase(TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementMode) end

---@param TimeStamp0 number
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags integer
---@param View0 integer
---@param TimeStamp number
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags integer
---@param ClientRoll integer
---@param View integer
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName string
---@param ClientMovementMode integer
function ACharacter:ServerMoveDualHybridRootMotion(TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end

---@param TimeStamp0 number
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags integer
---@param View0 integer
---@param TimeStamp number
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags integer
---@param ClientRoll integer
---@param View integer
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName string
---@param ClientMovementMode integer
function ACharacter:ServerMoveDual(TimeStamp0, InAccel0, PendingFlags, View0, TimeStamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end

---@param TimeStamp number
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param CompressedMoveFlags integer
---@param ClientRoll integer
---@param View integer
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName string
---@param ClientMovementMode integer
function ACharacter:ServerMove(TimeStamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end

---@param InString string
function ACharacter:RootMotionDebugClientPrintOnScreen(InString) end

---Play Animation Montage on the character mesh. Returns the length of the animation montage in seconds, or 0.f if failed to play. *
---@param AnimMontage UAnimMontage
---@param InPlayRate number @[opt] 
---@param StartSectionName string @[opt] 
---@return number
function ACharacter:PlayAnimMontage(AnimMontage, InPlayRate, StartSectionName) end

---Event fired when the Character is walking off a surface and is about to fall because CharacterMovement->CurrentFloor became unwalkable.
---If CharacterMovement->MovementMode does not change during this event then the character will automatically start falling afterwards.
---@param PreviousFloorImpactNormal FVector
---@param PreviousFloorContactNormal FVector
---@param PreviousLocation FVector
---@param TimeDelta number
function ACharacter:OnWalkingOffLedge(PreviousFloorImpactNormal, PreviousFloorContactNormal, PreviousLocation, TimeDelta) end

---Handles replicated root motion properties on simulated proxies and position correction.
function ACharacter:OnRep_RootMotion() end

---Rep notify for ReplicatedBasedMovement
function ACharacter:OnRep_ReplicatedBasedMovement() end

function ACharacter:OnRep_ReplayLastTransformUpdateTimeStamp() end

---Handle Crouching replicated from server
function ACharacter:OnRep_IsCrouched() end

---Let blueprint know that we were launched
---@param LaunchVelocity FVector
---@param bXYOverride boolean
---@param bZOverride boolean
function ACharacter:OnLaunched(LaunchVelocity, bXYOverride, bZOverride) end

---Called upon landing when falling, to perform actions based on the Hit result.
---Note that movement mode is still "Falling" during this event. Current Velocity value is the velocity at the time of landing.
---Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).
---@param Hit FHitResult
function ACharacter:OnLanded(Hit) end

---Event fired when the character has just started jumping
function ACharacter:OnJumped() end

---Set a pending launch velocity on the Character. This velocity will be processed on the next CharacterMovementComponent tick,
---and will set it to the "falling" state. Triggers the OnLaunched event.
---@param LaunchVelocity FVector
---@param bXYOverride boolean
---@param bZOverride boolean
function ACharacter:LaunchCharacter(LaunchVelocity, bXYOverride, bZOverride) end

---Event for implementing custom character movement mode. Called by CharacterMovement if MovementMode is set to Custom.
---@param DeltaTime number
function ACharacter:K2_UpdateCustomMovement(DeltaTime) end

---Event when Character crouches.
---@param HalfHeightAdjust number
---@param ScaledHalfHeightAdjust number
function ACharacter:K2_OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust) end

---Called from CharacterMovementComponent to notify the character that the movement mode has changed.
---@param PrevMovementMode integer
---@param NewMovementMode integer
---@param PrevCustomMode integer
---@param NewCustomMode integer
function ACharacter:K2_OnMovementModeChanged(PrevMovementMode, NewMovementMode, PrevCustomMode, NewCustomMode) end

---Event when Character stops crouching.
---@param HalfHeightAdjust number
---@param ScaledHalfHeightAdjust number
function ACharacter:K2_OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust) end

---Make the character jump on the next update.
---If you want your character to jump according to the time that the jump key is held,
---then you can set JumpMaxHoldTime to some non-zero value. Make sure in this case to
---call StopJumping() when you want the jump's z-velocity to stop being applied (such
---as on a button up event), otherwise the character will carry on receiving the
---velocity until JumpKeyHoldTime reaches JumpMaxHoldTime.
function ACharacter:Jump() end

---True if we are playing Anim root motion right now
---@return boolean
function ACharacter:IsPlayingRootMotion() end

---True if we are playing Root Motion right now, through a Montage with RootMotionMode == ERootMotionMode::RootMotionFromMontagesOnly.
---This means code path for networked root motion is enabled.
---@return boolean
function ACharacter:IsPlayingNetworkedRootMotionMontage() end

---True if jump is actively providing a force, such as when the jump key is held and the time it has been held is less than JumpMaxHoldTime.
---@return boolean
function ACharacter:IsJumpProvidingForce() end

---True if we are playing root motion from any source right now (anim root motion, root motion source)
---@return boolean
function ACharacter:HasAnyRootMotion() end

---Return current playing Montage *
---@return UAnimMontage
function ACharacter:GetCurrentMontage() end

---Get the saved translation offset of mesh. This is how much extra offset is applied from the center of the capsule.
---@return FVector
function ACharacter:GetBaseTranslationOffset() end

---Get the saved rotation offset of mesh. This is how much extra rotation is applied from the capsule rotation.
---@return FRotator
function ACharacter:GetBaseRotationOffsetRotator() end

---Scale to apply to root motion translation on this Character. Returns current value of AnimRootMotionScale.
---@return number
function ACharacter:GetAnimRootMotionTranslationScale() end

---Request the character to start crouching. The request is processed on the next update of the CharacterMovementComponent.
---@param bClientSimulation boolean @[opt] 
function ACharacter:Crouch(bClientSimulation) end

---Bandwidth saving version, when velocity is zeroed
---@param TimeStamp number
---@param NewLoc FVector
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName string
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode integer
function ACharacter:ClientVeryShortAdjustPosition(TimeStamp, NewLoc, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end

---Client RPC that passes through to CharacterMovement (avoids RPC overhead for components).
---@param PackedBits FCharacterMoveResponsePackedBits
function ACharacter:ClientMoveResponsePacked(PackedBits) end

function ACharacter:ClientCheatWalk() end

function ACharacter:ClientCheatGhost() end

function ACharacter:ClientCheatFly() end

---@param TimeStamp number
---@param ServerRootMotion FRootMotionSourceGroup
---@param bHasAnimRootMotion boolean
---@param ServerMontageTrackPosition number
---@param ServerLoc FVector
---@param ServerRotation FVector_NetQuantizeNormal
---@param ServerVelZ number
---@param ServerBase UPrimitiveComponent
---@param ServerBoneName string
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode integer
function ACharacter:ClientAdjustRootMotionSourcePosition(TimeStamp, ServerRootMotion, bHasAnimRootMotion, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end

---@param TimeStamp number
---@param ServerMontageTrackPosition number
---@param ServerLoc FVector
---@param ServerRotation FVector_NetQuantizeNormal
---@param ServerVelZ number
---@param ServerBase UPrimitiveComponent
---@param ServerBoneName string
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode integer
function ACharacter:ClientAdjustRootMotionPosition(TimeStamp, ServerMontageTrackPosition, ServerLoc, ServerRotation, ServerVelZ, ServerBase, ServerBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end

---@param TimeStamp number
---@param NewLoc FVector
---@param NewVel FVector
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName string
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
---@param ServerMovementMode integer
function ACharacter:ClientAdjustPosition(TimeStamp, NewLoc, NewVel, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition, ServerMovementMode) end

---@param TimeStamp number
function ACharacter:ClientAckGoodMove(TimeStamp) end

---Customizable event to check if the character can jump in the current state.
---Default implementation returns true if the character is on the ground and not crouching,
---has a valid CharacterMovementComponent and CanEverJump() returns true.
---Default implementation also allows for 'hold to jump higher' functionality:
---As well as returning true when on the ground, it also returns true when GetMaxJumpTime is more
---than zero and IsJumping returns true.
---@return boolean
function ACharacter:CanJumpInternal() end

---Check if the character can jump in the current state.
---The default implementation may be overridden or extended by implementing the custom CanJump event in Blueprints.
---@return boolean
function ACharacter:CanJump() end

---
---@return boolean
function ACharacter:CanCrouch() end

---Cache mesh offset from capsule. This is used as the target for network smoothing interpolation, when the mesh is offset with lagged smoothing.
---This is automatically called during initialization; call this at runtime if you intend to change the default mesh offset from the capsule.
---@param MeshRelativeLocation FVector
---@param MeshRelativeRotation FRotator
function ACharacter:CacheInitialMeshOffset(MeshRelativeLocation, MeshRelativeRotation) end

