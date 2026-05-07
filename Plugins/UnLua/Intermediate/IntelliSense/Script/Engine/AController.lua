---Controllers are non-physical actors that can possess a Pawn to control
---its actions.  PlayerControllers are used by human players to control pawns, while
---AIControllers implement the artificial intelligence for the pawns they control.
---Controllers take control of a pawn using their Possess() method, and relinquish
---control of the pawn by calling UnPossess().
---Controllers receive notifications for many of the events occurring for the Pawn they
---are controlling.  This gives the controller the opportunity to implement the behavior
---in response to this event, intercepting the event and superseding the Pawn's default
---behavior.
---ControlRotation (accessed via GetControlRotation()), determines the viewing/aiming
---direction of the controlled Pawn and is affected by input such as from a mouse or gamepad.
---@class AController : AActor
---@field public PlayerState APlayerState @PlayerState containing replicated information about the player using this controller (only exists for players, not NPCs).
---@field public OnInstigatedAnyDamage MulticastDelegate @Called when the controller has instigated damage in any way
---@field public OnPossessedPawnChanged MulticastDelegate @Called on both authorities and clients when the possessed pawn changes (either OldPawn or NewPawn might be nullptr)
---@field public StateName string @Current gameplay state this controller is in
---@field private Pawn APawn @Pawn currently being controlled by this controller.  Use Pawn.Possess() to take control of a pawn
---@field private Character ACharacter @Character currently being controlled by this controller.  Value is same as Pawn if the controlled pawn is a character, otherwise nullptr
---@field private TransformComponent USceneComponent @Component to give controllers a transform and enable attachment if desired.
---@field protected ControlRotation FRotator @The control rotation of the Controller. See GetControlRotation.
---@field protected bAttachToPawn boolean @If true, the controller location will match the possessed Pawn's location. If false, it will not be updated. Rotation will match ControlRotation in either case. Since a Controller's location is normally inaccessible, this is intended mainly for purposes of being able to attach an Actor that follows the possessed Pawn location, but that still has the full aim rotation (since a Pawn might update only some components of the rotation).
local AController = {}

---Called to unpossess our pawn for any reason that is not the pawn being destroyed (destruction handled by PawnDestroyed()).
function AController:UnPossess() end

---Aborts the move the controller is currently performing
function AController:StopMovement() end

---Set the initial location and rotation of the controller, as well as the control rotation. Typically used when the controller is first created.
---@param NewLocation FVector
---@param NewRotation FRotator
function AController:SetInitialLocationAndRotation(NewLocation, NewRotation) end

---Locks or unlocks movement input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreMoveInput.
---@param bNewMoveInput boolean
function AController:SetIgnoreMoveInput(bNewMoveInput) end

---Locks or unlocks look input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreLookInput.
---@param bNewLookInput boolean
function AController:SetIgnoreLookInput(bNewLookInput) end

---Set the control rotation.
---@param NewRotation FRotator
function AController:SetControlRotation(NewRotation) end

---Stops ignoring move input by resetting the ignore move input state.
function AController:ResetIgnoreMoveInput() end

---Stops ignoring look input by resetting the ignore look input state.
function AController:ResetIgnoreLookInput() end

---Reset move and look input ignore flags.
function AController:ResetIgnoreInputFlags() end

---Blueprint implementable event to react to the controller unpossessing a pawn
---@param UnpossessedPawn APawn
function AController:ReceiveUnPossess(UnpossessedPawn) end

---Blueprint implementable event to react to the controller possessing a pawn
---@param PossessedPawn APawn
function AController:ReceivePossess(PossessedPawn) end

---Event when this controller instigates ANY damage
---@param Damage number
---@param DamageType UDamageType
---@param DamagedActor AActor
---@param DamageCauser AActor
function AController:ReceiveInstigatedAnyDamage(Damage, DamageType, DamagedActor, DamageCauser) end

---Handles attaching this controller to the specified pawn.
---Only runs on the network authority (where HasAuthority() returns true).
---Derived native classes can override OnPossess to filter the specified pawn.
---When possessed pawn changed, blueprint class gets notified by ReceivePossess
---and OnNewPawn delegate is broadcasted.
---@param InPawn APawn
function AController:Possess(InPawn) end

function AController:OnRep_PlayerState() end

---Replication Notification Callbacks
function AController:OnRep_Pawn() end

---Checks line to center and top of other actor
---@param Other AActor
---@param ViewPoint FVector
---@param bAlternateChecks boolean @[opt] 
---@return boolean
function AController:LineOfSightTo(Other, ViewPoint, bAlternateChecks) end

---Return the Pawn that is currently 'controlled' by this PlayerController
---@return APawn
function AController:K2_GetPawn() end

---Returns whether this Controller is a PlayerController.
---@return boolean
function AController:IsPlayerController() end

---Returns true if movement input is ignored.
---@return boolean
function AController:IsMoveInputIgnored() end

---Returns true if look input is ignored.
---@return boolean
function AController:IsLookInputIgnored() end

---Returns whether this Controller is a locally controlled PlayerController.
---@return boolean
function AController:IsLocalPlayerController() end

---Returns whether this Controller is a local controller.
---@return boolean
function AController:IsLocalController() end

---Get the actor the controller is looking at
---@return AActor
function AController:GetViewTarget() end

---Returns Player's Point of View
---For the AI this means the Pawn's 'Eyes' ViewPoint
---For a Human player, this means the Camera's ViewPoint
---@param Location FVector @[out] 
---@param Rotation FRotator @[out] 
function AController:GetPlayerViewPoint(Location, Rotation) end

---Get the desired pawn target rotation
---@return FRotator
function AController:GetDesiredRotation() end

---Get the control rotation. This is the full aim rotation, which may be different than a camera orientation (for example in a third person view),
---and may differ from the rotation of the controlled Pawn (which may choose not to visually pitch or roll, for example).
---@return FRotator
function AController:GetControlRotation() end

---Replicated function to set the pawn rotation, allowing the server to force.
---@param NewRotation FRotator
---@param bResetCamera boolean
function AController:ClientSetRotation(NewRotation, bResetCamera) end

---Replicated function to set the pawn location and rotation, allowing server to force (ex. teleports).
---@param NewLocation FVector
---@param NewRotation FRotator
function AController:ClientSetLocation(NewLocation, NewRotation) end

