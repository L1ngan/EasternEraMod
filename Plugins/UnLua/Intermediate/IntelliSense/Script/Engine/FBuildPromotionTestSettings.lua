---Holds settings for the editor build promotion test
---@class FBuildPromotionTestSettings
---@field public DefaultStaticMeshAsset FFilePath @Default static mesh asset to apply materials to *
---@field public ImportWorkflow FBuildPromotionImportWorkflowSettings @Import workflow settings *
---@field public OpenAssets FBuildPromotionOpenAssetSettings @Open assets settings *
---@field public NewProjectSettings FBuildPromotionNewProjectSettings @New project settings *
---@field public SourceControlMaterial FFilePath @Material to modify for the content browser step *
local FBuildPromotionTestSettings = {}
