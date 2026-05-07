---UPreviewMesh is a utility object that spawns and owns a transient mesh object in the World.
---This can be used to show live preview geometry during modeling operations.
---Call CreateInWorld() to set it up, and Disconnect() to shut it down.
---Currently implemented via an internal Actor that has a UDynamicMeshComponent root component,
---with an AABBTree created/updated if FProperty bBuildSpatialDataStructure=true.
---The Actor is destroyed on Disconnect().
---The intention with UPreviewMesh is to provide a higher-level interface than the Component.
---In future the internal Component may be replaced with another class (eg OctreeDynamicMeshComponent),
---or automatically swap between the two, etc.
---As a result direct access to the Actor/Component, or a non-const FDynamicMesh3, is intentionally not provided.
---Wrapper functions are provided (or should be added) for necessary Actor/Component parameters.
---To edit the mesh either a copy is done, or EditMesh()/ApplyChange() must be used.
---These functions automatically update necessary internal data structures.
---@class UPreviewMesh : UObject
---@field public bBuildSpatialDataStructure boolean @If true, we build a spatial data structure internally for the preview mesh, which allows for hit-testing
---@field protected DynamicMeshComponent UDynamicMeshComponent @This component is set as the root component of TemporaryParentActor
local UPreviewMesh = {}

