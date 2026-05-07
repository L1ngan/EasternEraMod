---@class UPersonaPreviewSceneDescription : UObject
---@field public PreviewController TSubclassOf<UPersonaPreviewSceneController> @The method by which the preview is animated
---@field public PreviewControllerInstance UPersonaPreviewSceneController
---@field public PreviewControllerInstances TArray<UPersonaPreviewSceneController>
---@field public PreviewMesh TSoftObjectPtr<USkeletalMesh> @The preview mesh to use
---@field public PreviewAnimationBlueprint TSoftObjectPtr<UAnimBlueprint> @The preview anim blueprint to use
---@field public ApplicationMethod EPreviewAnimationBlueprintApplicationMethod @The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance
---@field public LinkedAnimGraphTag string @The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag
---@field public AdditionalMeshes TSoftObjectPtr<UDataAsset>
---@field public DefaultAdditionalMeshes UPreviewMeshCollection
local UPersonaPreviewSceneDescription = {}

