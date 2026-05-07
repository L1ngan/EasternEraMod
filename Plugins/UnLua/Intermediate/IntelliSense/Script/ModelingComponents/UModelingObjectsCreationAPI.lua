---UModelingObjectsCreationAPI is a base interface for functions that can be used to
---create various types of objects from Modeling Tools, or other sources. The "type" is
---very generic here - "Mesh", "Texture", etc - because this API is meant to provide
---an abstraction for Tools to emit different types of objects in different situations.
---For example an Tool might emit StaticMesh Asset/Actors in-Editor, but ProceduralMeshComponents at Runtime.
---The creation inputs are specified via the structs above (eg FCreateMeshObjectParams, FCreateTextureObjectParams),
---which are very extensive, kitchen-sink sort of structs. Generally "New Mesh Object"
---creation behavior will be very complex and so this API is really just a way to route
---the data, and very few guarantees can be made about any specific implementation.
---The assumed (but not really required) usage of instances of this type are that they
---will be registered with an InteractiveToolsContext's ContextObjectStore, and then
---fetched from there by Tools/Algorithms/etc that need to use these capabilities can
---use the UE::Modeling::CreateXObject() helper functions below. However the interface
---does not have any dependencies on this usage model.
---See UEditorModelingObjectsCreationAPI for an example implementation suitable for in-Editor use.
---@class UModelingObjectsCreationAPI : UObject
local UModelingObjectsCreationAPI = {}

---Create a new texture object based on the data in CreateTexParams
---@param CreateTexParams FCreateTextureObjectParams
---@return FCreateTextureObjectResult
function UModelingObjectsCreationAPI:CreateTextureObject(CreateTexParams) end

---Create a new component on the specified actor of the requested class.
---@param CreateComponentParams FCreateComponentParams
---@return FCreateComponentResult
function UModelingObjectsCreationAPI:CreateNewComponentOnActor(CreateComponentParams) end

---Create a new material object based on the data in CreateMaterialParams
---@param CreateActorParams FCreateActorParams
---@return FCreateActorResult
function UModelingObjectsCreationAPI:CreateNewActor(CreateActorParams) end

---Create a new mesh object based on the data in CreateMeshParams
---@param CreateMeshParams FCreateMeshObjectParams
---@return FCreateMeshObjectResult
function UModelingObjectsCreationAPI:CreateMeshObject(CreateMeshParams) end

---Create a new material object based on the data in CreateMaterialParams
---@param CreateMaterialParams FCreateMaterialObjectParams
---@return FCreateMaterialObjectResult
function UModelingObjectsCreationAPI:CreateMaterialObject(CreateMaterialParams) end

