---@class UCameraLensEffectInterfaceClassSupportLibrary : UBlueprintFunctionLibrary
local UCameraLensEffectInterfaceClassSupportLibrary = {}

---Set the represented class of the passed in variable. Note: Check the tooltips on the individual pins.
---You cannot bypass the validation by connecting a wires to this node!!
---@param Class TSubclassOf_AActor_
---@param Var FCameraLensInterfaceClassSupport @[out] 
---@param Result EInterfaceValidResult @[out] 
function UCameraLensEffectInterfaceClassSupportLibrary.SetInterfaceClass(Class, Var, Result) end

---Evaluate the live interface to see if it is a valid reference.
---@param CameraLens TScriptInterface_UCameraLensEffectInterface_
---@param Result EInterfaceValidResult @[out] 
function UCameraLensEffectInterfaceClassSupportLibrary.IsInterfaceValid(CameraLens, Result) end

---Check whether or not the interface class is valid
---@param CameraLens FCameraLensInterfaceClassSupport
---@param Result EInterfaceValidResult @[out] 
function UCameraLensEffectInterfaceClassSupportLibrary.IsInterfaceClassValid(CameraLens, Result) end

---Returns the class represented by this lens effect wrapper...
---@param CameraLens FCameraLensInterfaceClassSupport
---@return TSubclassOf_AActor_
function UCameraLensEffectInterfaceClassSupportLibrary.GetInterfaceClass(CameraLens) end

