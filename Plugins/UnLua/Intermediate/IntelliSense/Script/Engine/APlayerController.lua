---PlayerControllers are used by human players to control Pawns.
---ControlRotation (accessed via GetControlRotation()), determines the aiming
---orientation of the controlled Pawn.
---In networked games, PlayerControllers exist on the server for every player-controlled pawn,
---and also on the controlling client's machine. They do NOT exist on a client's
---machine for pawns controlled by remote players elsewhere on the network.
---@class APlayerController : AController
---@field public Player UPlayer @UPlayer associated with this PlayerController.  Could be a local player or a net connection.
---@field public AcknowledgedPawn APawn @Used in net games so client can acknowledge it possessed a specific pawn.
---@field public MyHUD AHUD @Heads up display associated with this PlayerController.
---@field public PlayerCameraManager APlayerCameraManager @Camera manager associated with this Player Controller.
---@field public PlayerCameraManagerClass TSubclassOf<APlayerCameraManager> @PlayerCamera class should be set for each game, otherwise Engine.PlayerCameraManager is used
---@field public bAutoManageActiveCameraTarget boolean @True to allow this player controller to manage the camera target for you, typically by using the possessed pawn as the camera target. Set to false if you want to manually control the camera target.
---@field public TargetViewRotation FRotator @Used to replicate the view rotation of targets not owned/possessed by this PlayerController.
---@field public SmoothTargetViewRotationSpeed number @Interp speed for blending remote view rotation for smoother client updates
---@field public HiddenActors TArray<AActor> @The actors which the camera shouldn't see - e.g. used to hide actors which the camera penetrates
---@field public HiddenPrimitiveComponents TArray<TWeakObjectPtr<UPrimitiveComponent>> @Explicit components the camera shouldn't see (helpful for external systems to hide a component from a single player)
---@field public LastSpectatorStateSynchTime number @Used to make sure the client is kept synchronized when in a spectator state
---@field public LastSpectatorSyncLocation FVector @Last location synced on the server for a spectator.
---@field public LastSpectatorSyncRotation FRotator @Last rotation synced on the server for a spectator.
---@field public ClientCap integer @Cap set by server on bandwidth from client to server in bytes/sec (only has impact if >=2600)
---@field public CheatManager UCheatManager @Object that manages "cheat" commands. By default:       - In Shipping configurations, the manager is always disabled because UE_WITH_CHEAT_MANAGER is 0   - When playing in the editor, cheats are always enabled   - In other cases, cheats are enabled by default in single player games but can be forced on with the EnableCheats console command This behavior can be changed either by overriding APlayerController::EnableCheats or AGameModeBase::AllowCheats.
---@field public CheatClass TSubclassOf<UCheatManager> @Class of my CheatManager.
---@field public PlayerInput UPlayerInput @Object that manages player input.
---@field public ActiveForceFeedbackEffects TArray<FActiveForceFeedbackEffect>
---@field public bPlayerIsWaiting boolean @True if PlayerController is currently waiting for the match to start or to respawn. Only valid in Spectating state.
---@field public NetPlayerIndex integer @Index identifying players using the same base connection (splitscreen clients) Used by netcode to match replicated PlayerControllers to the correct splitscreen viewport and child connection replicated via special internal code, not through normal variable replication
---@field public PendingSwapConnection UNetConnection @This is set on the OLD PlayerController when performing a swap over a network connection so we know what connection we're waiting on acknowledgment from to finish destroying this PC (or when the connection is closed)
---@field public NetConnection UNetConnection @The net connection this controller is communicating on, nullptr for local players on server
---@field public bShowMouseCursor boolean @Whether the mouse cursor should be displayed.
---@field public bEnableClickEvents boolean @Whether actor/component click events should be generated.
---@field public bEnableTouchEvents boolean @Whether actor/component touch events should be generated.
---@field public bEnableMouseOverEvents boolean @Whether actor/component mouse over events should be generated.
---@field public bEnableTouchOverEvents boolean @Whether actor/component touch over events should be generated.
---@field public bForceFeedbackEnabled boolean
---@field public bEnableMotionControls boolean @Whether or not to consider input from motion sources (tilt, acceleration, etc)
---@field public bEnableStreamingSource boolean @Whether the PlayerController should be used as a World Partiton streaming source.
---@field public bStreamingSourceShouldActivate boolean @Whether the PlayerController streaming source should activate cells after loading.
---@field public bStreamingSourceShouldBlockOnSlowStreaming boolean @Whether the PlayerController streaming source should block on slow streaming.
---@field public StreamingSourcePriority EStreamingSourcePriority @PlayerController streaming source priority.
---@field public StreamingSourceDebugColor FColor @Color used for debugging.
---@field public StreamingSourceShapes TArray<FStreamingSourceShape> @Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range.
---@field public ForceFeedbackScale number @Scale applied to force feedback values
---@field public ClickEventKeys TArray<FKey> @List of keys that will cause click events to be forwarded, default to left click
---@field public DefaultMouseCursor integer @Type of mouse cursor to show by default
---@field public CurrentMouseCursor integer @Currently visible mouse cursor
---@field public DefaultClickTraceChannel integer @Default trace channel used for determining what world object was clicked on.
---@field public CurrentClickTraceChannel integer @Trace channel currently being used for determining what world object was clicked on.
---@field public HitResultTraceDistance number @Distance to trace when computing click events
---@field public SeamlessTravelCount integer @Counter for this players seamless travels (used along with the below value, to restrict ServerNotifyLoadedWorld)
---@field public LastCompletedSeamlessTravelCount integer @The value of SeamlessTravelCount, upon the last call to GameModeBase::HandleSeamlessTravelPlayer; used to detect seamless travel
---@field protected InactiveStateInputComponent UInputComponent @InputComponent we use when player is in Inactive state.
---@field protected bShouldPerformFullTickWhenPaused boolean @Whether we fully tick when the game is paused, if our tick function is allowed to do so. If false, we do a minimal update during the tick.
---@field protected CurrentTouchInterface UTouchInterface @The currently set touch interface
---@field protected OverridePlayerInputClass TSubclassOf<UPlayerInput> @If set, then this UPlayerInput class will be used instead of the Input Settings' DefaultPlayerInputClass
---@field private SpectatorPawn ASpectatorPawn @The pawn used when spectating (nullptr if not spectating).
---@field private bIsLocalPlayerController boolean @Set during SpawnActor once and never again to indicate the intent of this controller instance (SERVER ONLY)
---@field protected SpawnLocation FVector @The location used internally when there is no pawn or spectator, to know where to spawn the spectator or focus the camera on death.
---@field private CachedConnectionPlayerId FUniqueNetIdRepl @The player id associated with this player controller.
---@field private ClientHandshakeId integer @An optional client handshake id used by the connection associated with this player controller.
local APlayerController = {}

---Returns true if the given key/button was down last frame and up this frame.
---@param Key FKey
---@return boolean
function APlayerController:WasInputKeyJustReleased(Key) end

---Returns true if the given key/button was up last frame and down this frame.
---@param Key FKey
---@return boolean
function APlayerController:WasInputKeyJustPressed(Key) end

---Toggle voice chat on and off
---@param bInSpeaking boolean
function APlayerController:ToggleSpeaking(bInSpeaking) end

---@param PackageName string
---@param FileName string
function APlayerController:TestServerLevelVisibilityChange(PackageName, FileName) end

---SwitchLevel to the given MapURL.
---@param URL string
function APlayerController:SwitchLevel(URL) end

---Whether the PlayerController streaming source should block on slow streaming.
---Default implementation returns bStreamingSourceShouldBlockOnSlowStreaming but can be overriden in child classes.
---@return boolean
function APlayerController:StreamingSourceShouldBlockOnSlowStreaming() end

---Whether the PlayerController streaming source should activate cells after loading.
---Default implementation returns bStreamingSourceShouldActivate but can be overriden in child classes.
---@return boolean
function APlayerController:StreamingSourceShouldActivate() end

---Stops a playing haptic feedback curve
---@param Hand EControllerHand
function APlayerController:StopHapticEffect(Hand) end

---Fire the player's currently selected weapon with the optional firemode.
---@param FireModeNum integer @[opt] 
function APlayerController:StartFire(FireModeNum) end

---Set the virtual joystick visibility.
---@param bVisible boolean
function APlayerController:SetVirtualJoystickVisibility(bVisible) end

---Set the view target blending with variable control
---@param NewViewTarget AActor
---@param BlendTime number @[opt] 
---@param BlendFunc integer @[opt] 
---@param BlendExp number @[opt] 
---@param bLockOutgoing boolean @[opt] 
function APlayerController:SetViewTargetWithBlend(NewViewTarget, BlendTime, BlendFunc, BlendExp, bLockOutgoing) end

---Tries to set the player's name to the given name.
---@param S string
function APlayerController:SetName(S) end

---Positions the mouse cursor in screen space, in pixels.
---@param X integer
---@param Y integer
function APlayerController:SetMouseLocation(X, Y) end

---Sets the Widget for the Mouse Cursor to display
---@param Cursor integer
---@param CursorWidget UUserWidget
function APlayerController:SetMouseCursorWidget(Cursor, CursorWidget) end

---@param bEnabled boolean
function APlayerController:SetMotionControlsEnabled(bEnabled) end

---Sets the value of the haptics for the specified hand directly, using frequency and amplitude.  NOTE:  If a curve is already
---playing for this hand, it will be cancelled in favour of the specified values.
---@param Frequency number
---@param Amplitude number
---@param Hand EControllerHand
function APlayerController:SetHapticsByValue(Frequency, Amplitude, Hand) end

---Allows the player controller to disable all haptic requests from being fired, e.g. in the case of a level loading
---@param bNewDisabled boolean
function APlayerController:SetDisableHaptics(bNewDisabled) end

---@param NewValue number
function APlayerController:SetDeprecatedInputYawScale(NewValue) end

---@param NewValue number
function APlayerController:SetDeprecatedInputRollScale(NewValue) end

---@param NewValue number
function APlayerController:SetDeprecatedInputPitchScale(NewValue) end

---Sets the trigger release thresholds of the player's controller
---@param LeftThreshold number
---@param RightThreshold number
function APlayerController:SetControllerTriggerReleaseThresholds(LeftThreshold, RightThreshold) end

---Sets the light color of the player's controller
---@param Color FColor
function APlayerController:SetControllerLightColor(Color) end

---Sets whether the player's controller's gyro auto calibration is enabled
---@param bEnabled boolean
function APlayerController:SetControllerGyroAutoCalibration(bEnabled) end

---Sets the deadzones of the player's controller
---@param LeftDeadZone number
---@param RightDeadZone number
function APlayerController:SetControllerDeadZones(LeftDeadZone, RightDeadZone) end

---Server/SP only function for changing whether the player is in cinematic mode.  Updates values of various state variables, then replicates the call to the client
---to sync the current cinematic mode.
---@param bInCinematicMode boolean
---@param bHidePlayer boolean
---@param bAffectsHUD boolean
---@param bAffectsMovement boolean
---@param bAffectsTurning boolean
function APlayerController:SetCinematicMode(bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning) end

---Used to override the default positioning of the audio listener
---@param AttachToComponent USceneComponent
---@param Location FVector
---@param Rotation FRotator
function APlayerController:SetAudioListenerOverride(AttachToComponent, Location, Rotation) end

---@param AttachToComponent USceneComponent
---@param AttenuationLocationOVerride FVector
function APlayerController:SetAudioListenerAttenuationOverride(AttachToComponent, AttenuationLocationOVerride) end

---Move camera to current user
---@param TransitionParams FViewTargetTransitionParams
function APlayerController:ServerViewSelf(TransitionParams) end

---Move camera to previous player on round ended or spectating
function APlayerController:ServerViewPrevPlayer() end

---Move camera to next player on round ended or spectating
function APlayerController:ServerViewNextPlayer() end

---Used by client to request server to confirm current viewtarget (server will respond with ClientSetViewTarget() ).
function APlayerController:ServerVerifyViewTarget() end

---Called when the client adds/removes a streamed level.  This version of the function allows you to pass the state of
---multiple levels at once, to reduce the number of RPC events that will be sent.
---@param LevelVisibilities TArray_FUpdateLevelVisibilityLevelInfo_
function APlayerController:ServerUpdateMultipleLevelsVisibility(LevelVisibilities) end

---Called when the client adds/removes a streamed level.
---The server will only replicate references to Actors in visible levels so that it's impossible to send references to
---Actors the client has not initialized.
---@param LevelVisibility FUpdateLevelVisibilityLevelInfo
function APlayerController:ServerUpdateLevelVisibility(LevelVisibility) end

---If PlayerCamera.bUseClientSideCameraUpdates is set, client will replicate camera positions to the server. // @@TODO - combine pitch/yaw into one int, maybe also send location compressed
---@param CamLoc FVector_NetQuantize
---@param CamPitchAndYaw integer
function APlayerController:ServerUpdateCamera(CamLoc, CamPitchAndYaw) end

---Tell the server to unmute a player for this controller
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ServerUnmutePlayer(PlayerId) end

---Tell the client to unblock a player for this controller
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ServerUnblockPlayer(PlayerId) end

---Used by UGameplayDebuggingControllerComponent to replicate messages for AI debugging in network games.
function APlayerController:ServerToggleAILogging() end

---Notifies the server that the client has ticked gameplay code, and should no longer get the extended "still loading" timeout grace period
function APlayerController:ServerShortTimeout() end

---Indicate that the Spectator is waiting to join/respawn.
---@param bWaiting boolean
function APlayerController:ServerSetSpectatorWaiting(bWaiting) end

---When spectating, updates spectator location/rotation and pings the server to make sure spectating should continue.
---@param NewLoc FVector
---@param NewRot FRotator
function APlayerController:ServerSetSpectatorLocation(NewLoc, NewRot) end

---Server receives the clients FAsyncPhysicsTimestamp with its predicted ServerFrame and clients LocalFrame, to updates the time dilation needed to keep the ServerFrame prediction in sync
---@param Timestamp FAsyncPhysicsTimestamp
function APlayerController:ServerSendLatestAsyncPhysicsTimestamp(Timestamp) end

---Attempts to restart this player, generally called from the client upon respawn request.
function APlayerController:ServerRestartPlayer() end

---Replicate pause request to the server
function APlayerController:ServerPause() end

---Called to notify the server when the client has loaded a new world via seamless traveling
---@param WorldPackageName string
function APlayerController:ServerNotifyLoadedWorld(WorldPackageName) end

---Tell the server to mute a player for this controller
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ServerMutePlayer(PlayerId) end

---RPC used by ServerExec. Not intended to be called directly
---@param Msg string
function APlayerController:ServerExecRPC(Msg) end

---Executes command on server (non shipping builds only)
---@param Msg string
function APlayerController:ServerExec(Msg) end

---Reliable version of ServerCheckClientPossession to be used when there is no likely danger of spamming the network.
function APlayerController:ServerCheckClientPossessionReliable() end

---Tells the server to make sure the possessed pawn is in sync with the client.
function APlayerController:ServerCheckClientPossession() end

---Change name of server
---@param S string
function APlayerController:ServerChangeName(S) end

---change mode of camera
---@param NewMode string
function APlayerController:ServerCamera(NewMode) end

---Tell the client to block a player for this controller
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ServerBlockPlayer(PlayerId) end

---acknowledge possession of pawn
---@param P APawn
function APlayerController:ServerAcknowledgePossession(P) end

---Sends a command to the console to execute if not shipping version
---@param Command string
function APlayerController:SendToConsole(Command) end

---Restarts the current level
function APlayerController:RestartLevel() end

---Resets the player's controller trigger release thresholds to default
function APlayerController:ResetControllerTriggerReleaseThresholds() end

---Resets the light color of the player's controller to default
function APlayerController:ResetControllerLightColor() end

---Resets the player's controller deadzones to default
function APlayerController:ResetControllerDeadZones() end

---Convert a World Space 3D position into a 2D Screen Space position.
---@param WorldLocation FVector
---@param ScreenLocation FVector2D @[out] 
---@param bPlayerViewportRelative boolean @[opt] 
---@return boolean
function APlayerController:ProjectWorldLocationToScreen(WorldLocation, ScreenLocation, bPlayerViewportRelative) end

---Play a haptic feedback curve on the player's controller
---@param HapticEffect UHapticFeedbackEffect_Base
---@param Hand EControllerHand
---@param Scale number @[opt] 
---@param bLoop boolean @[opt] 
function APlayerController:PlayHapticEffect(HapticEffect, Hand, Scale, bLoop) end

---Latent action that controls the playing of force feedback
---Begins playing when Start is called.  Calling Update or Stop if the feedback is not active will have no effect.
---Completed will execute when Stop is called or the duration ends.
---When Update is called the Intensity, Duration, and affect values will be updated with the current inputs
---@param Intensity number
---@param Duration number
---@param bAffectsLeftLarge boolean
---@param bAffectsLeftSmall boolean
---@param bAffectsRightLarge boolean
---@param bAffectsRightSmall boolean
---@param Action integer
function APlayerController:PlayDynamicForceFeedback(Intensity, Duration, bAffectsLeftLarge, bAffectsLeftSmall, bAffectsRightLarge, bAffectsRightSmall, Action) end

---Command to try to pause the game.
function APlayerController:Pause() end

---Notify from server that Visual Logger is recording, to show that information on client about possible performance issues
---@param bIsLogging boolean
function APlayerController:OnServerStartedVisualLogger(bIsLogging) end

---Causes the client to travel to the given URL
---@param URL string
function APlayerController:LocalTravel(URL) end

---Play a force feedback pattern on the player's controller
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Tag string
---@param bLooping boolean
---@param bIgnoreTimeDilation boolean
---@param bPlayWhilePaused boolean
function APlayerController:K2_ClientPlayForceFeedback(ForceFeedbackEffect, Tag, bLooping, bIgnoreTimeDilation, bPlayWhilePaused) end

---Whether the PlayerController should be used as a World Partiton streaming source.
---Default implementation returns bEnableStreamingSource but can be overriden in child classes.
---@return boolean
function APlayerController:IsStreamingSourceEnabled() end

---Wrapper for determining whether this player is the first player on their console.
---@return boolean
function APlayerController:IsPrimaryPlayer() end

---Returns true if the given key/button is pressed on the input of the controller (if present)
---@param Key FKey
---@return boolean
function APlayerController:IsInputKeyDown(Key) end

---Helper to get the size of the HUD canvas for this player controller.  Returns 0 if there is no HUD
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
function APlayerController:GetViewportSize(SizeX, SizeY) end

---Gets the streaming source priority.
---Default implementation returns StreamingSourceShapes but can be overriden in child classes.
---@param OutShapes TArray_FStreamingSourceShape_ @[out] 
function APlayerController:GetStreamingSourceShapes(OutShapes) end

---Gets the streaming source priority.
---Default implementation returns StreamingSourcePriority but can be overriden in child classes.
---@return EStreamingSourcePriority
function APlayerController:GetStreamingSourcePriority() end

---Gets the streaming source location and rotation.
---Default implementation returns APlayerController::GetPlayerViewPoint but can be overriden in child classes.
---@param OutLocation FVector @[out] 
---@param OutRotation FRotator @[out] 
function APlayerController:GetStreamingSourceLocationAndRotation(OutLocation, OutRotation) end

---Get the Pawn used when spectating. nullptr when not spectating.
---@return ASpectatorPawn
function APlayerController:GetSpectatorPawn() end

---Returns the platform user that is assigned to this Player Controller's Local Player.
---If there is no local player, then this will return PLATFORMUSERID_NONE
---@return FPlatformUserId
function APlayerController:GetPlatformUserId() end

---@return TSubclassOf_UPlayerInput_
function APlayerController:GetOverridePlayerInputClass() end

---Retrieves the X and Y screen coordinates of the mouse cursor. Returns false if there is no associated mouse device
---@param LocationX number @[out] 
---@param LocationY number @[out] 
---@return boolean
function APlayerController:GetMousePosition(LocationX, LocationY) end

---Returns the vector value for the given key/button.
---@param Key FKey
---@return FVector
function APlayerController:GetInputVectorKeyState(Key) end

---Retrieves the X and Y screen coordinates of the specified touch key. Returns false if the touch index is not down
---@param FingerIndex integer
---@param LocationX number @[out] 
---@param LocationY number @[out] 
---@param bIsCurrentlyPressed boolean @[out] 
function APlayerController:GetInputTouchState(FingerIndex, LocationX, LocationY, bIsCurrentlyPressed) end

---Retrieves how far the mouse moved this frame.
---@param DeltaX number @[out] 
---@param DeltaY number @[out] 
function APlayerController:GetInputMouseDelta(DeltaX, DeltaY) end

---Retrieves the current motion state of the player's input device
---@param Tilt FVector @[out] 
---@param RotationRate FVector @[out] 
---@param Gravity FVector @[out] 
---@param Acceleration FVector @[out] 
function APlayerController:GetInputMotionState(Tilt, RotationRate, Gravity, Acceleration) end

---Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame.
---@param Key FKey
---@return number
function APlayerController:GetInputKeyTimeDown(Key) end

---Retrieves the X and Y displacement of the given analog stick.
---@param WhichStick integer
---@param StickX number @[out] 
---@param StickY number @[out] 
function APlayerController:GetInputAnalogStickState(WhichStick, StickX, StickY) end

---Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up.
---@param Key FKey
---@return number
function APlayerController:GetInputAnalogKeyState(Key) end

---Gets the HUD currently being used by this player controller
---@return AHUD
function APlayerController:GetHUD() end

---Performs a collision query under the finger, looking for object types
---@param FingerIndex integer
---@param ObjectTypes TArray_integer_
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderFingerForObjects(FingerIndex, ObjectTypes, bTraceComplex, HitResult) end

---Performs a collision query under the finger, looking on a trace channel
---@param FingerIndex integer
---@param TraceChannel integer
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderFingerByChannel(FingerIndex, TraceChannel, bTraceComplex, HitResult) end

---@param FingerIndex integer
---@param TraceChannel integer
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderFinger(FingerIndex, TraceChannel, bTraceComplex, HitResult) end

---Performs a collision query under the mouse cursor, looking for object types
---@param ObjectTypes TArray_integer_
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderCursorForObjects(ObjectTypes, bTraceComplex, HitResult) end

---Performs a collision query under the mouse cursor, looking on a trace channel
---@param TraceChannel integer
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderCursorByChannel(TraceChannel, bTraceComplex, HitResult) end

---@param TraceChannel integer
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderCursor(TraceChannel, bTraceComplex, HitResult) end

---Returns the location the PlayerController is focused on.
--- If there is a possessed Pawn, returns the Pawn's location.
--- If there is a spectator Pawn, returns that Pawn's location.
--- Otherwise, returns the PlayerController's spawn location (usually the last known Pawn location after it has died).
---@return FVector
function APlayerController:GetFocalLocation() end

---@return number
function APlayerController:GetDeprecatedInputYawScale() end

---@return number
function APlayerController:GetDeprecatedInputRollScale() end

---@return number
function APlayerController:GetDeprecatedInputPitchScale() end

---Set the field of view to NewFOV
---@param NewFOV number
function APlayerController:FOV(NewFOV) end

---Run from the console to try and manually enable cheats which are disabled by default in multiplayer, games can override this
function APlayerController:EnableCheats() end

---Convert 2D screen position to World Space 3D position and direction. Returns false if unable to determine value. *
---@param ScreenX number
---@param ScreenY number
---@param WorldLocation FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function APlayerController:DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldLocation, WorldDirection) end

---Convert current mouse 2D position to World Space 3D position and direction. Returns false if unable to determine value. *
---@param WorldLocation FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function APlayerController:DeprojectMousePositionToWorld(WorldLocation, WorldDirection) end

---Console control commands, useful when remote debugging so you can't touch the console the normal way
---@param Key FKey
function APlayerController:ConsoleKey(Key) end

---Notify client they were kicked from the server
---@param KickReason string
function APlayerController:ClientWasKicked(KickReason) end

---Tells the client that the server has all the information it needs and that it
---is ok to start sending voice packets. The server will already send voice packets
---when this function is called, since it is set server side and then forwarded
---NOTE: This is done as an RPC instead of variable replication because ordering matters
function APlayerController:ClientVoiceHandshakeComplete() end

---Replicated Update streaming status.  This version allows for the streaming state of many levels to be sent in a single RPC.
---@param LevelStatuses TArray_FUpdateLevelStreamingLevelStatus_
function APlayerController:ClientUpdateMultipleLevelsStreamingStatus(LevelStatuses) end

---Replicated Update streaming status
---@param PackageName string
---@param bNewShouldBeLoaded boolean
---@param bNewShouldBeVisible boolean
---@param bNewShouldBlockOnLoad boolean
---@param LODIndex integer
---@param TransactionId FNetLevelVisibilityTransactionId
---@param bNewShouldBlockOnUnload boolean
function APlayerController:ClientUpdateLevelStreamingStatus(PackageName, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad, LODIndex, TransactionId, bNewShouldBlockOnUnload) end

---Tell the client to unmute an array of players for this controller
---@param PlayerIds TArray_FUniqueNetIdRepl_
function APlayerController:ClientUnmutePlayers(PlayerIds) end

---Tell the client to unmute a player for this controller
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ClientUnmutePlayer(PlayerId) end

---Internal clientside implementation of ClientTravel - use ClientTravel to call this
---                                                     for the bSeamlesss parameter, this value must be TRAVEL_Relative.
---                                                     so it is only needed for clients
---@param URL string
---@param TravelType integer
---@param bSeamless boolean
---@param MapPackageGuid FGuid
function APlayerController:ClientTravelInternal(URL, TravelType, bSeamless, MapPackageGuid) end

---Travel to a different map or IP address. Calls the PreClientTravel event before doing anything.
---NOTE: This is implemented as a locally executed wrapper for ClientTravelInternal, to avoid API compatability breakage
---                                                     for the bSeamlesss parameter, this value must be TRAVEL_Relative.
---                                                     so it is only needed for clients
---@param URL string
---@param TravelType integer
---@param bSeamless boolean
---@param MapPackageGuid FGuid
function APlayerController:ClientTravel(URL, TravelType, bSeamless, MapPackageGuid) end

---
---@param SenderPlayerState APlayerState
---@param S string
---@param Type string
---@param MsgLifeTime number
function APlayerController:ClientTeamMessage(SenderPlayerState, S, Type, MsgLifeTime) end

---Stops a playing force feedback pattern
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Tag string
function APlayerController:ClientStopForceFeedback(ForceFeedbackEffect, Tag) end

---Stop camera shake on client.
---@param SourceComponent UCameraShakeSourceComponent
---@param bImmediately boolean @[opt] 
function APlayerController:ClientStopCameraShakesFromSource(SourceComponent, bImmediately) end

---Stop camera shake on client.
---@param Shake TSubclassOf_UCameraShakeBase_
---@param bImmediately boolean @[opt] 
function APlayerController:ClientStopCameraShake(Shake, bImmediately) end

---Notify client that the session is starting
function APlayerController:ClientStartOnlineSession() end

---Play Camera Shake localized to a given source
---@param Shake TSubclassOf_UCameraShakeBase_
---@param SourceComponent UCameraShakeSourceComponent
function APlayerController:ClientStartCameraShakeFromSource(Shake, SourceComponent) end

---Play Camera Shake
---@param Shake TSubclassOf_UCameraShakeBase_
---@param Scale number @[opt] 
---@param PlaySpace ECameraShakePlaySpace @[opt] 
---@param UserPlaySpaceRot FRotator
function APlayerController:ClientStartCameraShake(Shake, Scale, PlaySpace, UserPlaySpaceRot) end

---Spawn a camera lens effect (e.g. blood).
---@param LensEffectEmitterClass TSubclassOf_AActor_
function APlayerController:ClientSpawnGenericCameraLensEffect(LensEffectEmitterClass) end

---@param LensEffectEmitterClass TSubclassOf_AEmitterCameraLensEffectBase_
function APlayerController:ClientSpawnCameraLensEffect(LensEffectEmitterClass) end

---Set the view target
---@param A AActor
---@param TransitionParams FViewTargetTransitionParams
function APlayerController:ClientSetViewTarget(A, TransitionParams) end

---Client receives the setup of the FAsyncPhysicsTimestamp ServerFrame and LocalFrame offset from the server.
---@param Timestamp FAsyncPhysicsTimestamp
function APlayerController:ClientSetupNetworkPhysicsTimestamp(Timestamp) end

---Indicate that the Spectator is waiting to join/respawn.
---@param bWaiting boolean
function APlayerController:ClientSetSpectatorWaiting(bWaiting) end

---Set the client's class of HUD and spawns a new instance of it. If there was already a HUD active, it is destroyed.
---@param NewHUDClass TSubclassOf_AHUD_
function APlayerController:ClientSetHUD(NewHUDClass) end

---Forces the streaming system to disregard the normal logic for the specified duration and
---instead always load all mip-levels for all textures used by the specified material.
---@param Material UMaterialInterface
---@param ForceDuration number
---@param CinematicTextureGroups integer
function APlayerController:ClientSetForceMipLevelsToBeResident(Material, ForceDuration, CinematicTextureGroups) end

---Called by the server to synchronize cinematic transitions with the client
---@param bInCinematicMode boolean
---@param bAffectsMovement boolean
---@param bAffectsTurning boolean
---@param bAffectsHUD boolean
function APlayerController:ClientSetCinematicMode(bInCinematicMode, bAffectsMovement, bAffectsTurning, bAffectsHUD) end

---Replicated function to set camera style on client
---@param NewCamMode string
function APlayerController:ClientSetCameraMode(NewCamMode) end

---Tell client to fade camera
---@param bEnableFading boolean
---@param FadeColor FColor
---@param FadeAlpha FVector2D
---@param FadeTime number
---@param bFadeAudio boolean
---@param bHoldWhenFinished boolean
function APlayerController:ClientSetCameraFade(bEnableFading, FadeColor, FadeAlpha, FadeTime, bFadeAudio, bHoldWhenFinished) end

---Tells the client to block until all pending level streaming actions are complete.
---Happens at the end of the tick primarily used to force update the client ASAP at join time.
function APlayerController:ClientSetBlockOnAsyncLoading() end

---Return the client to the main menu gracefully
---@param ReturnReason string
function APlayerController:ClientReturnToMainMenuWithTextReason(ReturnReason) end

---Assign Pawn to player, but avoid calling ClientRestart if we have already accepted this pawn
---@param NewPawn APawn
function APlayerController:ClientRetryClientRestart(NewPawn) end

---Tell client to restart the level
---@param NewPawn APawn
function APlayerController:ClientRestart(NewPawn) end

---Tell client to reset the PlayerController
function APlayerController:ClientReset() end

---Development RPC for testing object reference replication
---@param Object UObject
function APlayerController:ClientRepObjRef(Object) end

---send client localized message id
---@param Message TSubclassOf_ULocalMessage_
---@param Switch integer
---@param RelatedPlayerState_1 APlayerState
---@param RelatedPlayerState_2 APlayerState
---@param OptionalObject UObject
function APlayerController:ClientReceiveLocalizedMessage(Message, Switch, RelatedPlayerState_1, RelatedPlayerState_2, OptionalObject) end

---Forces the streaming system to disregard the normal logic for the specified duration and
---instead always load all mip-levels for all textures used by the specified actor.
---@param ForcedActor AActor
---@param ForceDuration number
---@param bEnableStreaming boolean
---@param CinematicTextureGroups integer
function APlayerController:ClientPrestreamTextures(ForcedActor, ForceDuration, bEnableStreaming, CinematicTextureGroups) end

---Asynchronously loads the given level in preparation for a streaming map transition.
---the server sends one function per level name since dynamic arrays can't be replicated
---@param LevelName string
---@param bFirst boolean
---@param bLast boolean
function APlayerController:ClientPrepareMapChange(LevelName, bFirst, bLast) end

---Play sound client-side at the specified location
---@param Sound USoundBase
---@param Location FVector
---@param VolumeMultiplier number
---@param PitchMultiplier number
function APlayerController:ClientPlaySoundAtLocation(Sound, Location, VolumeMultiplier, PitchMultiplier) end

---Play sound client-side (so only the client will hear it)
---@param Sound USoundBase
---@param VolumeMultiplier number
---@param PitchMultiplier number
function APlayerController:ClientPlaySound(Sound, VolumeMultiplier, PitchMultiplier) end

---Internal replicated version of client play force feedback event.
---Cannot be named ClientPlayForceFeedback as redirector for blueprint function version to K2_... does not work in that case
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Params FForceFeedbackParameters
function APlayerController:ClientPlayForceFeedback_Internal(ForceFeedbackEffect, Params) end

---Tell the client to mute a player for this controller
---@param PlayerId FUniqueNetIdRepl
function APlayerController:ClientMutePlayer(PlayerId) end

---Outputs a message to HUD
---@param S string
---@param Type string
---@param MsgLifeTime number
function APlayerController:ClientMessage(S, Type, MsgLifeTime) end

---Calls IgnoreMoveInput on client
---@param bIgnore boolean
function APlayerController:ClientIgnoreMoveInput(bIgnore) end

---Calls IgnoreLookInput on client
---@param bIgnore boolean
function APlayerController:ClientIgnoreLookInput(bIgnore) end

---Server uses this to force client into NewState .
---@param NewState string
function APlayerController:ClientGotoState(NewState) end

---Replicated function called by GameHasEnded().
---@param EndGameFocus AActor
---@param bIsWinner boolean
function APlayerController:ClientGameEnded(EndGameFocus, bIsWinner) end

---Forces GC at the end of the tick on the client
function APlayerController:ClientForceGarbageCollection() end

---Tells the client to block until all pending level streaming actions are complete
---happens at the end of the tick
---primarily used to force update the client ASAP at join time
function APlayerController:ClientFlushLevelStreaming() end

---Notify client that the session is about to start
function APlayerController:ClientEndOnlineSession() end

---Tell the client to enable or disable voice chat (not muting)
---@param bEnable boolean
function APlayerController:ClientEnableNetworkVoice(bEnable) end

---Actually performs the level transition prepared by PrepareMapChange().
function APlayerController:ClientCommitMapChange() end

---Removes all Camera Lens Effects.
function APlayerController:ClientClearCameraLensEffects() end

---Set CurrentNetSpeed to the lower of its current value and Cap.
---@param Cap integer
function APlayerController:ClientCapBandwidth(Cap) end

---Tells client to cancel any pending map change.
function APlayerController:ClientCancelPendingMapChange() end

---Adds a location to the texture streaming system for the specified duration.
---@param InLoc FVector
---@param Duration number
---@param bOverrideLocation boolean
function APlayerController:ClientAddTextureStreamingLoc(InLoc, Duration, bOverrideLocation) end

---Acknowledge received LevelVisibilityTransactionId
---@param PackageName string
---@param TransactionId FNetLevelVisibilityTransactionId
---@param bClientAckCanMakeVisible boolean
function APlayerController:ClientAckUpdateLevelVisibility(PackageName, TransactionId, bClientAckCanMakeVisible) end

---Client receives the time dilation value it needs to use to keep its ServerFrame to LocalFrame offset in sync
---@param TimeDilation number
---@param ServerStep integer
function APlayerController:ClientAckTimeDilation(TimeDilation, ServerStep) end

---Clear any overrides that have been applied to audio listener
function APlayerController:ClearAudioListenerOverride() end

function APlayerController:ClearAudioListenerAttenuationOverride() end

---Returns true if this controller thinks it's able to restart. Called from GameModeBase::PlayerCanRestart
---@return boolean
function APlayerController:CanRestartPlayer() end

---Change Camera mode
---@param NewMode string
function APlayerController:Camera(NewMode) end

---Add Yaw (turn) input. This value is multiplied by InputYawScale.
---@param Val number
function APlayerController:AddYawInput(Val) end

---Add Roll input. This value is multiplied by InputRollScale.
---@param Val number
function APlayerController:AddRollInput(Val) end

---Add Pitch (look up) input. This value is multiplied by InputPitchScale.
---@param Val number
function APlayerController:AddPitchInput(Val) end

---Activates a new touch interface for this player controller
---@param NewTouchInterface UTouchInterface
function APlayerController:ActivateTouchInterface(NewTouchInterface) end

