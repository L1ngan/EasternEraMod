---Data interface for reading sockets from various sources.
---This can be from a live component in the scene or from a static / skeletal mesh asset.
---@class UNiagaraDataInterfaceSocketReader : UNiagaraDataInterface
---@field public SourceMode ENDISocketReaderSourceMode @Controls how we find the object we want to read sockets from.
---@field public FilteredSockets TArray<string> @List of filtered sockets.
---@field public EditorPreviewAsset TSoftObjectPtr<UObject> @When previewing in the editor this is the asset to use to gather the socket information.
---@field public SourceActor TLazyObjectPtr<AActor> @Source actor to read sockets from.
---@field public SourceAsset UObject @Source object asset to read sockets from, the transsform for these would be in relation to the Niagara system.
---@field public AttachComponentClass TSubclassOf<UObject> @When looking for an attached parent component only accept this type of component.
---@field public AttachComponentTag string @When looking for an attached parent component it must have this tag to be considered.
---@field public ObjectParameterBinding FNiagaraUserParameterBinding @Source object parameter binding. Note: Source Mode impacts the order of operations.
---@field public bUpdateSocketsPerFrame boolean @When enabled we will read update the sockets transforms each frame. This is not required in all cases as the sockets might not be able to move.
---@field public bRequireCurrentFrameData boolean @When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly       reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.
local UNiagaraDataInterfaceSocketReader = {}

