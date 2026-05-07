---The NopNetSerializer have all the serializer functions implemented
---as no-ops. The main purpose of this serializer is to allow adding
---a non-replicated member as part of a ReplicationStateDescriptor
---without incurring a bandwidth cost. This allows systems, such as
---prioritization and filtering, to access the source data given an
---instance protocol and information regarding the member, for example
---by looking for a particular RepTag.
---@class FNopNetSerializerConfig : FNetSerializerConfig
local FNopNetSerializerConfig = {}
