---@class FGroomDataflowSettings
---@field private DataflowAsset UDataflow @Dataflow asset.
---@field private DataflowTerminal string @Dataflow terminal.
---@field private SkeletalMeshes TArray<USkeletalMesh> @Hair geometry that could describe external cards and meshes.
---@field private MeshLODs TArray<integer> @LOD indices of the hair geometry used to transfer the skinnign weights
---@field private PreviewBindingAsset TSoftObjectPtr<UGroomBindingAsset> @Optional binding asset used in the dataflow Editor preview scene
---@field private PreviewAnimationAsset TSoftObjectPtr<UAnimationAsset> @Optional animation asset used in the dataflow Editor preview scene
local FGroomDataflowSettings = {}
