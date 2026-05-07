---Cheat Manager is a central blueprint to implement test and debug code and actions that are not to ship with the game.
---As the Cheat Manager is not instanced in shipping builds, it is for debugging purposes only
---@class UCheatManager : UObject
---@field public DebugCameraControllerRef ADebugCameraController @Debug camera - used to have independent camera without stopping gameplay
---@field public DebugCameraControllerClass TSubclassOf<ADebugCameraController> @Debug camera - used to have independent camera without stopping gameplay
---@field protected CheatManagerExtensions TArray<UCheatManagerExtension> @List of registered cheat manager extensions
local UCheatManager = {}

---Return to walking movement mode from Fly or Ghost cheat.
function UCheatManager:Walk() end

---Make controlled pawn the viewtarget again.
function UCheatManager:ViewSelf() end

---View from the point of view of player with PlayerName S.
---@param S string
function UCheatManager:ViewPlayer(S) end

---View from the point of view of an AActor of class DesiredClass.  Each subsequent ViewClass cycles through the list of actors of that class.
---@param DesiredClass TSubclassOf_AActor_
function UCheatManager:ViewClass(DesiredClass) end

---View from the point of view of AActor with Name ActorName.
---@param ActorName string
function UCheatManager:ViewActor(ActorName) end

function UCheatManager:UpdateSafeArea() end

function UCheatManager:ToggleServerStatReplicatorUpdateStatNet() end

function UCheatManager:ToggleServerStatReplicatorClientOverwrite() end

---Toggle between debug camera/player camera without locking gameplay and with locking local player controller input.
function UCheatManager:ToggleDebugCamera() end

---toggles AI logging
function UCheatManager:ToggleAILogging() end

---Test all volumes in the world to the player controller's view location*
function UCheatManager:TestCollisionDistance() end

---Teleport to surface player is looking at.
function UCheatManager:Teleport() end

---Load Classname and spawn an actor of that class
---@param ClassName string
function UCheatManager:Summon(ClassName) end

---Stream out the given level.
---@param PackageName string
function UCheatManager:StreamLevelOut(PackageName) end

---Stream in the given level.
---@param PackageName string
function UCheatManager:StreamLevelIn(PackageName) end

function UCheatManager:SpawnServerStatReplicator() end

---Modify time dilation to change apparent speed of passage of time. e.g. "Slomo 0.1" makes everything move very slowly, while "Slomo 10" makes everything move very fast.
---@param NewTimeDilation number
function UCheatManager:Slomo(NewTimeDilation) end

---Translate world origin to this player position
function UCheatManager:SetWorldOrigin() end

---Exec function to return the mouse sensitivity to its default value
function UCheatManager:SetMouseSensitivityToDefault() end

function UCheatManager:ServerToggleAILogging() end

---BP implementable event for when CheatManager is created to allow any needed initialization.
function UCheatManager:ReceiveInitCheatManager() end

---This is the End Play event for the CheatManager
function UCheatManager:ReceiveEndPlay() end

---Freeze everything in the level except for players.
function UCheatManager:PlayersOnly() end

---@param Player AActor
---@param EndPlayReason integer
function UCheatManager:OnPlayerEndPlayed(Player, EndPlayReason) end

---Load the given level.
---@param PackageName string
function UCheatManager:OnlyLoadLevel(PackageName) end

---Logs the current location in bugit format without taking screenshot and further routing.
function UCheatManager:LogLoc() end

---Backwards compatibility exec function for people used to it instead of using InvertAxisKey
function UCheatManager:InvertMouse() end

---Invulnerability cheat.
function UCheatManager:God() end

---Pawn no longer collides with the world, and can fly
function UCheatManager:Ghost() end

---@return APlayerController
function UCheatManager:GetPlayerController() end

---Pause the game for Delay seconds.
---@param Delay number
function UCheatManager:FreezeFrame(Delay) end

---Pawn can fly.
function UCheatManager:Fly() end

---This will force a flush of the output log to file
function UCheatManager:FlushLog() end

---Switch controller to debug camera without locking gameplay and with locking local player controller input
function UCheatManager:EnableDebugCamera() end

---Dump current state of voice chat
function UCheatManager:DumpVoiceMutingState() end

---Dump known party information
function UCheatManager:DumpPartyState() end

---Dump online session information
function UCheatManager:DumpOnlineSessionState() end

---Dump known chat information
function UCheatManager:DumpChatState() end

---Switch controller from debug camera back to normal controller
function UCheatManager:DisableDebugCamera() end

---Destroy the actor you're looking at.
function UCheatManager:DestroyTarget() end

function UCheatManager:DestroyServerStatReplicator() end

---Destroys (by calling destroy directly) all non-player pawns of class aClass in the level
---@param aClass TSubclassOf_APawn_
function UCheatManager:DestroyPawns(aClass) end

---Destroy all pawns except for the (pawn) target.  If no (pawn) target is found we don't destroy anything.
function UCheatManager:DestroyAllPawnsExceptTarget() end

---Destroy all actors of class aClass
---@param aClass TSubclassOf_AActor_
function UCheatManager:DestroyAll(aClass) end

---Change Trace capsule size *
---@param HalfHeight number
---@param Radius number
function UCheatManager:DebugCapsuleSweepSize(HalfHeight, Radius) end

---Capture current local PC's pawn's location and add to persistent list *
function UCheatManager:DebugCapsuleSweepPawn() end

---Change Trace Complex setting *
---@param bTraceComplex boolean
function UCheatManager:DebugCapsuleSweepComplex(bTraceComplex) end

---Clear persistent list for trace capture *
function UCheatManager:DebugCapsuleSweepClear() end

---Change Trace Channel *
---@param Channel integer
function UCheatManager:DebugCapsuleSweepChannel(Channel) end

---Capture current trace and add to persistent list *
function UCheatManager:DebugCapsuleSweepCapture() end

---Toggle capsule trace debugging. Will trace a capsule from current view point and show where it hits the world
function UCheatManager:DebugCapsuleSweep() end

---Damage the actor you're looking at (sourced from the player).
---@param DamageAmount number
function UCheatManager:DamageTarget(DamageAmount) end

---Executes commands listed in CheatScript.ScriptName ini section of DefaultGame.ini
---@param ScriptName string
function UCheatManager:CheatScript(ScriptName) end

---Scale the player's size to be F * default size.
---@param F number
function UCheatManager:ChangeSize(F) end

---This will create a BugItGo string for us.  Nice for calling form c++ where you just want the string and no Screenshots *
---@param ViewLocation FVector
---@param ViewRotation FRotator
---@param GoString string @[out] 
---@param LocString string @[out] 
function UCheatManager:BugItStringCreator(ViewLocation, ViewRotation, GoString, LocString) end

---This will move the player and set their rotation to the passed in values.
---We have this version of the BugIt family as it is easier to type in just raw numbers in the console.
---@param X number
---@param Y number
---@param Z number
---@param Pitch number
---@param Yaw number
---@param Roll number
function UCheatManager:BugItGo(X, Y, Z, Pitch, Yaw, Roll) end

---This function is used to print out the BugIt location.  It prints out copy and paste versions for both IMing someone to type in
---and also a gameinfo ?options version so that you can append it to your launching url and be taken to the correct place.
---Additionally, it will take a screen shot so reporting bugs is a one command action!
---@param ScreenShotDescription string
function UCheatManager:BugIt(ScreenShotDescription) end

