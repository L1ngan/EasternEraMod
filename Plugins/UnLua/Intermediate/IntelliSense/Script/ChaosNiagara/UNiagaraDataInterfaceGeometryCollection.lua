---Data Interface for the Collisions
---@class UNiagaraDataInterfaceGeometryCollection : UNiagaraDataInterface
---@field public SourceMode ENDIGeometryCollection_SourceMode @Controls how to retrieve the Skeletal Mesh Component to attach to.
---@field public PreviewCollection TSoftObjectPtr<UGeometryCollection> @Geometry collection used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds.
---@field public DefaultGeometryCollection UGeometryCollection @GeometryCollection used to sample from when not overridden by a source actor from the scene. This reference is NOT removed from cooked builds.
---@field public GeometryCollectionActor TSoftObjectPtr<AGeometryCollectionActor> @The source actor from which to sample. Takes precedence over the direct geometry collection. Note that this can only be set when used as a user variable on a niagara component in the world.
---@field public SourceComponent UGeometryCollectionComponent @The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints.
---@field public GeometryCollectionUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public bIncludeIntermediateBones boolean @If true then this data interface will also read and write intermediate bones or geometry, otherwise only leaf nodes are considered
local UNiagaraDataInterfaceGeometryCollection = {}

