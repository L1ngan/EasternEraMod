---Pawn is the base class of all actors that can be possessed by players or AI.
---They are the physical representations of players and creatures in a level.
---@class APawn : AActor
---@field public bUseControllerRotationPitch boolean @If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController.
---@field public bUseControllerRotationYaw boolean @If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController.
---@field public bUseControllerRotationRoll boolean @If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController.
---@field public bCanAffectNavigationGeneration boolean @If set to false (default) given pawn instance will never affect navigation generation (but components could). Setting it to true will result in using regular AActor's navigation relevancy calculation to check if this pawn instance should affect navigation generation.
---@field protected bIsLocalViewTarget boolean
---@field public BaseEyeHeight number @Base eye height above collision center.
---@field public AutoPossessPlayer integer @Determines which PlayerController, if any, should automatically possess the pawn when the level starts or when the pawn is spawned.
---@field public AutoPossessAI EAutoPossessAI @Determines when the Pawn creates and is possessed by an AI Controller (on level start, when spawned, etc). Only possible if AIControllerClassRef is set, and ignored if AutoPossessPlayer is enabled.
---@field protected RemoteViewPitch16 integer @Replicated so we can see where remote clients are looking.
---@field public RemoteViewPitch integer
---@field public AIControllerClass TSubclassOf<AController> @Default class to use when pawn is controlled by AI.
---@field private PlayerState APlayerState @If Pawn is possessed by a player, points to its Player State.  Needed for network play as controllers are not replicated to clients.
---@field public LastHitBy AController @Controller of the last Actor that caused us damage.
---@field public Controller AController @Controller currently possessing this Actor
---@field public PreviousController AController @Previous controller that was controlling this pawn since the last controller change notification
---@field public ReceiveControllerChangedDelegate MulticastDelegate @Event called after a pawn's controller has changed, on the server and owning client. This will happen at the same time as the delegate on GameInstance
---@field public ReceiveRestartedDelegate MulticastDelegate @Event called after a pawn has been restarted, usually by a possession change. This is called on the server for all pawns and the owning client for player pawns
---@field protected ControlInputVector FVector @Accumulated control input vector, stored in world space. This is the pending input, which is cleared (zeroed) once consumed.
---@field protected LastControlInputVector FVector @The last control input vector that was processed by ConsumeMovementInputVector().
---@field protected OverrideInputComponentClass TSubclassOf<UInputComponent> @If set, then this InputComponent class will be used instead of the Input Settings' DefaultInputComponentClass
local APawn = {}

---Spawn default controller for this Pawn, and get possessed by it.
function APawn:SpawnDefaultController() end

---Event called when the Pawn is no longer possessed by a Controller. Only called on the server (or in standalone)
---@param OldController AController
function APawn:ReceiveUnpossessed(OldController) end

---Event called after a pawn has been restarted, usually by a possession change. This is called on the server for all pawns and the owning client for player pawns
function APawn:ReceiveRestarted() end

---Event called when the Pawn is possessed by a Controller. Only called on the server (or in standalone)
---@param NewController AController
function APawn:ReceivePossessed(NewController) end

---Event called after a pawn's controller has changed, on the server and owning client. This will happen at the same time as the delegate on GameInstance
---@param OldController AController
---@param NewController AController
function APawn:ReceiveControllerChanged(OldController, NewController) end

---Inform AIControllers that you've made a noise they might hear (they are sent a HearNoise message if they have bHearNoises==true)
---The instigator of this sound is the pawn which is used to call MakeNoise.
---@param Loudness number
---@param NoiseLocation FVector
---@param bUseNoiseMakerLocation boolean @[opt] 
---@param NoiseMaker AActor @[opt] 
function APawn:PawnMakeNoise(Loudness, NoiseLocation, bUseNoiseMakerLocation, NoiseMaker) end

---PlayerState Replication Notification Callback
function APawn:OnRep_PlayerState() end

---Called when Controller is replicated
function APawn:OnRep_Controller() end

---Returns true if controlled by a human player (possessed by a PlayerController).        This returns true for players controlled by remote clients
---@return boolean
function APawn:IsPlayerControlled() end

---Check if this actor is currently being controlled at all (the actor has a valid Controller, which will be false for remote clients)
---@return boolean
function APawn:IsPawnControlled() end

---Helper to see if move input is ignored. If our controller is a PlayerController, checks Controller->IsMoveInputIgnored().
---@return boolean
function APawn:IsMoveInputIgnored() end

---Is this pawn the ViewTarget of a local PlayerController?  Helpful for determining whether the pawn is
---visible/critical for any VFX.  NOTE: Technically there may be some cases where locally controlled pawns return
---false for this, such as if you are using a remote camera view of some sort.  But generally it will be true for
---locally controlled pawns, and it will always be true for pawns that are being spectated in-game or in Replays.
---@return boolean
function APawn:IsLocallyViewed() end

---Returns true if controlled by a local (not network) Controller.
---@return boolean
function APawn:IsLocallyControlled() end

---@return boolean
function APawn:IsControlled() end

---Returns true if controlled by a bot.
---@return boolean
function APawn:IsBotControlled() end

---Returns the Platform User ID of the PlayerController that is controlling this character.
---Returns an invalid Platform User ID if this character is not controlled by a local player.
---@return FPlatformUserId
function APawn:GetPlatformUserId() end

---Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it,
---Usually only a PawnMovementComponent will want to read this value, or the Pawn itself if it is responsible for movement.
---@return FVector
function APawn:GetPendingMovementInputVector() end

---@return TSubclassOf_UInputComponent_
function APawn:GetOverrideInputComponentClass() end

---Basically retrieved pawn's location on navmesh
---@return FVector
function APawn:GetNavAgentLocation() end

---Return our PawnMovementComponent, if we have one.
---@return UPawnMovementComponent
function APawn:GetMovementComponent() end

---Gets the owning actor of the Movement Base Component on which the pawn is standing.
---@param Pawn APawn
---@return AActor
function APawn.GetMovementBaseActor(Pawn) end

---Returns local Player Controller viewing this pawn, whether it is controlling or spectating
---@return APlayerController
function APawn:GetLocalViewingPlayerController() end

---Return the last input vector in world space that was processed by ConsumeMovementInputVector(), which is usually done by the Pawn or PawnMovementComponent.
---Any user that needs to know about the input that last affected movement should use this function.
---For example an animation update would want to use this, since by default the order of updates in a frame is:
---PlayerController (device input) -> MovementComponent -> Pawn -> Mesh (animations)
---@return FVector
function APawn:GetLastMovementInputVector() end

---Get the rotation of the Controller, often the 'view' rotation of this Pawn.
---@return FRotator
function APawn:GetControlRotation() end

---Returns controller for this actor.
---@return AController
function APawn:GetController() end

---Return the aim rotation for the Pawn.
---If we have a controller, by default we aim at the player's 'eyes' direction
---that is by default the Pawn rotation for AI, and camera (crosshair) rotation for human players.
---@return FRotator
function APawn:GetBaseAimRotation() end

---Call this function to detach safely pawn from its controller, knowing that we will be destroyed soon.
function APawn:DetachFromControllerPendingDestroy() end

---Returns the pending input vector and resets it to zero.
---This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.
---Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).
---@return FVector
function APawn:ConsumeMovementInputVector() end

---Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.
---Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.
---@param WorldDirection FVector
---@param ScaleValue number @[opt] 
---@param bForce boolean @[opt] 
function APawn:AddMovementInput(WorldDirection, ScaleValue, bForce) end

---Add input (affecting Yaw) to the Controller's ControlRotation, if it is a local PlayerController.
---This value is multiplied by the PlayerController's InputYawScale value.
---@param Val number
function APawn:AddControllerYawInput(Val) end

---Add input (affecting Roll) to the Controller's ControlRotation, if it is a local PlayerController.
---This value is multiplied by the PlayerController's InputRollScale value.
---@param Val number
function APawn:AddControllerRollInput(Val) end

---Add input (affecting Pitch) to the Controller's ControlRotation, if it is a local PlayerController.
---This value is multiplied by the PlayerController's InputPitchScale value.
---@param Val number
function APawn:AddControllerPitchInput(Val) end

