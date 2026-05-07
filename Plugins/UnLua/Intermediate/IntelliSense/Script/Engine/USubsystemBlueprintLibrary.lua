---@class USubsystemBlueprintLibrary : UBlueprintFunctionLibrary
local USubsystemBlueprintLibrary = {}

---Get a World Subsystem from the World associated with the provided context
---@param ContextObject UObject
---@param Class TSubclassOf_UWorldSubsystem_
---@return UWorldSubsystem
function USubsystemBlueprintLibrary.GetWorldSubsystem(ContextObject, Class) end

---Get a Local Player Subsystem from the LocalPlayer associated with the provided context
---If the player controller isn't associated to a LocalPlayer nullptr is returned
---@param PlayerController APlayerController
---@param Class TSubclassOf_ULocalPlayerSubsystem_
---@return ULocalPlayerSubsystem
function USubsystemBlueprintLibrary.GetLocalPlayerSubSystemFromPlayerController(PlayerController, Class) end

---Get a Local Player Subsystem from the Local Player associated with the provided context
---@param ContextObject UObject
---@param Class TSubclassOf_ULocalPlayerSubsystem_
---@return ULocalPlayerSubsystem
function USubsystemBlueprintLibrary.GetLocalPlayerSubsystem(ContextObject, Class) end

---Get a Game Instance Subsystem from the Game Instance associated with the provided context
---@param ContextObject UObject
---@param Class TSubclassOf_UGameInstanceSubsystem_
---@return UGameInstanceSubsystem
function USubsystemBlueprintLibrary.GetGameInstanceSubsystem(ContextObject, Class) end

---Get a Game Instance Subsystem from the Game Instance associated with the provided context
---@param Class TSubclassOf_UEngineSubsystem_
---@return UEngineSubsystem
function USubsystemBlueprintLibrary.GetEngineSubsystem(Class) end

---Get an AudioEngine Subsystem from the AudioDevice associated with the provided context
---@param ContextObject UObject
---@param Class TSubclassOf_UAudioEngineSubsystem_
---@return UAudioEngineSubsystem
function USubsystemBlueprintLibrary.GetAudioEngineSubsystem(ContextObject, Class) end

