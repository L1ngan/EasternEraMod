---@class UUnrealEdEngine : UEditorEngine
---@field public EditorOptionsInst UUnrealEdOptions @Global instance of the editor options class.
---@field public AutoReimportManager UAutoReimportManager @Manager responsible for configuring auto reimport
---@field public MaterialCopyPasteBuffer UMaterial @A buffer for implementing material expression copy/paste.
---@field public SoundCueCopyPasteBuffer USoundCue @A buffer for implementing sound cue nodes copy/paste.
---@field public AnimationCompressionAlgorithms TArray<UAnimCompress> @Global list of instanced animation compression algorithms.
---@field public PackagesToBeFullyLoadedAtStartup TArray<string> @Array of packages to be fully loaded at Editor startup.
---@field public CurrentLODParentActor AActor @Current target for LOD parenting operations (actors will use this as the replacement)
---@field public bNeedWarningForPkgEngineVer boolean @Whether the user needs to be prompted about a package being saved with an engine version newer than the current one or not
---@field public TemplateMapInfos TArray<FTemplateMapInfo> @List of info for all known template maps
---@field public CookServer UCookOnTheFlyServer @Cooker server incase we want to cook on the side while editing...
---@field public ClassesToIgnoreDeleteReferenceWarning TArray<TSubclassOf<UObject>> @When deleting actors, these types should not generate warnings when references will be broken (this should only be types that don't affect gameplay)
local UUnrealEdEngine = {}

