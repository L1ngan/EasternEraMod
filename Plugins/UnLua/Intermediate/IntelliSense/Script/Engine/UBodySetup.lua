---BodySetup contains all collision information that is associated with a single asset.
---A single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.
---Assets typically implement a GetBodySetup function that is used during physics state creation.
---@class UBodySetup : UBodySetupCore
---@field public AggGeom FKAggregateGeom @Simplified collision representation of this
---@field public bConsiderForBounds boolean @Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent). There is a speed improvement from having less BodySetups processed each frame when updating the bounds.
---@field public bMeshCollideAll boolean @If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision. This is useful for forcing high detail collisions using the entire render mesh.
---@field public bDoubleSidedGeometry boolean @If true, the physics triangle mesh will use double sided faces when doing scene queries. This is useful for planes and single sided meshes that need traces to work on both sides.
---@field public bGenerateNonMirroredCollision boolean @Should we generate data necessary to support collision on normal (non-mirrored) versions of this body.
---@field public bSharedCookedData boolean @Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes
---@field public bGenerateMirroredCollision boolean @Should we generate data necessary to support collision on mirrored versions of this mesh. This halves the collision data size for this mesh, but disables collision on mirrored instances of the body.
---@field public bSupportUVsAndFaceRemap boolean @If true, the physics triangle mesh will store UVs and the face remap table. This is needed to support physical material masks in scene queries.
---@field public bNeverNeedsCookedCollisionData boolean @Indicates that we will never use convex or trimesh shapes. This is an optimization to skip checking for binary data. TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes Better long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it.
---@field public PhysMaterial UPhysicalMaterial @Physical material to use for simple collision on this body. Encodes information about density, friction etc.
---@field public WalkableSlopeOverride FWalkableSlopeOverride @Custom walkable slope setting for this body.
---@field public DefaultInstance FBodyInstance @Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance
---@field public BuildScale3D FVector @Build scale for this body setup (static mesh settings define this value)
local UBodySetup = {}

