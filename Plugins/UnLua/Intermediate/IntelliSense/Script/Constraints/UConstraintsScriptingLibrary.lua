---This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints.
---@class UConstraintsScriptingLibrary : UBlueprintFunctionLibrary
local UConstraintsScriptingLibrary = {}

---Remove specified constraint
---@param InWorld UWorld
---@param InTickableConstraint UTickableConstraint
---@return boolean
function UConstraintsScriptingLibrary.RemoveThisConstraint(InWorld, InTickableConstraint) end

---Remove constraint at specified index
---@param InWorld UWorld
---@param InIndex integer
---@return boolean
function UConstraintsScriptingLibrary.RemoveConstraint(InWorld, InIndex) end

---Get a copy of the constraints in the current world
---      @@param InWorld World we are in
---      @@return Copy of the constraints in the level
---@param InWorld UWorld
---@return TArray_UTickableConstraint_
function UConstraintsScriptingLibrary.GetConstraintsArray(InWorld) end

---Create the transformable handle that deals with getting and setting transforms on this object
---@param InWorld UWorld
---@param InObject UObject
---@param InAttachmentName string @[opt] 
---@return UTransformableHandle
function UConstraintsScriptingLibrary.CreateTransformableHandle(InWorld, InObject, InAttachmentName) end

---Create the transformable handle that deals with getting and setting transforms on this scene component
---@param InWorld UWorld
---@param InSceneComponent USceneComponent
---@param InSocketName string
---@return UTransformableComponentHandle
function UConstraintsScriptingLibrary.CreateTransformableComponentHandle(InWorld, InSceneComponent, InSocketName) end

---Create Constraint based on the specified type.
---@param InWorld UWorld
---@param InType ETransformConstraintType
---@return UTickableTransformConstraint
function UConstraintsScriptingLibrary.CreateFromType(InWorld, InType) end

---@param InWorld UWorld
---@param InParentHandle UTransformableHandle
---@param InChildHandle UTransformableHandle
---@param InConstraint UTickableTransformConstraint
---@param bMaintainOffset boolean
---@return boolean
function UConstraintsScriptingLibrary.AddConstraint(InWorld, InParentHandle, InChildHandle, InConstraint, bMaintainOffset) end

