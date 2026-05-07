---@class UAndroidFileServerRuntimeSettings : UObject
---@field public bEnablePlugin boolean @Enable Android FileServer for packaged builds and quick launch
---@field public bAllowNetworkConnection boolean @Allow FileServer connection using network
---@field public SecurityToken string @Optional security token required to start FileServer (leave empty to disable)
---@field public bIncludeInShipping boolean @Embed FileServer in Shipping builds
---@field public bAllowExternalStartInShipping boolean @Allow FileServer to be started in Shipping builds with UnrealAndroidFileTool
---@field public bCompileAFSProject boolean @Compile standalone AFS project
---@field public bUseCompression boolean @Enable compression during data transfer
---@field public bLogFiles boolean @Log files transferred
---@field public bReportStats boolean @Report transfer rate statistics
---@field public ConnectionType integer @How to connect to file server (USB cable, Network, or combined)
---@field public bUseManualIPAddress boolean @Use manual IP address instead of automatic query from device (only for single device deploys!)
---@field public ManualIPAddress string @IP address of device to use
local UAndroidFileServerRuntimeSettings = {}

