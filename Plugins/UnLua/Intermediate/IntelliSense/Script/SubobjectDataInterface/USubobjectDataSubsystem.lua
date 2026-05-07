---The Subobject Data Subsystem will produce the reflected subobject data
---based on a given root object. A root object can be anything, an actor
---instance clicked on via the level editor, a UBlueprint* by opening an asset,
---or something piped in from python or other scripting languages.
---@class USubobjectDataSubsystem : UEngineSubsystem
local USubobjectDataSubsystem = {}

---Attempts to reparent all subobjects in the HandlesToMove array to the new parent handle.
---@param Params FReparentSubobjectParams
---@param HandlesToMove TArray_FSubobjectDataHandle_
---@return boolean
function USubobjectDataSubsystem:ReparentSubobjects(Params, HandlesToMove) end

---Attempts to reparent the given subobject to the new parent
---@param Params FReparentSubobjectParams
---@param ToReparentHandle FSubobjectDataHandle
---@return boolean
function USubobjectDataSubsystem:ReparentSubobject(Params, ToReparentHandle) end

---@param BPContext UBlueprint
---@param InHandle FSubobjectDataHandle
---@param NewName string
function USubobjectDataSubsystem.RenameSubobjectMemberVariable(BPContext, InHandle, NewName) end

---Attempts to rename the given subobject to the new name.
---@param Handle FSubobjectDataHandle
---@param InNewName string
---@return boolean
function USubobjectDataSubsystem:RenameSubobject(Handle, InNewName) end

---Pastes the given subobjects to the PasteToContext.
---@param PasteToContext FSubobjectDataHandle
---@param NewParentHandles TArray_FSubobjectDataHandle_
---@param BpContext UBlueprint
---@param OutPastedHandles TArray_FSubobjectDataHandle_ @[out] 
function USubobjectDataSubsystem:PasteSubobjects(PasteToContext, NewParentHandles, BpContext, OutPastedHandles) end

---@param Context FSubobjectDataHandle
---@param NewSceneRoot FSubobjectDataHandle
---@param BPContext UBlueprint
---@return boolean
function USubobjectDataSubsystem:MakeNewSceneRoot(Context, NewSceneRoot, BPContext) end

---Gather all subobjects that the given actor instance has. Populates an array of
---handles that will have the given context and all it's subobjects.
---@param Context AActor
---@param OutArray TArray_FSubobjectDataHandle_ @[out] 
function USubobjectDataSubsystem:K2_GatherSubobjectDataForInstance(Context, OutArray) end

---Gather all subobjects that the given Blueprint context has. Populates an array of
---handles that will have the given context and all it's subobjects.
---@param Context UBlueprint
---@param OutArray TArray_FSubobjectDataHandle_ @[out] 
function USubobjectDataSubsystem:K2_GatherSubobjectDataForBlueprint(Context, OutArray) end

---Attempt to find the subobject data for a given handle. OutData will only
---be valid if the function returns true.
---@param Handle FSubobjectDataHandle
---@param OutData FSubobjectData @[out] 
---@return boolean
function USubobjectDataSubsystem:K2_FindSubobjectDataFromHandle(Handle, OutData) end

---Attempts to delete the given array of subobjects from their context
---@param ContextHandle FSubobjectDataHandle
---@param SubobjectsToDelete TArray_FSubobjectDataHandle_
---@return integer
function USubobjectDataSubsystem:K2_DeleteSubobjectsFromInstance(ContextHandle, SubobjectsToDelete) end

---Attempts to delete the given subobject from its context
---@param ContextHandle FSubobjectDataHandle
---@param SubobjectToDelete FSubobjectDataHandle
---@return integer
function USubobjectDataSubsystem:K2_DeleteSubobjectFromInstance(ContextHandle, SubobjectToDelete) end

---Returns true if the given new text is a valid option to rename the
---subobject with the given handle. Populates the OutErrorMessage if
---it is not valid.
---@param Handle FSubobjectDataHandle
---@param InNewText string
---@param OutErrorMessage string @[out] 
---@return boolean
function USubobjectDataSubsystem:IsValidRename(Handle, InNewText, OutErrorMessage) end

---Attempt to find an existing handle for the given object.
---@param Context FSubobjectDataHandle
---@param ObjectToFind UObject
---@param BPContext UBlueprint @[opt] 
---@return FSubobjectDataHandle
function USubobjectDataSubsystem:FindHandleForObject(Context, ObjectToFind, BPContext) end

---Duplicate the given array of subobjects on the context.
---@param Context FSubobjectDataHandle
---@param SubobjectsToDup TArray_FSubobjectDataHandle_
---@param BpContext UBlueprint
---@param OutNewSubobjects TArray_FSubobjectDataHandle_ @[out] 
function USubobjectDataSubsystem:DuplicateSubobjects(Context, SubobjectsToDup, BpContext, OutNewSubobjects) end

---Remove the child subobject from the owner
---@param OwnerHandle FSubobjectDataHandle
---@param ChildToRemove FSubobjectDataHandle
---@return boolean
function USubobjectDataSubsystem:DetachSubobject(OwnerHandle, ChildToRemove) end

---Attempts to delete the given array of subobjects from their context
---@param ContextHandle FSubobjectDataHandle
---@param SubobjectsToDelete TArray_FSubobjectDataHandle_
---@param BPContext UBlueprint @[opt] 
---@return integer
function USubobjectDataSubsystem:DeleteSubobjects(ContextHandle, SubobjectsToDelete, BPContext) end

---Attempts to delete the given subobject from its blueprint context
---@param ContextHandle FSubobjectDataHandle
---@param SubobjectToDelete FSubobjectDataHandle
---@param BPContext UBlueprint @[opt] 
---@return integer
function USubobjectDataSubsystem:DeleteSubobject(ContextHandle, SubobjectToDelete, BPContext) end

---Creates a new C++ component from the specified class type
---The user will be prompted to pick a new subclass name and code will be recompiled
---@param ComponentClass TSubclassOf_UActorComponent_
---@param NewClassPath string
---@param NewClassName string
---@return TSubclassOf_UObject_
function USubobjectDataSubsystem.CreateNewCPPComponent(ComponentClass, NewClassPath, NewClassName) end

---Creates a new Blueprint component from the specified class type
---The user will be prompted to pick a new subclass name and a blueprint asset will be created
---@param ComponentClass TSubclassOf_UActorComponent_
---@param NewClassPath string
---@param NewClassName string
---@return TSubclassOf_UObject_
function USubobjectDataSubsystem.CreateNewBPComponent(ComponentClass, NewClassPath, NewClassName) end

---@param Handles TArray_FSubobjectDataHandle_
---@param BpContext UBlueprint
function USubobjectDataSubsystem:CopySubobjects(Handles, BpContext) end

---Attempts to change the subclass of a native component
---@param Handle FSubobjectDataHandle
---@param NewClass TSubclassOf_UObject_
---@return boolean
function USubobjectDataSubsystem:ChangeSubobjectClass(Handle, NewClass) end

---@param RootHandle FSubobjectDataHandle
---@param BPContext UBlueprint @[opt] 
---@return boolean
function USubobjectDataSubsystem:CanPasteSubobjects(RootHandle, BPContext) end

---Returns true if the given array of handles represents subobjects that
---can be copied.
---@param Handles TArray_FSubobjectDataHandle_
---@return boolean
function USubobjectDataSubsystem:CanCopySubobjects(Handles) end

---Add the given subobject to a new owner. This will remove the subobject from its previous
---owner if necessary.
---@param OwnerHandle FSubobjectDataHandle
---@param ChildToAddHandle FSubobjectDataHandle
---@return boolean
function USubobjectDataSubsystem:AttachSubobject(OwnerHandle, ChildToAddHandle) end

---Add a new subobject as a child to the given parent object
---@param Params FAddNewSubobjectParams
---@param FailReason string @[out] 
---@return FSubobjectDataHandle
function USubobjectDataSubsystem:AddNewSubobject(Params, FailReason) end

