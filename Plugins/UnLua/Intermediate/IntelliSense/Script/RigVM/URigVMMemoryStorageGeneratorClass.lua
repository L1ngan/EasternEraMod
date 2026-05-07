---The URigVMMemoryStorageGeneratorClass is used to create / represent heterogeneous
---memory storages. The generator can produce a UClass which contains a series of
---properties. This UClass is then used to instantiate URigVMMemoryStorage objects
---to be consumed by the RigVM. The memory storage objects can contain the literals
---/ constant values used by the virtual machine or work state.
---@class URigVMMemoryStorageGeneratorClass : UClass
local URigVMMemoryStorageGeneratorClass = {}

