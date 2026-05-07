---Settings for the Modeling Components plug-in. These settings are primarily used to configure two things:
---  - Behavior of things like optional Rendering features inside Modeling Tools, eg for edit-preview rendering
---  - Setup of New Mesh Objects emitted by Modeling Tools (eg their default collision settings, etc)
---@class UModelingComponentsSettings : UDeveloperSettings
---@field public bEnableRayTracingWhileEditing boolean @Enable Realtime Raytracing support for Mesh Editing Tools. This will impact performance of Tools with Real-Time feedback like 3D Sculpting.
---@field public bEnableRayTracing boolean @Enable Raytracing Support for new Mesh Objects created by Modeling Tools, if support is optional (eg DynamicMeshActors)
---@field public bGenerateLightmapUVs boolean @Enable auto-generated Lightmap UVs for new Mesh Objects created by Modeling Tools, where supported
---@field public bEnableCollision boolean @Enable Collision Support for new Mesh Objects created by Modeling Tools
---@field public CollisionMode integer @Default Collision Mode set on new Mesh Objects created by Modeling Tools
local UModelingComponentsSettings = {}

