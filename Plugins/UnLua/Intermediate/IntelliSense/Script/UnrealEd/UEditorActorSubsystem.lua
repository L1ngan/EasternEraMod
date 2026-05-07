---UEditorActorUtilitiesSubsystem
---Subsystem for exposing actor related utilities to scripts,
---@class UEditorActorSubsystem : UEditorSubsystem
---@field public OnNewActorsDropped MulticastDelegate
---@field public OnNewActorsPlaced MulticastDelegate
---@field public OnEditCutActorsBegin MulticastDelegate
---@field public OnEditCutActorsEnd MulticastDelegate
---@field public OnEditCopyActorsBegin MulticastDelegate
---@field public OnEditCopyActorsEnd MulticastDelegate
---@field public OnEditPasteActorsBegin MulticastDelegate
---@field public OnEditPasteActorsEnd MulticastDelegate
---@field public OnDuplicateActorsBegin MulticastDelegate
---@field public OnDuplicateActorsEnd MulticastDelegate
---@field public OnDeleteActorsBegin MulticastDelegate
---@field public OnDeleteActorsEnd MulticastDelegate
---@field public OnActorLabelChanged MulticastDelegate
local UEditorActorSubsystem = {}

---Create an actor and place it in the world editor. The Actor can be created from a Factory, Archetype, Blueprint, Class or an Asset.
---The actor will be created in the current level and will be selected.
---@param ObjectToUse UObject
---@param Location FVector
---@param Rotation FRotator
---@param bTransient boolean @[opt] 
---@return AActor
function UEditorActorSubsystem:SpawnActorFromObject(ObjectToUse, Location, Rotation, bTransient) end

---Create an actor and place it in the world editor. Can be created from a Blueprint or a Class.
---The actor will be created in the current level and will be selected.
---@param ActorClass TSubclassOf_AActor_
---@param Location FVector
---@param Rotation FRotator
---@param bTransient boolean @[opt] 
---@return AActor
function UEditorActorSubsystem:SpawnActorFromClass(ActorClass, Location, Rotation, bTransient) end

---Clear the current world editor selection and select the provided actors. Exclude actor that are pending kill, in PIE, PreviewEditor, ...
---@param ActorsToSelect TArray_AActor_
function UEditorActorSubsystem:SetSelectedLevelActors(ActorsToSelect) end

---Sets the world transform of the given component, if possible.
---@param InSceneComponent USceneComponent
---@param InWorldTransform FTransform
---@return boolean
function UEditorActorSubsystem:SetComponentTransform(InSceneComponent, InWorldTransform) end

---Sets the world transform of the given actor, if possible.
---@param InActor AActor
---@param InWorldTransform FTransform
---@return boolean
function UEditorActorSubsystem:SetActorTransform(InActor, InWorldTransform) end

---Set the selection state for the selected actor
---@param Actor AActor
---@param bShouldBeSelected boolean
function UEditorActorSubsystem:SetActorSelectionState(Actor, bShouldBeSelected) end

---Selects nothing in the editor (another way to clear the selection)
function UEditorActorSubsystem:SelectNothing() end

---Select all children actors of the current selection.
---@param bRecurseChildren boolean
function UEditorActorSubsystem:SelectAllChildren(bRecurseChildren) end

---Select all actors and BSP models in the given world, except those which are hidden
--- @@param       InWorld         The world the actors are to be selected in.
---@param InWorld UWorld
function UEditorActorSubsystem:SelectAll(InWorld) end

---Invert the selection in the given world
---@param InWorld UWorld
function UEditorActorSubsystem:InvertSelection(InWorld) end

---Find all loaded Actors that are selected in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...
---@return TArray_AActor_
function UEditorActorSubsystem:GetSelectedLevelActors() end

---Find all loaded ActorComponent own by an actor in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...
---@return TArray_UActorComponent_
function UEditorActorSubsystem:GetAllLevelActorsComponents() end

---Find all loaded Actors in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...
---@return TArray_AActor_
function UEditorActorSubsystem:GetAllLevelActors() end

---Attempts to find the actor specified by PathToActor in the current editor world
---@param PathToActor string
---@return AActor
function UEditorActorSubsystem:GetActorReference(PathToActor) end

---Duplicate all the selected actors in the given world
---@param InWorld UWorld
function UEditorActorSubsystem:DuplicateSelectedActors(InWorld) end

---Duplicate actors from the world editor.
---* @@param     Offset                          Translation to offset duplicated actors by.
---@param ActorsToDuplicate TArray_AActor_
---@param ToWorld UWorld @[opt] 
---@param Offset FVector
---@return TArray_AActor_
function UEditorActorSubsystem:DuplicateActors(ActorsToDuplicate, ToWorld, Offset) end

---Duplicate an actor from the world editor.
---@param ActorToDuplicate AActor
---@param ToWorld UWorld @[opt] 
---@param Offset FVector
---@return AActor
function UEditorActorSubsystem:DuplicateActor(ActorToDuplicate, ToWorld, Offset) end

---Destroy the actors from the world editor. Notify the Editor that the actor got destroyed.
---@param ActorsToDestroy TArray_AActor_
---@return boolean
function UEditorActorSubsystem:DestroyActors(ActorsToDestroy) end

---Destroy the actor from the world editor. Notify the Editor that the actor got destroyed.
---@param ActorToDestroy AActor
---@return boolean
function UEditorActorSubsystem:DestroyActor(ActorToDestroy) end

---Delete all the selected actors in the given world
---@param InWorld UWorld
function UEditorActorSubsystem:DeleteSelectedActors(InWorld) end

---Replace in the level all Actors provided with a new actor of type ActorClass. Destroy all Actors provided.
---@param Actors TArray_AActor_
---@param ActorClass TSubclassOf_AActor_
---@param StaticMeshPackagePath string
---@return TArray_AActor_
function UEditorActorSubsystem:ConvertActors(Actors, ActorClass, StaticMeshPackagePath) end

---Remove all actors from the selection set
function UEditorActorSubsystem:ClearActorSelectionSet() end

