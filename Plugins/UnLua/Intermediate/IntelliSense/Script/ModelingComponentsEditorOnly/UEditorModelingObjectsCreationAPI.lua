---Implementation of UModelingObjectsCreationAPI suitable for use in UE Editor.
---- CreateMeshObject() currently creates a StaticMesh Asset/Actor, a Volume Actor or a DynamicMesh Actor
---- CreateTextureObject() currently creates a UTexture2D Asset
---- CreateMaterialObject() currently creates a UMaterial Asset
---This is intended to be registered in the ToolsContext ContextObjectStore.
---Static utility functions ::Register() / ::Find() / ::Deregister() can be used to do this in a consistent way.
---Several client-provided callbacks can be used to customize functionality (eg in Modeling Mode)
--- - GetNewAssetPathNameCallback is called to determine an asset path. This can be used to do
---   things like pop up an interactive path-selection dialog, use project-defined paths, etc
--- - OnModelingMeshCreated is broadcast for each new created mesh object
--- - OnModelingTextureCreated is broadcast for each new created texture object
--- - OnModelingMaterialCreated is broadcast for each new created material object
---@class UEditorModelingObjectsCreationAPI : UModelingObjectsCreationAPI
local UEditorModelingObjectsCreationAPI = {}

