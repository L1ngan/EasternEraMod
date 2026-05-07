---@class UNetConnection : UPlayer
---@field public Children TArray<UChildConnection> @child connections for secondary viewports
---@field public Driver UNetDriver @Owning net driver
---@field public PackageMapClass TSubclassOf<UPackageMap> @The class name for the PackageMap to be loaded
---@field public PackageMap UPackageMap @Package map between local and remote. (negotiates net serialization)
---@field public OpenChannels TArray<UChannel> @
---@field public SentTemporaries TArray<AActor> @This actor is bNetTemporary, which means it should never be replicated after it's initial packet is complete
---@field public ViewTarget AActor @The actor that is currently being viewed/controlled by the owning controller
---@field public OwningActor AActor @Reference to controlling actor (usually PlayerController)
---@field public MaxPacket integer
---@field private InternalAck boolean
---@field public PlayerId FUniqueNetIdRepl @Net id of remote player on this connection. Only valid on client connections (server side).
---@field public LastReceiveTime number @Internal.
---@field public DefaultMaxChannelSize integer @Channel table.
---@field private ChannelsToTick TArray<UChannel> @The channels that need ticking. This will be a subset of OpenChannels, only including channels that need to process either dormancy or queued bunches. Should be a significant optimization over ticking and calling virtual functions on the potentially hundreds of OpenChannels every frame.
local UNetConnection = {}

