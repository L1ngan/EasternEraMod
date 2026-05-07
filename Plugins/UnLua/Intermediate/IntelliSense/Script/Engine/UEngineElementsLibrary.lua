---@class UEngineElementsLibrary : UBlueprintFunctionLibrary
local UEngineElementsLibrary = {}

---@param ISMComponent UInstancedStaticMeshComponent
---@param InstanceIndex integer
---@param bAllowCreate boolean @[opt] 
---@return FScriptTypedElementHandle
function UEngineElementsLibrary.K2_AcquireEditorSMInstanceElementHandle(ISMComponent, InstanceIndex, bAllowCreate) end

---@param Object UObject
---@param bAllowCreate boolean @[opt] 
---@return FScriptTypedElementHandle
function UEngineElementsLibrary.K2_AcquireEditorObjectElementHandle(Object, bAllowCreate) end

---@param Component UActorComponent
---@param bAllowCreate boolean @[opt] 
---@return FScriptTypedElementHandle
function UEngineElementsLibrary.K2_AcquireEditorComponentElementHandle(Component, bAllowCreate) end

---@param Actor AActor
---@param bAllowCreate boolean @[opt] 
---@return FScriptTypedElementHandle
function UEngineElementsLibrary.K2_AcquireEditorActorElementHandle(Actor, bAllowCreate) end

