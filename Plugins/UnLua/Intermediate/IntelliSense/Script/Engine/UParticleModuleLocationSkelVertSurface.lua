---@class UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase
---@field public SourceType integer @Whether the module uses Verts or Surfaces for locations. VERTSURFACESOURCE_Vert          - Use Verts as the source locations. VERTSURFACESOURCE_Surface       - Use Surfaces as the source locations.
---@field public UniversalOffset FVector @An offset to apply to each vert/surface
---@field public bUpdatePositionEachFrame boolean @If true, update the particle locations each frame with that of the vert/surface
---@field public bOrientMeshEmitters boolean @If true, rotate mesh emitter meshes to orient w/ the vert/surface
---@field public bInheritBoneVelocity boolean @If true, particles inherit the associated bone velocity when spawned
---@field public InheritVelocityScale number @A scale on how much of the bone's velocity a particle will inherit.
---@field public SkelMeshActorParamName string @The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game.
---@field public EditorSkelMesh USkeletalMesh @The name of the skeletal mesh to use in the editor
---@field public ValidAssociatedBones TArray<string> @This module will only spawn from verts or surfaces associated with the bones in this list
---@field public bEnforceNormalCheck boolean @When true use the RestrictToNormal and NormalTolerance values to check surface normals
---@field public NormalToCompare FVector @Use this normal to restrict spawning locations
---@field public NormalCheckToleranceDegrees number @Normal tolerance.  0 degrees means it must be an exact match, 180 degrees means it can be any angle.
---@field public NormalCheckTolerance number @Normal tolerance.  Value between 1.0 and -1.0 with 1.0 being exact match, 0.0 being everything up to               perpendicular and -1.0 being any direction or don't restrict at all.
---@field public ValidMaterialIndices TArray<integer> @Array of material indices that are valid materials to spawn from. If empty, any material will be considered valid
---@field public bInheritVertexColor boolean @If true, particles inherit the associated vertex color on spawn. This feature is not supported for GPU particles.
---@field public bInheritUV boolean @If true, particles inherit the associated UV data on spawn. Accessed through dynamic parameter module X and Y, must be a "Spawn Time Only" parameter on "AutoSet" mode. This feature is not supported for GPU particles.
---@field public InheritUVChannel integer @UV channel to inherit from the spawn mesh, internally clamped to those available.
local UParticleModuleLocationSkelVertSurface = {}

