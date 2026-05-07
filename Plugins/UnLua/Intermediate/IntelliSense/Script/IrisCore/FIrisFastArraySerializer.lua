---Specialization of FFastArraySerializer in order to add state tracking support for Iris
---Current usage is to inherit from this struct instead of FFastArraySerializer, backwards compatible with existing system as it simply forwards calls to MarkDirty/MarkItemDirty
---This class could be named FFastArrayReplicationState, but kept the FIrisFastArraySerializer to match old naming for the time being
---@class FIrisFastArraySerializer : FFastArraySerializer
---@field private ChangeMaskStorage integer @Storage for changemask, this is currently hardcoded
local FIrisFastArraySerializer = {}
