---@class UInterchangeGenericLevelPipeline : UInterchangePipelineBase
---@field public PipelineDisplayName string @The name of the pipeline that will be display in the import dialog.
---@field public ReimportPropertyStrategy EReimportStrategyFlags @Set the reimport strategy when reimporting into the level.
---@field public SceneHierarchyType EInterchangeSceneHierarchyType @Choose how you want to import the hierarchy.
---@field public bDeleteMissingActors boolean @If enabled, deletes actors that were not part of the translation when reimporting into a level.
---@field public bForceReimportDeletedActors boolean @If enabled, respawns actors that were deleted in the editor prior to a reimport.
---@field public bForceReimportDeletedAssets boolean @If enabled, recreates assets that were deleted in the editor prior to reimporting into a level.
---@field public bDeleteMissingAssets boolean @If enabled, deletes assets that were not part of the translation when reimporting into a level.
---@field protected bUsePhysicalInsteadOfStandardPerspectiveCamera boolean @Disable this option to not convert Standard(Perspective) to Physical Cameras
local UInterchangeGenericLevelPipeline = {}

