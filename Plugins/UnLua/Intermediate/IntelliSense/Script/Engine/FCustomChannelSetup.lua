---Structure for custom channel setup information.
---@class FCustomChannelSetup
---@field public Channel integer @Which channel you'd like to customize *
---@field public DefaultResponse integer @Default Response for the channel
---@field public bTraceType boolean @Sets meta data TraceType="1" for the enum entry if true. Otherwise, this channel will be treated as object query channel, so you can query object types*
---@field public bStaticObject boolean @Specifies if this is static object. Otherwise it will be dynamic object. This is used for query all objects vs all static objects vs all dynamic objects *
---@field public Name string @Name used in editor and metadata to refer to this channel
local FCustomChannelSetup = {}
