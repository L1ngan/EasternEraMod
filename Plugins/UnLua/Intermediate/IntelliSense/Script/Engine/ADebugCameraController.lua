---Camera controller that allows you to fly around a level mostly unrestricted by normal movement rules.
---To turn it on, please press Alt+C or both (left and right) analogs on XBox pad,
---or use the "ToggleDebugCamera" console command. Check the debug camera bindings
---in DefaultPawn.cpp for the camera controls.
---@class ADebugCameraController : APlayerController
---@field public bShowSelectedInfo boolean @Whether to show information about the selected actor on the debug camera HUD.
---@field public bIsFrozenRendering boolean @Saves whether the FreezeRendering console command is active
---@field public bIsOrbitingSelectedActor boolean @Whether to orbit selected actor.
---@field public bOrbitPivotUseCenter boolean @When orbiting, true if using actor center as pivot, false if using last selected hitpoint
---@field public bEnableBufferVisualization boolean @Whether set view mode to display GBuffer visualization overview
---@field public bEnableBufferVisualizationFullMode boolean @Whether set view mode to display GBuffer visualization full
---@field public bIsBufferVisualizationInputSetup boolean @Whether GBuffer visualization overview inputs are set up
---@field public bLastDisplayEnabled boolean @Last display enabled setting before toggling buffer visualization overview
---@field public DrawFrustum UDrawFrustumComponent @Visualizes the frustum of the camera
---@field public SelectedActor TWeakObjectPtr<AActor> @Currently selected actor, may be invalid
---@field public SelectedComponent TWeakObjectPtr<UPrimitiveComponent> @Currently selected component, may be invalid
---@field public SelectedHitPoint FHitResult @Selected hit point
---@field public OriginalControllerRef APlayerController @Controller that was active before this was spawned
---@field public OriginalPlayer UPlayer @Player object that was active before this was spawned
---@field public SpeedScale number @Allows control over the speed of the spectator pawn. This scales the speed based on the InitialMaxSpeed. Use Set Pawn Movement Speed Scale during runtime
---@field public InitialMaxSpeed number @Initial max speed of the spectator pawn when we start possession.
---@field public InitialAccel number @Initial acceleration of the spectator pawn when we start possession.
---@field public InitialDecel number @Initial deceleration of the spectator pawn when we start possession.
local ADebugCameraController = {}

---Toggles the display of debug info and input commands for the Debug Camera.
function ADebugCameraController:ToggleDisplay() end

---Sets whether to show information about the selected actor on the debug camera HUD.
function ADebugCameraController:ShowDebugSelectedInfo() end

---Sets the pawn movement speed scale.
---@param NewSpeedScale number
function ADebugCameraController:SetPawnMovementSpeedScale(NewSpeedScale) end

---Function called on deactivation of debug camera controller.
---@param RestoredPC APlayerController
function ADebugCameraController:ReceiveOnDeactivate(RestoredPC) end

---Called when an actor has been selected with the primary key (e.g. left mouse button).
---The selection trace starts from the center of the debug camera's view.
---@param NewSelectedActor AActor
---@param SelectHitLocation FVector
---@param SelectHitNormal FVector
---@param Hit FHitResult
function ADebugCameraController:ReceiveOnActorSelected(NewSelectedActor, SelectHitLocation, SelectHitNormal, Hit) end

---Function called on activation of debug camera controller.
---@param OriginalPC APlayerController
function ADebugCameraController:ReceiveOnActivate(OriginalPC) end

---Returns the currently selected actor, or null if it is invalid or not set
---@return AActor
function ADebugCameraController:GetSelectedActor() end

